#pragma once
#include <iostream>
//#include <math.h> Why does the project work without including math? 


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

    double length() {
        double len;
        len = sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
        //len = std::hypot(this->x, this->y, this->z); 
        return len;
    }

    Vector3 operator()(const float& scalar) {
        x = scalar * x;
        y = scalar * y;
        z = scalar * z;
        return *this;
    }

    long double dot(const Vector3& ref) {
        return x * ref.x + y * ref.y + z * ref.z;
    }

    long double operator*(const Vector3& operand) {
        return dot(operand);
    }

    Vector3 cross(const Vector3& that) {
        Vector3* product = new Vector3();
        product->x = y * that.z - z * that.y;
        product->y = z * that.x - x * that.z;
        product->z = x * that.y - y * that.x;
        return *product;
    }

    Vector3 operator+(const Vector3& operand) {
        x = x + operand.x;
        y = y + operand.y;
        z = z + operand.z;
        return *this;
    }

    Vector3 operator/(const long double operand) {
        x = x / operand;
        y = y / operand;
        z = z / operand;
        return *this;
    }

    Vector3 operator-(const Vector3& operand) {
        x = x - operand.x;
        y = y - operand.y;
        z = z - operand.z;
        return *this;
    }
};

   

    