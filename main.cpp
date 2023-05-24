#include <iostream>
#include "vector.h"
using namespace std;
int main()
{
    std::cout<<"Assignment One Evaluation"<<std::endl;

    Vector3 vec1(1,2,3);
    Vector3 vec2(3,4,5);
    Vector3 vec3;
    
    vec1.print();

    cout<<"Length="<<vec1.length()<<endl;

    vec3=vec1+vec2;
    cout<<"Sum=";
    vec3.print();

    vec3=vec1-vec2;
    cout<<"Difference=";
    vec3.print();   

    cout<<"Dot product="<<vec1.dot(vec2)<<endl;
    cout<<"Dot product="<<vec1*vec2<<endl;

    vec3=vec1*2;
    cout<<"Scalar multipication=";
    vec3.print();

    vec3=vec1/2;
    cout<<"Scalar division=";
    vec3.print();
    return 0;
}
