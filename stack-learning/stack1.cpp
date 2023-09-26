#include<iostream>
#include<stack>
using namespace std;
//it is a type of data structure which follows lifo order
int main(){
    //stack creation 
    stack<int>s;
    //pushing data into stack

    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    //printing stack  top data
    cout<<"the top most element in the stack is "<<s.top()<<endl;
    //checking the stack is empty or not
    if (s.empty()){
        cout<<"the stack is empty";
    }
    else {
        cout<<"the stack is not empty";
    }
    //stack size
    cout<<endl<<"size of the stack is "<< s.size()<<endl;
    s.pop();
   cout<< "size of the stack is "<< s.size()<<endl;
    
    cout<<"the top element now is"<<s.top();

    return 0;
}