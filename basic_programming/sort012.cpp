#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[],int size){
    int start,end,mid;
    start=mid=0;
    end=size-1;
    while (mid<=end)
    {
        if(arr[mid]==0){
            swap(arr[start],arr[mid]);
            start++;mid++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid],arr[end]);
            mid++;end--;
        }
    }
    
}

int main(){
    int arr[]={0,1,2,1,0,0,2,2,1};
    sort012(arr,sizeof(arr)/sizeof(int));
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
       cout<<arr[i]<<" ";
    }
    
    return 0;
}