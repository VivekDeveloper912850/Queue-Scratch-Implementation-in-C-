// Implement Queue from Scratch
#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int val){
        // check full
        if(rear == size - 1){
          // queue is full
          cout << "Queue is Overflow" << endl;
          return;
        }
        else if(front == -1 && rear == -1){
            // empty case;
            front++;
            rear++;
            arr[rear] = val;
        }
        else{
            // Normal Case
            rear++;
            arr[rear] = val;
        }
    }

    // Remove Element
    void pop(){
        //UnderFlow
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
            //Normal Case
            arr[front] = 0;
            front++;
        }
    }

    // Check Empty
    bool isEmpty(){
        if(front == -1 && rear == -1){
            return true;
        }
        else{
            return false;
        }
    }
    // Get Size Of Queue
    int getSize(){
        if(front == -1 && rear == -1){
            return 0;
        }
        else{
           return rear - front + 1;
        }
        
    }
    // Get Front Element
    int getFront(){
        if(front == -1){
            cout << "No Element in Queue, cannot give front element" << endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
    // print function
    void print(){
       cout << "Printing Queue: ";
       for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
       }
       cout << endl;
    }

    int getRear(){
        
    }
    
};


int main(){
    // creating queue
    Queue q(5);
   // q.print();

    // pushing
    q.push(10);
   // q.print();

    q.push(20);
    q.push(30);
    q.push(40);
    q.push(60);
    q.print();

    //etSize() << endlcout << "Queue Size is:= " << q.g;

    q.pop();
    q.print();
     
     cout << q.getSize() << endl;

     cout << "Queue is Empty or Not:= " << q.isEmpty() << endl;

     q.push(100);
     q.print();

    return 0;
}