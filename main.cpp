#include <iostream>
#include "vector.h"

int main()
{
    std::cout<<"Assignment One Evaluation"<<std::endl;

    // fixed vector
    Vector3 vec1(1,2,3);
    Vector3 vec2(3,2,5);

    // implementing print() function
    vec1.print();
    vec2.print();

    //implementing length() function
    std::cout << "length of Vector1 is " << vec1.length() << std::endl;
    std::cout << "length of Vector2 is " << vec2.length() << std::endl;

    //implementing dot product
    std::cout << "Dot Product is " << vec1.DotProduct(vec2) << std::endl;

    //implementing cross product
    Vector3 vec3 = vec1.CrossProduct(vec2);
    std::cout << "Cross Product is " << std::endl;
    vec3.print();

    //implementing unit Vector    
    std::cout << "Unit Vector1 is " << std::endl;
    vec1.unitVector().print();
    std::cout << "Unit Vector2 is " << std::endl;
    vec2.unitVector().print();

    //implementing scalar multiplication and division
    std::cout<<"Enter Scalar"<<std::endl;
    float r;
    std::cin >> r;
    (vec1 * r).print();
    (vec2 * r).print();
    (vec1 / r).print();
    (vec2 / r).print();

    //implementing dot product
    std::cout << "Dot Product is " << vec1*vec2 << std::endl;

    //implementing addition
    std::cout << "Sum is " << std::endl;
    (vec1+vec2).print();

    //implementing subtraction
    std::cout << "Difference is " << std::endl;
    (vec1-vec2).print();

    return 0;
}