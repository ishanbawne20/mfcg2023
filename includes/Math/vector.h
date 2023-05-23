#include<iostream>
#include<math.h>
using namespace std;


class Vector3{
public:
    double x;double y;double z;

    Vector3(){
        x = 0; y = 0 ; z = 0;
    }
    Vector3(double a , double b , double c){
        x = a; y = b; z = c;
    }
    Vector3(double a){
        x = a; y = a; z = a;
    }
    Vector3(const Vector3& v){
        x = v.x ; y = v.y ; z = v.z;
    }
    void print(){
        cout << "(" << x << " " << y << " " << z << ")" << endl;
    }
    double length(){
        return sqrt(x*x+y*y+z*z); // return length of vector
    }
    Vector3 operator * (const double& s){
        
        return Vector3(s*x,s*y,s*z); //return scalar mul by using operator overloading 
    }
    double operator * (const Vector3& v){
        return x*v.x+y*v.y+z*v.z; // return the dot product using operator overloading
    }
    double dot_product(Vector3 v){
        return x*v.x+y*v.y+z*v.z; // return the dot product using member function
    }
    Vector3 cross_product(Vector3 v){
        return Vector3(y*v.z-z*v.y,z*v.x-x*v.z,x*v.y-y*v.x); // return the cross product 
    }
    Vector3 operator + (const Vector3& v){
        return Vector3(x+v.x,y+v.y,z+v.z); // return addition of two vectors
    }
    Vector3 operator / (const double s){
        return Vector3(x/s,y/s,z/s); // return division by a scalar
    }
    Vector3 operator - (const Vector3& v){
        return Vector3(x-v.x,y-v.y,z-v.z); // return subtration of two vectors
    }
    
};
Vector3 operator * (const double& s,const Vector3& v){
    return Vector3(s*v.x,s*v.y,s*v.z); //return scalar mul by using operator overloading 
}

