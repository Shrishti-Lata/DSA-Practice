#include<iostream>
using namespace std;
#define max 10
class QueueClass
{
    int rear;
    int front;
public:
    QueueClass(){rear =-1;front =-1;};
    int arr[max];
    void Enqueue();
    void Dequeue();
    void peek();
};

void QueueClass:: Enqueue(){
    int x;
    if(rear==max-1)
        cout<<"Queue Overflow"<<endl;
    else{
        if(front ==-1){
            front =0;
        }
        cout<<"Insert value to Queue: ";
        cin>>x;
        rear++;
        arr[rear]=x;
    }
}

void QueueClass:: Dequeue(){
    if(front==-1||front>rear)
        cout<<"Queue Underflow"<<endl;
    else{
        cout<<"Element deleted is : "<<arr[front];
        front++;
    }
}
void QueueClass:: peek(){
    if(front==rear){
        cout<<"Queue is Empty";
    }

    cout<<"value at front"<<arr[front];
}


int main(){
    QueueClass Q1;
    int ch;
    for(int i=0;i<max;i++){
        cout<<"What you want to implement in stack"<<endl;
        cout<<"1: EnQueue"<<endl;
        cout<<"2: DeQueue"<<endl;
        cout<<"3: peek"<<endl;
        cout<<"Exit"<<endl;
        
        cin>>ch;
    switch (ch){
        case 1:
            Q1.Enqueue();
            break;
        case 2:
            Q1.Dequeue();
            break;
        case 3:
            Q1.peek();
            break;
        case 4:
            exit;
        default:
            break;
        }
    }

    return 0;
}