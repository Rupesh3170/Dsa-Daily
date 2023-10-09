#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>st;
    st.push(10);
    st.push(20);
    st.push(40);
    st.push(100);
    cout<<"the front element in the queue is "<<st.front(); 
    st.pop();
    st.pop();
    cout<<endl;
    
    cout<<"the front element in the queue is "<<st.front(); 
    st.pop();
    cout<<endl;
    cout<<"print the size of the queue"<<st.size();
    //is queue empty or not
    if(st.empty()){
        cout<<"queue is empty";

    }
    else{
        cout<<"queue is not empty";
    }
    return 0;
}