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
 Vector3 operator + (Vector3 v2){
        Vector3 v3(0,0,0);
        v3.x = this->x + v2.x;
        v3.y = this->y + v2.y;
        v3.z = this->z + v2.z;
        return v3;
    }
    Vector3 operator - (Vector3 v2){
        Vector3 v3(0,0,0);
        v3.x = this->x - v2.x;
        v3.y = this->y - v2.y;
        v3.z = this->z - v2.z;
        return v3;
    }
    Vector3 operator / (float k){
        Vector3 v3;
        v3.x = this->x/k;
        v3.y = this->y/k;
        v3.z = this->z/k;
        return v3;
    }
    Vector3 operator * (Vector3 v2){
        Vector3 v3(0,0,0);
        v3.x = this->x*v2.x;
        v3.y = this->y*v2.y;
        v3.z = this->z*v2.z;
        return v3;
    }
    void print_dot(){
        float sum = x+y+z;
        std::cout<<sum<<std::endl;
    }
    //cross product;
    Vector3 operator *= (Vector3 v2){
        Vector3 v3(0,0,0);
        v3.x = this->y*v2.z-this->z*v2.y;
        v3.y = -(this->x*v2.z-this->z*v2.x);
        v3.z = this->x*v2.y-this->y*v2.x;
        return v3;
    }
};

