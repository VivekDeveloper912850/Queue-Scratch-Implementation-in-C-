// Implement Doubly Ended Queue From Scratch....
// H.w Circular doubly ended Queue from scratch...
#include<iostream>
using namespace std;

class Deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

     void pushFront(int val){
        //overflow
        // empty case
        // Normal case
        if(front == 0){
            cout << "Overflow " << endl;
        }
        else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[front] = val;
        }
        else{
            front--;
            arr[front] = val;
        }
       
     }
     void pushBack(int val){
       // overflow
       // empty case
       // Normal case
       if(rear == size-1){
        cout <<"Overflow" << endl;
       }
       else if(front == -1 && rear == -1){
        front++;
        rear++;
        arr[rear] = val;
       }
       else{
        rear++;
        arr[rear] = val;
       }
     }
     void popFront(){

        if(front == -1 && rear == -1){
            cout << "Queue Underflow " << endl;
            return;
        }
        else if(front == rear){
            // Empty case -> Single Element
            arr[front] = 0;
            front = -1;
            rear = -1;
        }
        else{
            // Normal Case
            arr[front] = 0;
            front++;
        }

     }

     void popBack(){
        //underFlow
        //single Element
        // normal flow
        if(front == -1 && rear == -1){
            cout << "UnderFlow" << endl;
        }
        else if(rear == front){
            arr[rear] = 0;
            front = -1;
            rear = -1;
        }
        else{
            arr[rear] = -1;
            rear--;
        }
      
     }
};



int main(){


    return 0;
}