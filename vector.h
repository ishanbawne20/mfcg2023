#pragma once
#include <iostream>
#include<cmath>

class Vector3
{
    public:
    float x = 0;
    float y = 0;
    float z = 0;

    Vector3(){};
    ~Vector3(){};

    Vector3(float x, float y, float z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    void print()
    {
        std::cout<< "X: " << this->x <<" Y: "<< this->y <<" Z: "<< this->z <<std::endl;
    }

    // Start Your Assignment Here.
    Vector3(Vector3 v1,Vector3 v2,int scaler,char c)
    {
        float a,b,d;
        if(c=='|') {
            a=sqrt((v2.x)*(v2.x)+(v2.y)*(v2.y)+(v2.z)*(v2.z));
            b=0;
            c=0;
        }      
        if(c=='+'){
        a=v1.x+v2.x;
           b=v1.y+v2.y;
          d=v1.z+v2.z;

        }
        if(c=='-'){
      a=v1.x+v2.x;
           b=v1.y+v2.y;
          d=v1.z+v2.z; 
        }
        if(c=='*'){
        a=v1.y*v2.z-v1.z*v2.y;
    b=v2.x*v1.z-v1.x*v2.z;
     d=v1.x*v2.y-v1.y*v2.x;
        }
        if(c=='.'){
            a=(v1.x)*(v2.x)+(v1.y)*(v2.y)+(v1.z)*(v2.z);
            b=0;
            c=0;

        }
        if(c=='M'){
            a=v2.x*scaler;
b=v2.y*scaler;
d=v2.z*scaler;
        }
        if(c=='D'){
            a=(float)v2.x/scaler;
b=(float)v2.y/scaler;
d=(float)v2.z/scaler;
        }
        this->x = a;
        this->y = b;
        this->z = d;
    }
 
    
   
};
