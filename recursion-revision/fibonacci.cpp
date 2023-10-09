#include<iostream>
using namespace std;
int fib(int num){
    //base case
    if(num==0||num==1){
        return num;
    }
    return fib(num-1)+fib(num-2);

}
int main(){
   cout<< fib(10);

    return 0;
}