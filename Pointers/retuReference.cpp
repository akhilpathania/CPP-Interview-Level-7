#include<iostream>
using namespace std;
int& getElement(int* arr, int index){
    return arr[index]; // Return reference to the array element
}
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    cout<<"Before modification: "<<arr[2]<<endl; // Output: 30
    getElement(arr, 2) = 100; // Modify the element via reference
    cout<<"After modification: "<<arr[2]<<endl; // Output: 100
    return 0;
}