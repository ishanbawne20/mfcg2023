#include <iostream>
#include "vector.h"
#include<cmath>
using namespace std;
int main()
{
    cout<<"Assignment One Evaluation"<<endl;
float x2,y2,z2,n2;
char c;

    cin>>x2>>y2>>z2>>n2>>c;
    

    Vector3 vec1(1,2,3);
    Vector3 vec2(x2,y2,z2);
    Vector3 v(vec1,vec2,n2,c);
    if(c=='.'||c=='|')
    cout<<v.x;
    else
    cout<<v.x<<" "<<v.y<<" "<<v.z;
    
    return 0;
}