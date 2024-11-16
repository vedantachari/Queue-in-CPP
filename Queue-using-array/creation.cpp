#include<iostream>
using namespace std;

struct queue
{
    int size;
    int front;
    int rear;
    int* arr;
};

int main()
{
    queue* Q = new queue;
    Q->size = 10;
    Q->front = Q->rear = -1;
    Q->arr = new int[Q->size];
    
    return 0;
}