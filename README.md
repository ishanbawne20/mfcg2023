# Assignment 1
This assignment focuses on implementing a 3D vector class and its related operations. Your task is to develop a header file named `vector.h` that encompasses the following features:

3D Vector Class:

Define a class named `Vector3` that represents a 3D vector.
The class should have the necessary member variables to store the x, y, and z components of the vector.
Implement appropriate constructors and destructors as per the requirements.
Length of Vector Function:

Implement a member function within the Vector3 class that calculates the length (magnitude) of the vector.
The function should return a double value representing the length of the vector.
Scalar Multiplication (*) Operator Overloading:

Overload the (*) operator to enable scalar multiplication with a vector.
The overloaded operator should allow multiplying the vector by a scalar value.
The result should be a new Vector3D object with the scaled vector components.
Vector Multiplication (*) Operator Overloading:

Overload the (*) operator to enable vector multiplication (dot product) between two vectors.
The overloaded operator should take another Vector3 object as an argument.
The result should be a new Vector3 object representing the dot product of the two vectors.
Dot Product:

Implement a member function within the Vector3 class that calculates the dot product between two vectors.
The function should take another Vector3 object as an argument and return a double value representing the dot product.
Cross Product:

Implement a member function within the Vector3 class that calculates the cross product between two vectors.
The function should take another Vector3 object as an argument and return a new Vector3D object representing the cross product.
Addition of Vectors:

Overload the (+) operator to enable addition between two vectors.
The overloaded operator should take another Vector3 object as an argument.
The result should be a new Vector3 object representing the sum of the two vectors.
Division by Scalar (/) Operator Overloading:

Overload the (/) operator to enable division of a vector by a scalar value.
The overloaded operator should take a scalar value as an argument.
The result should be a new Vector3 object with the vector components divided by the scalar.
Subtraction of Vectors:

Overload the (-) operator to enable subtraction between two vectors.
The overloaded operator should take another Vector3 object as an argument.
The result should be a new Vector3 object representing the difference between the two vectors.

Note: You are expected to implement the `vector.h` header file containing the class definition and member function implementations as specified above. Additionally, include any necessary member variables or helper functions to facilitate the operations.

Submission Instructions:
Fork the given github repository. Switch to the Assignment_1 branch. It should already have `main.cpp` and `vector.h` files. Write your implementation code in the vector.h file. Demonstrate all your implementations in the `main.cpp` file. We have done a sample implementation of `print()` function to give you an idea. Make sure the project builds properly using CMake and you get a valid output. Make a PR (pull request) to the Assignmnet_1 branch of the original repo before deadline.

PS: If you feel stuck don’t forget to read up the CMake documentation. For inspiration look at already implemented vector libraries(don’t get misled by the DSA vala `vector.h` though ;) ). Dont hesitate to ask mentors if you are stuck anywhere, we are here to help.

Submission deadline : 23rd May, 11:59 PM

[Link to the GitHub repository :](https://github.com/ishanbawne20/mfcg2023.git)

Resources :

[C++](https://www.w3schools.com/cpp/cpp_oop.asp)

[Cmake Documentation](https://cmake.org/documentation/)

[Git GitHub](https://medium.com/@george.seif94/a-full-tutorial-on-how-to-use-github-88466bac7d42)

[Cmake Setup](https://cmake.org/cmake/help/latest/guide/tutorial/index.html)

Self-Google whats operator overloading in C++ :)
