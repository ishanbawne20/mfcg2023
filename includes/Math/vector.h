#pragma once
#include <iostream>
#include <cmath>

class Vector3
{
    private:
        float x = 0;
        float y = 0;
        float z = 0;

    public:
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

        double length ()
        {
            double len;
            float x = this->x;
            float y = this->y;
            float z = this->z;

            len = x * x + y * y + z * z;
            len = sqrt(len);

            return len;
        }

        double scalerProduct(const Vector3& other)
        {
            double dotProduct;
            float x = this->x;
            float y = this->y;
            float z = this->z;

            dotProduct = x * other.x + y * other.y + z * other.z;
            return dotProduct;
        }

        Vector3 vectorProduct(const Vector3& other)
        {
            Vector3 crossProduct;
            float x = this->x;
            float y = this->y;
            float z = this->z;

            crossProduct.x = y * other.z - z * other.y;
            crossProduct.y = z * other.x - x * other.z;
            crossProduct.z = x * other.y - y * other.x;

            return crossProduct;
        }

        Vector3 operator*(float scaler) const
        {
            return Vector3(x * scaler, y * scaler, z * scaler);
        }

        double operator*(const Vector3& other) const
        {
            double dotProduct;
            dotProduct = x * other.x + y * other.y + z * other.z;

            return dotProduct;
        }

        Vector3 operator+(const Vector3& other) const
        {
            Vector3 addVector;
            addVector.x = x + other.x;
            addVector.y = y + other.y;
            addVector.z = z + other.z;

            return addVector;
        }

        Vector3 operator/(double scaler) const
        {
            return Vector3(x / scaler, y / scaler, z / scaler);
        }

        Vector3 operator-(const Vector3& other) const
        {
            Vector3 subVector;
            subVector.x = x - other.x;
            subVector.y = y - other.y;
            subVector.z = z - other.z;

            return subVector;
        }
};

