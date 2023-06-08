#include<iostream>
using namespace std;
int subarraysum(int arr[],int n,int k){
		int res=0;
	   for(int i=0; i<n-k+1; i++){
           res=res+arr[i];}
    		
	return res;
}
int main(){
	int n,k;//taking input from user
	cin>>n>>k;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<subarraysum(arr,n,k);
	return 0;
}