#pragma once
#include <iostream>
#include <math.h>

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

    double length(){
        return sqrt(this->x*this->x + this->y*this->y + this->z*this->z);
    }

    Vector3 operator+(Vector3 v){
        Vector3 ans(this->x + v.x, this->y + v.y, this->z + v.z);
        return ans;
    }

    Vector3 operator-(Vector3 v){
        Vector3 ans(this->x - v.x, this->y - v.y, this->z - v.z);
        return ans;
    }

    Vector3 operator*(float p){
        Vector3 ans(this->x * p, this->y * p, this->z * p);
        return ans;
    }
    
    double operator*(Vector3 v){
        double ans = 0;
        ans += this->x * v.x;
        ans += this->y * v.y;
        ans += this->z * v.z;
        return ans;
    }

    Vector3 operator/(float p){
        Vector3 ans(this->x / p, this->y / p, this->z / p);
        return ans;
    }

    double dot(Vector3 v){
        double ans = 0;
        ans += this->x * v.x;
        ans += this->y * v.y;
        ans += this->z * v.z;
        return ans;
    }

    Vector3 cross(Vector3 v){
        Vector3 ans;
        ans.x = this->y * v.z - this->z * v.y;
        ans.y = this->z * v.x - this->x * v.z;
        ans.z = this->x * v.y - this->y * v.x;
        return ans;
    }
};

