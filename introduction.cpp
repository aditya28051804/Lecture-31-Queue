/*
FIRST IN first out 
FIFO 
element are added from rear 
element are deleted from front 

push() - insert form the rear part 
pop() - delete elements from the front part 
front() - it gives value of the front or first added element 

enqueue - adding elements in the queue 
de - queue -> deleteing elements from the queue 
*/

#include<iostream>
 #include<string>
using namespace std;
 
 class node{
public:
    int data;
    int* next;
public:
    node(int data){
        this -> data = data;
        this -> next = NULL;

    }
 };

 class queue{

    node* head;
    node* tail;

    public:
    queue(){
        head = tail = NULL;
    }

    void pushData(int data){
        node* newNode = new node(data);
        if (head == NULL)
        {
            head = tail = newNode; 
        }else{
            tail->next = newNode;
            tail = newNode;
        }
        
    }
    
 };
 
 int main() {
             
 return 0;   
}