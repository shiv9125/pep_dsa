#include<iostream>
using namespace std;
int searchele(int arr[],int n,int pos,int x,int cap){
	if(n==cap)
	return n;
	int idx=pos-1;
	for(int i=n-1; i>=idx; i--){
		arr[i+1]=arr[i];
	}
	arr[idx]=x;
	return (n+1);
}
int main(){
	int arr[]={5,10,20};
	int n=3,pos=2,x=7;
	int cap=5;
	searchele(arr,n,pos,x,cap);
	for(int i=0; i<n+1; i++){
		cout<<arr[i]<<" ";
	}
}