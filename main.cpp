#include <iostream>
#include "vector.h"

int main()
{
    std::cout<<"Assignment One Evaluation"<<std::endl;

    Vector3 vec1(1,2,3);
    Vector3 vec2(1, 5, 3);
    float scale = 2.3f;
    vec1.print();
    double length = vec1.length();
    Vector3 vec3 = vec1 * scale;
    float vec4 = vec1 * vec2;
    Vector3 vec5 = vec5.Cross_Product(vec1, vec2);
    Vector3 vec6 = vec1 + vec2;
    Vector3 vec7 = vec1 - vec2;
    Vector3 vec8 = vec1 / scale;


    std::cout << length << std::endl;
    vec3.print();
    std::cout << vec4 << std::endl;
    vec5.print();
    vec6.print();
    vec7.print();
    vec8.print();


    std::cin.get();
    return 0;
}