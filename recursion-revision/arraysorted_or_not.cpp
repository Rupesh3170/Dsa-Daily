#include<iostream>
using namespace std;
bool sorted(int*arr,int n){
    //base case
    if(n==0|| n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans=sorted(arr+1,n-1);
         return ans;
    }
   

    

}
int main(){
    int arr[5]={1,7,3,4,5};
   
   if( sorted(arr,5)){
    cout<<"array is sorted";

   }
   else{
    cout<<"array is not sorted";
   }
   

    return 0;
}