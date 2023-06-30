#include <iostream>
#include<random>
#include<ctime>
#include "vec3.h"

int main() {
    srand(time(NULL));
    int nx = 300;
    int ny = 200;
    std::cout << "P3\n" << nx << " " << ny << "\n255\n";
    for (int j = ny-1; j >= 0; j--) {
        std::cerr<<"Scanlines remaining :"<<j<<std::flush;
        for (int i = 0; i < nx; i++) {
            vec3 col = vec3(0,0,0);
            col[0]= rand()/static_cast<float>(RAND_MAX);
            col[1]= rand()/static_cast<float>(RAND_MAX);
            col[2]= rand()/static_cast<float>(RAND_MAX);
            int ir = int(255.99*col[0]);
            int ig = int(255.99*col[1]);
            int ib = int(255.99*col[2]);
            std::cout << ir << " " << ig << " " << ib << " ";
        }
        std::cout<<"\n";
    }
}