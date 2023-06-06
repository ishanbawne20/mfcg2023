#include "color.h"
#include "ray.h"
#include "vec3.h"


#include <iostream>
#include <cmath>

// color ray_color(const ray& r) {
//     vec3 unit_direction = unit_vector(r.direction());
//     auto t = 0.5*(unit_direction.y() + 1.0);
//     return (1.0-t)*color(1.0, 1.0, 1.0) + t*color(0.5, 0.7, 1.0);
// }

// bool hit_sphere(const point3& center, double radius, const ray& r) {
//     vec3 oc = r.origin() - center;
//     auto a = dot(r.direction(), r.direction());
//     auto b = 2.0 * dot(oc, r.direction());
//     auto c = dot(oc, oc) - radius*radius;
//     auto discriminant = b*b - 4*a*c;
//     return (discriminant > 0);
// }

// color ray_color(const ray& r) {
//     if (hit_sphere(point3(0,0,-1), 0.5, r))
//         return color(1, 0, 0);
//     vec3 unit_direction = unit_vector(r.direction());
//     auto t = 0.5*(unit_direction.y() + 1.0);
//     return (1.0-t)*color(1.0, 1.0, 1.0) + t*color(0.5, 0.7, 1.0);
// }

color ray_color(const ray& r, double radius, double i,float x) {
    auto unit_direction_z = unit_vector(r.direction()).z();
    vec3 unit_direction = unit_vector(r.direction());
    auto t = -1/unit_direction_z;
    point3 centre = vec3(0, 0, -1);
    auto a = (r.origin() + r.direction()*t- centre).x();
    auto b = (r.origin() + r.direction()*t- centre).y();
    auto A = pow(b*b*i/(a*a+i),0.5);
    auto ratio = pow(A/radius-floor(A/radius), 1.2);
    // auto b = 2*t*dot(r.origin() - centre,unit_direction);
    // auto c = t*t*unit_direction.length_squared();

    // double dist = 0;
    // if (b*b > a*a/100){
    //     dist = pow(1/(b*b - a*a/100),0.5);
    // } else {
    //     return color(0,0,0);
    // }

    // double ratio = pow(dist/radius, 0.6) - floor(pow(dist/radius, 0.6));
    double t1 = pow(4,x)*pow(ratio*(1-ratio),x);

    return t1*color(1,1,1) + (1-t1)*color(0,0,0);
    // auto t = 0.5*(unit_direction.y() + 1.0);
    // return (1.0-t)*color(1.0, 1.0, 1.0) + t*color(0.5, 0.7, 1.0);
}

int main() {

    // Image
    const auto aspect_ratio = 16.0 / 9.0;
    const int image_width = 800;
    const int image_height = static_cast<int>(image_width / aspect_ratio);

    // Camera

    auto viewport_height = 2.0;
    auto viewport_width = aspect_ratio * viewport_height;
    auto focal_length = 1.0;

    auto origin = point3(0, 0, 0);
    auto horizontal = vec3(viewport_width, 0, 0);
    auto vertical = vec3(0, viewport_height, 0);
    auto lower_left_corner = origin - horizontal/2 - vertical/2 - vec3(0, 0, focal_length);

    // Render

    std::cout << "P3\n" << image_width << " " << image_height << "\n255\n";

    for (int j = image_height-1; j >= 0; --j) {
        std::cerr << "\rScanlines remaining: " << j << ' ' << std::flush;
        for (int i = 0; i < image_width; ++i) {
            auto u = double(i) / (image_width-1);
            auto v = double(j) / (image_height-1);
            ray r(origin, lower_left_corner + u*horizontal + v*vertical - origin);
            color pixel_color = ray_color(r,0.55,2.2,2.5);
            write_color(std::cout, pixel_color);
        }
    }

    std::cerr << "\nDone.\n";
}