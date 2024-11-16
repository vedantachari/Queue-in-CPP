#include<iostream>
using namespace std;

struct queue
{
    int size;
    int front;
    int rear;
    int* arr;
};

bool isEmpty(queue* ptr)
{
    return ptr->front == ptr->rear;
}

bool isFull(queue* ptr)
{
    return ptr->rear == ptr->size-1;
}

int main()
{
    queue* Q = new queue;
    Q->size = 10;
    Q->front = Q->rear = -1;
    Q->arr = new int[Q->size];
    
    cout << isEmpty(Q);
    return 0;
}