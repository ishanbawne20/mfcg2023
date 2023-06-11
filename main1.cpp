#include "color.h"
#include "ray.h"
#include "vec3.h"
#include <fstream>

#include <iostream>

color ray_color(const ray& r) {
    vec3 fp=vec3(0,0,-1);
    vec3 rad= r.direction()-fp;
    double x=rad.x();
    double y=rad.y();
    double c=1;
    double m=y*y/(c+x*x);
    int k=10;
    m*=k;
    int r1=static_cast<int>(m);
    double clr;
    if(r1%2==0){
        clr=m-r1;
    }
    else{
        clr=r1+1-m;
    }
    return color(clr,clr,clr);
}

int main() {

    // Image
    const auto aspect_ratio = 16.0 / 9.0;
    const int image_width = 400;
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
            color pixel_color = ray_color(r);
            write_color(std::cout, pixel_color);
        }
    }

    std::cerr << "\nDone.\n";
}
