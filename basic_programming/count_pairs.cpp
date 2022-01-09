// Problem
// You are given the following:

// An integer 
// An integer 
// An integer 
// An array  of  elements
// An array  of  elements
// Find the number of pairs of  such that:

// ,  where ^ represents bitwise XOR operator and & represents bitwise AND operator.
// Note: Assume -based indexing.

// Input

// The first line contains a single integer  that denotes the number of test cases. 
// For each test case:
// The first line contains an integer .
// The second line contains an integer .
// The third line contains an integer .
// The next line contains  space-separated integers denoting array .
// The next line contains  space-separated integers denoting array .
// Output format

// For each test case, print the number of pairs  that satisfy the conditions in a new line.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(((a[i]^b[j])&x)==((a[i]^b[j])&y)){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}