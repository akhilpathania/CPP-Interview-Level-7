#include <iostream>
using namespace std;

void swapaInt(int *p1, int* p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main(){
    int a =5, b =10;
    cout<<"Before swap: a = "<<a<<", b = "<<b<<endl;
    // Swapping using pointers
    int *p1 = &a;
    int *p = &b;
    swapaInt(p1, p);
    cout<<"After swap: a = "<<a<<", b = "<<b<<endl;
    return 0;
}