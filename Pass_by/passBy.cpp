#include <iostream>
using namespace std;

void passbyValue(int a);
void passbyReference(int &a);
void passbyPointer(int *a);
void passbyRValue(int &&a);
void passPointerByValue(int *a);
void passPointerByReference(int * &a);
void passPointerByPointer(int **a);
void passPointerByRValue(int * &&a);

#include <utility> // for std::move

int main(){
    int a = 10;
    int* ptr = &a;
    passbyValue(a);
    passbyReference(a);
    passbyPointer(&a);
    passbyRValue(std::move(a));
    passPointerByValue(&a);
    passPointerByReference(ptr);
    passPointerByPointer(&ptr);
    passPointerByRValue(&a);
    return 0;
}

void passbyValue(int a){
    cout << "Pass by value: " << a << endl;   //if we change anything to vaiable it will not change original variable
}

void passbyReference(int &a){
    cout << "Pass by reference: " << a << endl;  // changing variable here will change original variable
}

void passbyPointer(int *a){
    cout << "Pass by pointer: " << *a << endl;  // changing variable here will change original variable
}

void passbyRValue(int &&a){
    cout << "Pass by rvalue: " << a << endl;  // changing variable here will change original variable
    a = 20;
}       

void passPointerByValue(int *a){
    cout << "Pass pointer by value: " << *a << endl;  // changing variable here will change original variable
    *a = 20;
}

void passPointerByReference(int * &a){
    cout << "Pass pointer by reference: " << *a << endl;  // changing variable here will change original variable
    *a = 20;
}
    
void passPointerByPointer(int **a){
    cout << "Pass pointer by pointer: " << **a << endl;  // changing variable here will change original variable
    **a = 20;
}

void passPointerByRValue(int * &&a){
    cout << "Pass pointer by rvalue: " << *a << endl;  // changing variable here will change original variable
    *a = 20;
}
    