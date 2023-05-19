
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
    double vector_magnitude(Vector3 v1)
    {
        double m;
        m=sqrt((v1.x)*(v1.x)+(v1.y)*(v1.y)+(v1.z)*(v1.z));
        return m;
    }
Vector3(Vector3 v1,int scaler,char c)
{
this->x=v1.x*scaler;
this->y=v1.y*scaler;
this->z=v1.z*scaler;
}
double Dot_product(Vector3 v1,Vector3 v2)
{
    double Dot;
    Dot=(v1.x)*(v2.x)+(v1.y)*(v2.y)+(v1.z)*(v2.z);
    return Dot;
}
Vector3(Vector3 v1,Vector3 v2)
{
    this->x=v1.y*v2.z-v1.z*v2.y;
    this->y=v2.x*v1.z-v1.x*v2.z;
    this->z=v1.x*v2.y-v1.y*v2.x;
}
Vector3(Vector3 v1,Vector3 v2,char c)
{
    this->x=v1.x+v2.x;
    this->y=v1.y+v2.y;
    this->z=v1.z+v2.z;
}
Vector3(Vector3 v1,Vector3 v2,int c)
{
    this->x=v1.x-v2.x;
    this->y=v1.y-v2.y;
    this->z=v1.z-v2.z;
}
Vector3(Vector3 v1,int scaler,int c)
{
this->x=v1.x/scaler;
this->y=v1.y/scaler;
this->z=v1.z/scaler;
}
};
