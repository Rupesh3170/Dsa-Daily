#include<iostream>
using namespace std;
void print(int num){
    //base case
    if(num==0){
        
        return;
    }
    cout<<num<<" ";
    print(num-1);
  

}
int main(){
    print(10);

    return 0;
}