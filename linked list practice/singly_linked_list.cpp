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
//insertion at head
void athead(node*&head,int d){
    node*p=new node(d);
    //null case check
    p->next=head;
   head=p;
}
//insert at tail function 
void attail(node*&head,int d){
    if(head==NULL){
        athead(head,d);
        return;

    }
    node*q=new node(d);
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=q;
    q->next=NULL;


}
//insert at any posi
void atposi(node*&head,int d,int posi){
    node*temp=head;
    node*p=new node(d);
    if(posi==1){
        athead(head,d);
        return;
    }

    int count=1;
    while(count<posi-1){
        temp=temp->next;
        count++;
    }
    //case for inserting at last position
    if(temp->next==NULL){
        attail(head,d);
        return;
    }
    //now case for insert at any position 
    p->next=temp->next;
    temp->next=p;
}
//deletion case for the head element
void atheaddeletion(node*&head){
    node*temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;

}
// deletion case for the tail element 
 void deletiontail(node*&head){
    node*temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    node*o=temp->next;
    temp->next=NULL;
    delete(o);
     
 }
//  deletion case for any position
void deletion(node*&head,int posi){
    node*temp=head;
   
    if(posi==1){
        atheaddeletion(head);
        return;
    }
    //for othe cases
    for(int i=1;i<posi-1;i++){
        temp=temp->next;

    }
    //case tail check 
    if(temp->next==NULL){
        deletiontail(head);
        return;
    }
    //case 3 deletion any posi
    node*p=temp->next;
    temp->next=temp->next->next;
    p->next=NULL;
    delete p;





}
void display(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
int main(){
    

    node*head=NULL;
   /* athead(head,10);
    athead(head,11);
    athead(head,30);
    athead(head,34);
    display(head);
    //insert at tail*/
    attail(head,45);
    attail(head,46);
    display(head);
    atposi(head,40,0);
     display(head);
    attail(head,50);
    attail(head,20);
    cout<<endl;
    display(head);
     //deletion in linked list
     //case1->deletion of the head element
     deletion(head,3);
     cout<<endl<<"after deletion "<<endl;
     display(head);
      deletion(head,4);
     cout<<endl<<"after deletion "<<endl;
     display(head);
      deletion(head,1);
     cout<<endl<<"after deletion "<<endl;
     display(head);




    return 0;

}