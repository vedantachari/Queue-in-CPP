#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

struct queue
{
    node *front;
    node *rear;
};

void display(queue* head)
{
    node* p = head->front;
    cout << "Elements : " << endl;
    while (p != NULL) 
    {  
        cout << p->data << " | " ;
        p = p->next;
    }
    cout << endl;

}

void enqueue(queue* &ptr, int val)
{
    node* new_node = new node();
    new_node->data = val;
    new_node->next = NULL;
    if (ptr->rear == NULL) 
    { 
        ptr->front = ptr->rear = new_node;  
    } 
    else 
    {  
        ptr->rear->next = new_node;   
        ptr->rear = new_node;
    }
}

void dequeue(queue* &ptr)
{
    node* p = ptr->front;
    ptr->front = p->next;
    delete p;
}

int main()
{
    queue* Q = new queue;
    Q->front = Q->rear = NULL;
    enqueue(Q, 12);
    enqueue(Q, 30);
    enqueue(Q, 56);
    display(Q);
    dequeue(Q);
    display(Q);
    return 0;
}