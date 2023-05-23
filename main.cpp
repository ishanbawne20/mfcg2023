#include <iostream>
#include "vector.h"

int main()
{
    std::cout<<"Assignment One Evaluation"<<std::endl;

    Vector3 vec1(1,2,3);
    vec1.print();
    std::cin.get();
    Vector3 v2(4,5,6);

    //length of the vector
    std::cout<<(v1.length())<<"\n";

    //scaalar multiplication (*) overloading
    (v1*4).print();

    //vector multiplication (*) overloading
    (v1*v2).print();

    //dot product of two vecctors
    std::cout<<v1.DotProduct(v2)<<"\n";

    //cross product of two vectors
    (v1.CrossProduct(v2)).print();

    //addition of two vectors
    (v1+v2).print();

    //division by scalar
    (v1/2).print();

    //subtraction between two vectors
    (v1-v2).print();
    return 0;
}
