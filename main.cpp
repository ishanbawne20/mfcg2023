#include <iostream>
#include "includes/Math/vector.h"

int main()
{
    std::cout<<"Assignment One Evaluation"<<std::endl;

    Vector3 vec1(1,2,3);
    Vector3 vec2(4,5,6);
    vec1.print();
    vec1.lengthOfVector(3,4,5);
    vec1.operator*(7);
    vec1.operator*(vec2);
    vec1.dotProduct(vec2);
    vec1.crossProduct(vec2);
    vec1.operator+(vec2);
    vec1.operator/(5);
    vec1.operator-(vec2);
    std::cin.get();
    return 0;
}
