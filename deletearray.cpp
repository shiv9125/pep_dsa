#include<iostream>
using namespace std;
int delete_ele(int arr[],int n,int x){
	int i=0;
	for(i=0; i<n; i++){
		if(arr[i]==x)
		break;
	}
	if(i==n)
	return n;//if element not found
	for(int j=i; j<n-1; j++){
		arr[j]=arr[j+1];
	}
	return n-1;
}
int main(){
	int arr[]={1,2,3,4,5};
	int n=5,x=7;
	n=delete_ele(arr,n,x);
	for(int i=0; i<n;i++){
		cout<<arr[i]<<" ";
	}
}