#include<iostream>

using namespace std;

//Define konstan
int const maxsize = 10;

class Stack{
    int top;
    int a[maxsize];
    public:
    Stack(){
        top=0;
    };
    bool isfull(){
        if(top==maxsize){
            return true;
        }else{
            return false;
        }
    };
    bool isempty(){
        if(top==0){
            return true;
        }else{
            return false;
        }
    };
    void push(int x){
        if(isfull()){
            cout<<"Stack is full"<<endl;
            return;
        }else{
            a[top]=x;
            top++;
        }
    };
    void pop(){
        if(isempty()){
            cout<<"nothing in list"<<endl;
            return;
        }else{
            top--;   //if stack is not empty (when top is not equal to zero) element can be poped out of stack(element can be removed from the top index of stack)
            cout<<"pops "<<a[top]<<endl;
        }
    };
    void display(){
        int i;
        if(top==0){
            cout<<"nothing to display"<<endl;
        }else{
            cout<<"Displaying"<<endl;        
            for(i=0;i<top;i++){
                cout<<a[i]<<endl;
            }
        }
    };
    void Top(){
        cout<<"top is "<<a[top-1]<<endl;
    };
    void Size(){
        cout<<"size of Stack is "<<top<<endl;
    };
};

int main(){
    Stack s;
    int ch,element,result;
    while(1)
    {
        cout<<"*--------------------------------------------------------------------*"<<endl;
        cout<<"1.PUSH  2.POP  3.DISPLAY  4.ISFULL  5.ISEMPTY  6.TOP  7.SIZE  8.EXIT "<<endl;
        cout<<"*--------------------------------------------------------------------*"<<endl;
        cin>>ch;
        if(ch==1){
            cout<<"enter element ";
            cin>>element;
            s.push(element);
        }else if(ch==2){
            s.pop();
        }else if(ch==3){
            s.display();
        }else if(ch==4){
            if(s.isfull()){
                cout<<"STACK IS FULL"<<endl;
            }else{
                cout<<"STACK IS NOT FULL"<<endl<<"YOU CAN PUSH"<<endl;
            }
        }
        else if(ch==5){
            if(s.isempty()){
                cout<<"STACK IS EMPTY"<<endl;
            }else{
                cout<<"STACK IS NOT EMPTY"<<endl<<"YOU CAN POP"<<endl;
            }
        }else if(ch==6)
        {
            s.Top();
        }else if(ch==7)
        {
            s.Size();
        }else{
            return 0;
        }
    }
    return 0;
}