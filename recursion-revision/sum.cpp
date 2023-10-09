#include<iostream>
using namespace std;
int sum(int num){
    //base case
  if(num==0){
    return 0;
  }
  int chotti=sum(num-1);
  int baddi=num;
  
  return chotti+baddi;

}
int main(){
    int ans=0;
   cout<< sum(5);

    return 0;
}