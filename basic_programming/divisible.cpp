#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	string s="";
	for(int i=0;i<n/2;i++){
		s+=(to_string(arr[i])[0]);
	}
	for(int i=n/2;i<n;i++){
		s+=(to_string(arr[i])[to_string(arr[i]).length()-1]);
	}
	// I am modifing the file 
	if(stoi(s)%11==0){
		cout<<"OUI";
	}else{
		cout<<"NON";
	}

}	