#include<iostream>
#include<stack>
using namespace std;
class stack1{ 
    public:   
    int *arr;
    int size;
    int top;
    //constructor for initiliazing
    stack1(int size){ 
        this->size=size;
        arr=new int(size);
        top=-1;
    }
    //push function
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack is overflow";
        }
    }
    //pop function
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack is underflow";
        }

    }
    //peek function
    int peek(){
        if(top>0 && size>top){
            return arr[top];
        }
        else{
            cout<<"stack is empty";
        }
    }
    //empty or not checking function
     
     bool isempty(){
        if(top==-1){
            return true;
        }
        else{
           return false;
        }
     }


     



};
int main(){
    stack1 st(5);
    st.push(10);
     st.push(14);
     st.push(34);
     st.push(10);
     st.push(14);
     cout<<"the top element of the stack is :"<<st.peek()<<endl;
     

    return 0;

}
