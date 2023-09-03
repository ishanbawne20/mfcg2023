#ifndef VECTOR_H
#define VECTOR_H

#include <cmath>

class Vector3 {
public:
    // Constructors
    Vector3();
    Vector3(double x, double y, double z);

    // Destructor
    ~Vector3();

    // Member functions
    double length() const;
    double dot(const Vector3& other) const;
    Vector3 cross(const Vector3& other) const;

    // Operator overloads
    Vector3 operator*(double scalar) const;
    double operator*(const Vector3& other) const;
    Vector3 operator+(const Vector3& other) const;
    Vector3 operator-(const Vector3& other) const;
    Vector3 operator/(double scalar) const;

    // Member variables
    double x;
    double y;
    double z;
};

#endif // VECTOR_H
