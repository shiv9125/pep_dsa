#include<iostream>
using namespace std;
int marksum(int arr[],int n, int k){
	int sum=0;
	for(int i=0; i<k; i++){
		sum+=arr[i];
	}
	int res=sum;
	for(int i=k; i<n; i++){
		sum=sum+arr[i]-arr[i-k];
		res=max(res,sum);
	}
	return res;
}
int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<marksum(arr,n,k);
}