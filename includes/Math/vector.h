#pragma once
#include <bits/stdc++.h>

class Vector3 {

    public:
    float x=0;
    float y=0;
    float z=0;

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
    double lengthOfVector(double x,double y,double z){
        return sqrt(x*x+y*y+z*z);
    }
    Vector3 operator*(double scalar){
        return Vector3(x*scalar,y*scalar,z*scalar);
    }
    double operator*(const Vector3& v){
        return x*v.x+y*v.y+z*v.z;
    }
    double dotProduct(Vector3 v){
        return x*v.x+y*v.y+z*v.z;
    }
    Vector3 crossProduct(Vector3 v){
        return Vector3(y*v.z-z*v.y,z*v.x-x*v.z,x*v.y-y*v.x);
    }
    Vector3 operator+(Vector3 v){
        return Vector3(x+v.x,y+v.y,z+v.z);
    }
    Vector3 operator/(double t){
        return Vector3(x/t,y/t,z/t);
    }
    Vector3 operator-(Vector3 v){
        return Vector3(x-v.x,y-v.y,z-v.z);
    }
};
