#include<iostream>
using namespace std;

int main(){
	int n=1234567891011;
	int arr[10]={0};
	while(n!=0){
		arr[n%10]++;
		n/=10;
	}
	for(int i=0;i<10;i++){
		cout<<i<<" "<<arr[i]<<endl;
	}
	return 0;
}