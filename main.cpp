#include <iostream>
#include "vector.h"

// Constructors
Vector3::Vector3() : x(0.0), y(0.0), z(0.0) {}
Vector3::Vector3(double x, double y, double z) : x(x), y(y), z(z) {}

// Destructor
Vector3::~Vector3() {}

// Member functions
double Vector3::length() const {
    return std::sqrt(x * x + y * y + z * z);
}

double Vector3::dot(const Vector3& other) const {
    return x * other.x + y * other.y + z * other.z;
}

Vector3 Vector3::cross(const Vector3& other) const {
    double newX = y * other.z - z * other.y;
    double newY = z * other.x - x * other.z;
    double newZ = x * other.y - y * other.x;
    return Vector3(newX, newY, newZ);
}

// Operator overloads
Vector3 Vector3::operator*(double scalar) const {
    return Vector3(x * scalar, y * scalar, z * scalar);
}

double Vector3::operator*(const Vector3& other) const {
    return dot(other);
}

Vector3 Vector3::operator+(const Vector3& other) const {
    return Vector3(x + other.x, y + other.y, z + other.z);
}

Vector3 Vector3::operator-(const Vector3& other) const {
    return Vector3(x - other.x, y - other.y, z - other.z);
}

Vector3 Vector3::operator/(double scalar) const {
    if (scalar != 0) {
        return Vector3(x / scalar, y / scalar, z / scalar);
    } else {
        // Handle division by zero gracefully
        return *this;
    }
}


int main() {
    // Create two Vector3 objects
    Vector3 v1(1.0, 2.0, 3.0);
    Vector3 v2(4.0, 5.0, 6.0);

    // Calculate and display the length of v1
    double len = v1.length();
    std::cout << "Length of v1: " << len << std::endl;

    // Calculate and display the dot product of v1 and v2
    double dotProduct = v1 * v2;
    std::cout << "Dot Product of v1 and v2: " << dotProduct << std::endl;

    // Calculate and display the cross product of v1 and v2
    Vector3 crossProduct = v1.cross(v2);
    std::cout << "Cross Product of v1 and v2: (" << crossProduct.x << ", " << crossProduct.y << ", " << crossProduct.z << ")" << std::endl;

    // Perform scalar multiplication
    double scalar = 2.0;
    Vector3 scaledVector = v1 * scalar;
    std::cout << "v1 * 2.0: (" << scaledVector.x << ", " << scaledVector.y << ", " << scaledVector.z << ")" << std::endl;

    // Perform vector addition and subtraction
    Vector3 sum = v1 + v2;
    Vector3 diff = v1 - v2;

    std::cout << "v1 + v2: (" << sum.x << ", " << sum.y << ", " << sum.z << ")" << std::endl;
    std::cout << "v1 - v2: (" << diff.x << ", " << diff.y << ", " << diff.z << ")" << std::endl;

    // Perform division by scalar
    Vector3 dividedVector = v1 / scalar;
    std::cout << "v1 / 2.0: (" << dividedVector.x << ", " << dividedVector.y << ", " << dividedVector.z << ")" << std::endl;

    return 0;
}
