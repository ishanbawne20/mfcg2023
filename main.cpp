// this code consist of a const vector3 v1(1, 2,3 )
//another vector3 is the variable vector Vector3 v2(x2,y2,z2),variable n2 is the factor by which v2 is scaled or de scaled 
//charecter c is for the operator
//input are in order x2,y2,z2,n2,c
// c='.'(dot product between v1 and v2),c='*'(cross product),c='|'(magnitude of variable vector3)
//c='+'(addition of v1 and v2),c='-'(subraction of v1 and v2),c='D'(descaling of v2 by n2),c='M'(scaling of v2 by n2)
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