 #include<iostream>
 using namespace std;
 bool binary_search(int*arr,int s,int e,int key){
    if(s>e){
        return false;
    }
    int mid=(s+e)/2;
    if(arr[mid]==key){
        return true;
    }
    else if(arr[mid]>key){
       return binary_search(arr,s,mid-1,key);
    }
    else{
        return binary_search(arr,mid+1,e,key);
    }
    
 }
 int main(){
    int arr[7]={1,2,4,7,9,8,10};
    int s=0;
    int e=7;
    int key=3;
    if(binary_search(arr,s,e-1,key)){
        cout<<"key is present"<<" ";
    }
    else{
        cout<<"key is not present";
    }
    return 0;
 }