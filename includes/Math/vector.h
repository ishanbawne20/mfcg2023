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
    
    double length()
    {
        double l;
        l = this->x * this->x + this->y * this->y + this->z * this->z;
        l = sqrt(l);

        return l;
    }

    Vector3 Cross_Product(Vector3 V1, Vector3 V2)
    {
        Vector3 cross;
        
        cross.x = V1.y * V2.z - V1.z * V2.y;
        cross.y = V1.z * V2.x - V1.x * V2.z;
        cross.z = V1.x * V2.y - V1.y * V2.x;
        return cross;
    }
};
Vector3 operator*(Vector3 const& V1, float const& r)
{
    return Vector3(V1.x * r, V1.y * r, V1.z * r);
}
float operator*(Vector3 const& V1, Vector3 const& V2)
{
    return float(V1.x * V2.x + V1.y * V2.y + V1.z * V2.z);
}

Vector3 operator+(Vector3 const& V1, Vector3 const& V2)
{
    return Vector3(V1.x + V2.x, V1.y + V2.y, V1.z + V2.z);
}

Vector3 operator-(Vector3 const& V1, Vector3 const& V2)
{
    return Vector3(V1.x - V2.x, V1.y - V2.y, V1.z - V2.z);
}

Vector3 operator/(Vector3 const& V1, float const& r)
{
    return Vector3(V1.x/r, V1.y/r, V1.z/r);
}

