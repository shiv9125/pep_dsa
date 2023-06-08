#include<iostream>
using namespace std;
int search(int arr[],int x, int n){
	for(int i=0; i<n; i++){
		if(arr[i]==x)
		return i;
	}
	return -1;
	
}
int main(){
	int arr[]={2,3,4,5,7,9};
	int n=6;
	cout<<search(arr,4,n);
	return 0;
}