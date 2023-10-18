#include<iostream>
using namespace std;
class tree{
    public:
    int data;
    tree*left;
    tree*right;
    //parametrized constructor
    tree(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }


};

int main(){
    tree*root=new node(4);
    //insertion of node in tree
    return 0;

}