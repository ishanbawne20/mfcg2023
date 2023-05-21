#include <iostream>
#include "includes\Math\vector.h"       
//vector.h"

int main()
{   
    Vector3 add(3,2,1);
    Vector3 sub(1,1,1);
    float mul = 2;
    float div = 4;
    Vector3 dot(1,1,1);
    Vector3 cross(1,1,-2);

    std::cout<<"Assignment One Evaluation"<<std::endl;

    Vector3 vec(1,2,3);
    vec.print();
    //std::cin.get();

    vec.length();

    vec = vec + add;
    vec.print();

    std::cout<<vec * dot<<std::endl;

    vec = vec - sub;
    vec.print();

    vec = vec * mul;
    vec.print();

    vec = vec / div;
    vec.print();

    vec.dot(dot);
    vec.print();

    vec.cross(cross);
    vec.print();

    return 0;
}
