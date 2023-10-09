#include<iostream>
using namespace std;
int power(int num){
    //base case
    if(num==0){
        return 1;
    }
    int chotti=power(num-1);
    int baddi=2*chotti;
    return baddi;

}
int main(){
   cout<< power(10);

    return 0;
}