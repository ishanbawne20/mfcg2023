#pragma once
#include <iostream>
#include <cstdio>
#include <cmath>

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

    // Implementing Length of a Vector

    double length(){
        return sqrt(x*x + y*y + z*z);
    }

    // Implementing Dot Product
    double DotProduct (Vector3 v1){
        return v1.x*x + v1.y*y + v1.z*z;
    }

    // Implementing Cross Product
    Vector3 CrossProduct (Vector3 v1){
        float X = y*v1.z-z*v1.y;
        float Y = z*v1.x-x*v1.z;
        float Z = x*v1.y-y*v1.x;
        Vector3 v(X,Y,Z);
        return v;
    }

    // Implementing unit vector
    Vector3 unitVector(){
        Vector3 v1(x,y,z);
        Vector3 v2(v1.x/v1.length(),v1.y/v1.length(),v1.z/v1.length());
        return v2;
    }
};

// Implementing multiplication with scalar
Vector3 operator * (Vector3 const& v1,float const& r){
    Vector3 v2(r*v1.x,r*v1.y,r*v1.z);
    return v2;
}

// Implementing division with scalar
Vector3 operator / (Vector3 const& v1,float const& r){
    Vector3 v2(v1.x/r,v1.y/r,v1.z/r);
    return v2;
}

// Implementing vector addition
Vector3 operator + (Vector3 const& v1,Vector3 const& v2){
    Vector3 v3(v1.x+v2.x,v1.y+v2.y,v1.z+v2.z);
    return v3;
}

// Implementing vector subtraction
Vector3 operator - (Vector3 const& v1,Vector3 const& v2){
    Vector3 v3(v1.x-v2.x,v1.y-v2.y,v1.z-v2.z);
    return v3;
}

// Implementing dot product
double operator * (Vector3 v1,Vector3 const& v2){
    return v1.DotProduct(v2);
}