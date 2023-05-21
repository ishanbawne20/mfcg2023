#include <iostream>
#include "vector.h"

int main()
{
    std::cout<<"Assignment One Evaluation"<<std::endl;

    Vector3 vec1{ 1, 2, 3 };
    Vector3 vec2{ 2, 4, 6 };
    Vector3 vec3{ 21, 2, 0 };

    std::cout << "Length of the vector (" << vec1.x << ", " << vec1.y << ", " << vec1.z << "): " << vec1.length() << std::endl;
    
    std::cout << "Scalar multiplication of (" << vec1.x << ", " << vec1.y << ", " << vec1.z << ") by 3: ";
    vec1 = vec1(3);
    vec1.print();
    
    std::cout << "Dotting (" << vec1.x << ", " << vec1.y << ", " << vec1.z << ") with (" << vec2.x << ", " << vec2.y << ", " << vec2.z << "): " << vec1.dot(vec2) << std::endl;
    std::cout << "Dotting (" << vec2.x << ", " << vec2.y << ", " << vec2.z << ") with (" << vec3.x << ", " << vec3.y << ", " << vec3.z << "): " << vec2 * vec3 << std::endl;

    std::cout << "Crossing (" << vec1.x << ", " << vec1.y << ", " << vec1.z << ") with (" << vec2.x << ", " << vec2.y << ", " << vec2.z << "): ";
    vec1 = vec1.cross(vec2);
    vec1.print();

    std::cout << "Adding (" << vec2.x << ", " << vec2.y << ", " << vec2.z << ") to (" << vec3.x << ", " << vec3.y << ", " << vec3.z << "): ";
    vec3 = vec2 + vec3;
    vec3.print();

    std::cout << "Dividing (" << vec3.x << ", " << vec3.y << ", " << vec3.z << ") by 27: "; 
    vec3 = vec3 / 27;
    vec3.print();

    std::cout << "Subtracting (" << vec2.x << ", " << vec2.y << ", " << vec2.z << ") from (" << vec3.x << ", " << vec3.y << ", " << vec3.z << "): ";
    vec3 = vec3 - vec2;
    vec3.print();
 
    std::cin.get();
    return 0;
}