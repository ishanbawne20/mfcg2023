#include <iostream>
#include "vector.h"

int main()
{
    std::cout<<"Assignment One Evaluation"<<std::endl;
    #include <iostream>
#include "vector.h"

int main()
{
    std::cout << "Assignment One Evaluation" << std::endl;

    Vector3 vec1(1, 2, 3);
    float x,y,z;

    std::cin >> x >> y >> z;

    Vector3 v2(x,y,z);

    // Print the vectors
    std::cout << "Vector 1: ";
    vec1.print();
    std::cout << "Vector 2: ";
    vec2.print();

    // Calculate and print the length of Vector 1
    double length = vec1.length();
    std::cout << "Length of Vector 1: " << length << std::endl;

    // Perform scalar multiplication and print the result
    Vector3 scaledVector = vec1 * 2.5;
    std::cout << "Scaled Vector 1: ";
    scaledVector.print();
    std::cout<<std::endl;

    // Perform dot product and print the result
    double dotProduct = vec1 * vec2;
    std::cout << "Dot Product of Vector 1 and Vector 2: " << dotProduct << std::endl;
    std::cout<<std::endl;

    // Perform cross product and print the result
    Vector3 crossProduct = vec1.crossProduct(vec2);
    std::cout << "Cross Product of Vector 1 and Vector 2: ";
    crossProduct.print();
    std::cout<<std::endl;

    // Perform vector addition and print the result
    Vector3 sum = vec1 + vec2;
    std::cout << "Sum of Vector 1 and Vector 2: ";
    sum.print();
    std::cout<<std::endl;

    // Perform vector division by scalar and print the result
    Vector3 divisionResult = vec1 / 2;
    std::cout << "Division Result of Vector 1: ";
    divisionResult.print();
    std::cout<<std::endl;

    // Perform vector subtraction and print the result
    Vector3 difference = vec1 - vec2;
    std::cout << "Difference between Vector 1 and Vector 2: ";
    difference.print();
    std::cout<<std::endl;

    std::cin.get();

    return 0;
}
