// Problem
// Alice works as a restaurant manager. The restaurant has prepared  lunch boxes and Alice plans to distribute them to some schools. Consider that there are  schools and an  school orders  lunch boxes.

// She wants to distribute lunch boxes to as many schools as possible. Also, she has the following rule:

// For an  school, she gives either zero or  lunch boxes
// Your task is to help Alice to determine the maximum number of schools that can get lunch boxes.

// Input format    

// The first contains an integer  that denotes the number of test cases in the input.
// Each test case consists of two lines:
// The first line contains two integers  and .
// The second line contains  integers .
// Output format

// For each test case, you are required to print one integer that represents the maximum number of schools that can receive lunch boxes.

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
    cin>>t;
	while(t--){
		int n,m,count=0;
		cin>>n>>m;
		int arr[m];
		for(int i=0;i<m;i++){
			cin>>arr[i];
		}
		sort(arr,arr+m);
		int sum=0;
		for(int i=0;i<m;i++){
            sum+=arr[i];
			if(sum<=n){
                count++;
            }
			if(sum>n){
				break;
			}
			
		}
		cout<<count<<endl;

	}
	return 0;
}