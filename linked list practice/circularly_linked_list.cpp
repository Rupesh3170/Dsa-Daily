#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    
  //constructor inilization
    
    node(int data){
        this->data=data;
        this->next=NULL;
    }
   


};
 void insertion1(node*&tail,int element,int data){
        //new node creation
        node*newnode1=new node(data);
        //1st case->
        if(tail==NULL){
            tail=newnode1;
            newnode1->next=newnode1;
            return;
        }
        //case 2->
        node*temp=tail;
        while(temp->data!=element){
            temp=temp->next;
        }
        //here we found the element
        newnode1->next=temp->next;
        temp->next=newnode1;
    }
    //display
    void display(node*tail){
        if(tail==NULL){
            cout<<"list is empty";
        }
        node*temp=tail;
        do{
            cout<<tail->data<<" ";
            tail=tail->next;
        }while(tail!=temp);
    }
    void deletion(node*&tail,int d){
        //case1->
        if(tail==NULL){
            cout<<"list is empty"<<endl;
            return;
        }
        else{
            //non empty case
            node*prev=tail;
            node*curr=prev->next;
            while(curr->data!=d){
                prev=curr;
                curr=curr->next;

            }
            prev->next=curr->next;
            //for 1 node ll
            if(curr==prev){
                tail=NULL;
            }
            else if(tail==curr){
                tail=prev;
            }
            else{
                curr->next=NULL;
            }
        }
       
    }
int main(){
    //making the first node taking for circularly linked list
    node*tail=NULL;
    //insert function in doubly linked list
    insertion1(tail,34,13);
    display(tail);
    
    cout<<endl;
    insertion1(tail,13,34);
    display(tail);
    cout<<endl;
     insertion1(tail,13,54);
    display(tail);
    cout<<endl;
      insertion1(tail,13,23);
    display(tail);
    //delete function
    deletion(tail,54);
    cout<<endl;
    display(tail);
     


    return 0;

}