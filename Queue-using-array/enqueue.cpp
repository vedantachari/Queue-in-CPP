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

void display(queue* &ptr)
{
    int p=ptr->front+1;
    if (isEmpty(ptr))
    {
        cout << "Empty Queue" << endl;
    }
    else
    {
        cout << "Queue Elements" << endl;
        while (p<=ptr->rear)
        {
            cout << ptr->arr[p]  << " | ";
            p++; 
        }
        cout << endl;
    }
}

void Enqueue(queue* ptr, int val)
{
    if (isFull(ptr))
    {
        cout << "Queue Overflow" << endl;
    }
    else 
    {
        ptr->rear++;
        ptr->arr[ptr->rear] = val;
    }
}

int main()
{
    queue* Q = new queue;
    Q->size = 10;
    Q->front = Q->rear = -1;
    Q->arr = new int[Q->size];
    
    Enqueue(Q, 54);
    Enqueue(Q, 46);
    Enqueue(Q, 89);
    Enqueue(Q, 14);

    display(Q);
    return 0;
}