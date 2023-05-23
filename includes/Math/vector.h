#pragma once
#include <iostream>

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
     double length(){
        return sqrt(x*x+y*y+z*z);
    }

    float DotProduct(Vector3 v1){
        return (x*v1.x)+(y*v1.y)+(z*v1.z);
    }

    Vector3 CrossProduct(Vector3 v1){
        float x1= (y*v1.z)-(z*v1.y);
        float y1= (z*v1.x)-(x*v1.z);
        float z1=(x*v1.y)-(y*v1.x);
        return Vector3(x1,y1,z1);
    }

    Vector3 operator +(Vector3 v1){
        float x1=x+v1.x;
        float y1=y+v1.y;
        float z1=z+v1.z;
        return Vector3(x1,y1,z1);
    }

    Vector3 operator -(Vector3 v1){
        float x1=x-v1.x;
        float y1=y-v1.y;
        float z1=z-v1.z;
        return Vector3(x1,y1,z1);
    }

    Vector3 operator /(float c){
        float x1=x/c;
        float y1=y/c;
        float z1=z/c;
        return Vector3(x1,y1,z1);
    }    

    Vector3 operator *(float c){
        float x1=x*c;
        float y1=y*c;
        float z1=z*c;
        return Vector3(x1,y1,z1);
    }

    Vector3 operator *(Vector3 v1){
        float x1=x*v1.x;
        float y1=y*v1.y;
        float z1=z*v1.z;
        return Vector3(x1,y1,z1);
    }

};

