// Problem
// You have been given an array A of size N consisting of positive integers. You need to find and print the product of all the number in this array Modulo .

// Input Format:
// The first line contains a single integer N denoting the size of the array. The next line contains N space separated integers denoting the elements of the array

// Output Format:
// Print a single integer denoting the product of all the elements of the array Modulo .

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	long int mult=1;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		mult=(mult*arr[i])%(int(pow(10,9)+7));
	}
	cout<<mult;
	return 0;
}