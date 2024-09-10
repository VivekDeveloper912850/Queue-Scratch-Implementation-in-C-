// circular Queue Implement from Scratch
#include<iostream>
using namespace std;

class Cqueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    Cqueue(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }
    void push(int val){
        // Overflow
        // Empty case -> first Element
        // circular nature
        // normal flow
        if((front == 0 && rear == size-1) || (rear == front-1)){
            cout << "Queue is Overflow" << endl;
            return;
        }
        else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[rear] = val;
        }
        else if(rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = val;
        }
        else{
            rear++;
            arr[rear] = val;
        }
    }
    void pop(){
        // Underflow
        // Empty case -> first Element
        // circular nature
        // normal flow
        if(front == -1 && rear == -1){
           cout << "Cqueue is UnderFlow" << endl;
        }
        else if(front == rear){
            arr[front] = 0;
            front = -1;
            rear = -1;
        }
        else if(front == size-1){
            arr[front] = 0;
            front = 0;
            
        }
        else{
            arr[front] = 0;
            front++;
        }
    }
    // print
     void print(){
       cout << "Printing Queue: ";
       for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
       }
       cout << endl;
    }
};                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  


int main(){
    Cqueue cq(5);
    cq.print();

    cq.push(10);
    cq.print();
    cq.push(20);
    cq.push(100);
    cq.push(50);
    cq.push(300);
   // cq.push(99);
    cq.print();
    cq.pop();
    cq.pop();
    cq.pop();
    cq.print();

    cq.push(30);
    cq.print();
    cq.push(35);
    cq.push(98);
    cq.print();
    cq.push(97);
    cq.print();

    return 0;
}