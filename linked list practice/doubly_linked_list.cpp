#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    // parameterised constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void attail(node*&head,int d){
    node*p=new node(d);
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=p;
    p->prev=temp;
    //here no need to update the tail part of the linked list
     
}

void athead(node *&head, int d)
{
    node *node1 = new node(d);
    if (head == NULL)
    {
        head = node1;
        return;
    }
    node *temp = head;
    node1->next = temp;
    temp->prev = node1;
    head = node1;
}
//insert at any posi function
void atany(node*&head,int d,int posi){
    if(posi==1){
        athead(head,d);
        return;
    }
    //for remaning cases
    node*temp=head;
    for(int i=1;i<posi-1;i++){
        temp=temp->next;
    }
    //tail case handle
    if(temp->next==NULL){
        attail(head,d);
        return;
    }
    
        node*node1=new node(d);
        node1->next=temp->next;
         temp->next->prev=node1;
        temp->next=node1;
         node1->prev=temp;
       
    

}
//deletion functions
void deletion(node*&head,int posi){
    if(posi==1){
        //head deletion case
        node*temp=head;
        head=temp->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
        return;

    }
    //remaning cases of deletion last node or any middle one
    node*curr=head;
    node*prev1=NULL;
    for(int i=1;i<posi;i++){
        prev1=curr;
        curr=curr->next;
    }
    prev1->next=curr->next;
    curr->next->prev=prev1;
    curr->prev=NULL;
    curr->next=NULL;
    delete curr;


 

}
int main()
{
    node *head = NULL;

    athead(head, 10);
    display(head);
    athead(head, 40);
    athead(head, 12);
    athead(head, 15);
    cout<<endl;
    display(head);
    cout<<endl;
    attail(head,20);
    display(head);
    cout<<endl;
    //insert at any position
    atany(head,57,3);
    cout<<"updated list is"<<endl;
    display(head);
    cout<<endl;
    //deletion in doubly linked list
    deletion(head,4);
    cout<<endl<<"the updated list after deletion"<<"->";
    display(head);
    deletion(head,1);
    cout<<endl<<"the updated list after deletion"<<"->";
    display(head);

    return 0;
}