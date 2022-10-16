#include<iostream>
using namespace std;
#define max 10
class stack
{
    int top;
    public:
        stack(){ top=-1;}
        int arr[max];
        void push();
        void pop();
        void IsEmpty();

};
void stack:: push(){
    int x;
    if(top==max-1)
        cout<<"stack Overflow"<<endl;
    else{
        cout<<"Enter Element";
        cin>>x;
        top+=1;
        arr[top] =x;
    }
}
void stack:: pop(){
    if(top==-1)
        cout<<"Stack Underflow"<<endl;
    else{
        cout<<"Popped Element is"<<arr[top];
        top-=1;
    }
}
void stack:: IsEmpty(){
    if(top==-1)
        cout<<"stack is Empty"<<endl;
}



int main(){
    stack s1;
    int ch;
    //cout<<"Enter how many number you want to enter in array: ";
    //cin>>max;
    for(int i=0;i<max;i++){
        cout<<"What you want to implement in stack"<<endl;
        cout<<"1: push"<<endl;
        cout<<"2: pop"<<endl;
        cout<<"3: IsEmpty"<<endl;
        cin>>ch;
    switch (ch){
        case 1:
            s1.push();
            break;
        case 2:
            s1.pop();
            break;
        case 3:
            s1.IsEmpty();
            break;
        default:
            break;
        }
    }
    return 0;
}