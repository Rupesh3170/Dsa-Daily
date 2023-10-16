#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    //initialising parametrised constructor
    node(int data){
        this->data=data;
       this->next=NULL;
    }
};

int main(){

    node*head=new node(12);
    cout<<head->data;

    return 0;

}