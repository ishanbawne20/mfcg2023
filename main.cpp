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
    Vector3 cross(3,6,9);

    std::cout<<"Assignment One Evaluation"<<std::endl;

    Vector3 vec(1,2,3);
    vec.print();
    //std::cin.get();

    std::cout<<vec.length()<<std::endl;

    Vector3 vecA = vec + add;
    vecA.print();

    Vector3 vecS = vec - sub;
    vecS.print();
    
    std::cout<<vec * dot<<std::endl;

    Vector3 vecM = vec * mul;
    vecM.print();

    Vector3 vecD = vec / div;
    vecD.print();

    
    std::cout<<vec.dot(dot)<<std::endl;

    Vector3 vecC = vec.cross(cross);
    vecC.print();

    return 0;
}
