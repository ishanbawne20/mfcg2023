#include<iostream>
#include<math.h>
#include"vector.h"
using namespace std;
int main(){
    Vector3 a(1,2,3),b(4,5,7);

    cout << "a=";
    a.print();

    cout << "b=";
    b.print();

    cout << "length(a)=" << a.length()<<endl; 

    cout << "3a="  ;
    (3*a).print();

    cout << "a*b=" << a*b << endl;

    cout << "a*b=" << a.dot_product(b)<<endl; 

    cout << "a x b = " ;
    (a.cross_product(b)).print();

    cout << "a+b=";
    (a+b).print();

    cout << "a/3=";
    (a/3).print();

    cout << "a-b=";
    (a-b).print();
}