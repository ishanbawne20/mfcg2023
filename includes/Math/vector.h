
#pragma once
#include <iostream>
#include <cmath>
class Vector3
{
    public:
    float x = 0;
    float y = 0;
    float z = 0;

    Vector3(){};
    ~Vector3(){};

    Vector3(double x, double y, double z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    void print()
    {
        std::cout<< "X: " << this->x <<" Y: "<< this->y <<" Z: "<< this->z <<std::endl;
    }
     
    double length()
    {
        double l=sqrt(x*x+y*y+z*z);
        return l;
    }
    Vector3 operator* (double s)
    {
        Vector3 v2;
        v2.x=x*s;
        v2.y=y*s;
        v2.z=z*s;
        return v2;
    }
    double operator* (Vector3 v1)
    {
        double dot;
        dot=v1.x*(x)+v1.y*(y)+v1.z*(z);
        return dot;
    }
    Vector3 operator+(Vector3 v1)
    {
        Vector3 v2;
        v2.x=x+v1.x;
        v2.y=y+v1.y;
        v2.z=z+v1.z;
        return v2;
    }
    Vector3 operator-(Vector3 v1)
    {
        Vector3 v2;
        v2.x=x-v1.x;
        v2.y=y-v1.y;
        v2.z=z-v1.z;
        return v2;
    }
    Vector3 operator/(double s)
    {
        Vector3 v1;
        v1.x=x/s;
        v1.y=y/s;
        v1.z=z/s;
        return v1;
    }
    double dot(Vector3 v1)
    {
        double dot;
        dot=v1.x*(x)+v1.y*(y)+v1.z*(z);
        return dot;
    }
    Vector3 cross(Vector3 v1)
    {
        Vector3 v2;
        v2.x=x*v1.z-z*v1.y;
        v2.y=z*v1.x-x*v1.z;
        v2.z=x*v1.y-y*v1.x;
        return v2;
    }
};
