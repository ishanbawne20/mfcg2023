#include <iostream>
#include "vector.h"
int main()
{
    std::cout<<"Assignment One Evaluation"<<std::endl;
    Vector3 v1(1,2,3);
    //vec1.print();
    float x,y,z;

    std::cin >> x >> y >> z;
     
    Vector3 v2(x,y,z);
    Vector3 v_add = v1 + v2;
    Vector3 v_sub = v1-v2;
    Vector3 v_div = v1/4;
    Vector3 v_dot = v1 * v2;
    Vector3 v_cross = v1*=v2;
    //addtion
    std::cout << "addtion of vectors is : ";
    v_add.print();
    std::cout << std::endl;

    //subtraction
    std::cout<<"subtraction of two vectors";
    v_sub.print();
    std::cout<<std::endl;
    std::cout<<"scalar division with 4 :";
    v_div.print();
    std::cout<<std::endl;

    std::cout<<"dot product of vectors :";
    v_dot.print_dot();
    std::cout<<std::endl;
    std::cout<<"cross product of vectors:";
    v_cross.print();
    std::cout<<std::endl;
    return 0;
}
