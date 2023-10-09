#include<iostream>
using namespace std;
int fact(int num){
    //base case
   if(num==1){
    return 1;
   }
   int chotti=fact(num-1);
   int baddi=num;
    return baddi*chotti;

}
int main(){
   cout<< fact(10);

    return 0;
}