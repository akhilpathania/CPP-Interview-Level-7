#include <iostream>
using namespace std;

struct Node{
    int dada;
    Node* next;
};
int main(){

    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;

    head = new Node();
    second = new Node();
    third = new Node();

    head->dada = 1;
    head->next = second;

    second->dada = 2;
    second->next = third;

    third->dada = 3;
    third->next = nullptr;

    Node* current = head;
    while(current != nullptr){
        cout<<current->dada<<" -> ";
        current = current->next;
    }
    cout<<"nullptr"<<endl;

    // Free allocated memory
    delete head;
    delete second;
    delete third;

    return 0;
}