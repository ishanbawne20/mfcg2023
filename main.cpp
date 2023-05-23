#include <iostream>
#include "./includes\Math/vector.h"
using namespace std;

int main()
{
    cout<<"Assignment One Evaluation"<<endl;

    Vector3 vec1(1,2,3);
    Vector3 vec2(3, 4, 5);
    float scaler = 2.5f;

    // Print
    vec1.print();
    // Lenght
    cout << "Lenght of vec1 is : " << vec1.length() << endl;
    // Dot Product
    cout << "The Dot Product of vec1 and vec2 is: " << vec1.scalerProduct(vec2) << endl;
    // Cross Product
    cout << "The Cross Product of vec1 and vec2 is: ";
    vec1.vectorProduct(vec2).print();
    // * operator overloading
    cout << "The scaler multiplication of vec1 with scaler is: ";
    (vec1 * scaler).print();
    // + operator overloading
    cout << "The addition of vec1 and vec2 is: ";
    (vec1 + vec2).print();
    // - operator overloading
    cout << "The subtraction of vec1 and vec2 is: ";
    (vec1 - vec2).print();
    // / operator overloading
    cout << "The scaler division of vec1 with scaler is; ";
    (vec1 / scaler).print();

    // cin.get();
    return 0;
}