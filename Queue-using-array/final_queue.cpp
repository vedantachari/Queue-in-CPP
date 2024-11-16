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

void Dequeue(queue* ptr)
{
    if (isEmpty(ptr))
    {
        cout << "Queue Underflow" << endl;
    }
    else 
    {
        int val = ptr->arr[ptr->front+1];
        ptr->front++;
        cout << "Dequeued Value : " << val << endl;   
    }
}

int main()
{
    queue* Q = new queue;
    Q->size = 10;
    Q->front = Q->rear = -1;
    Q->arr = new int[Q->size];

    int con;
    int i = 1;
    while (i==1)
    {
        cout << "1. Enqueue\n2. Dequeue\n3. Display Queue\n4. Quit" << endl;
        cout << "Enter : ";
        cin >> con;
        switch (con)
        {
        case 1:
            int dta;
            cout << "Enter data to Insert : ";
            cin >> dta;
            Enqueue(Q,dta);
            break;
        case 2:
            Dequeue(Q);
            break;
        case 3:
            display(Q);
            break;
        case 4:
            i++;
            break;
        default:
            break;
        }
    }
    
    return 0;
}