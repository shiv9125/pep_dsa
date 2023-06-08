#include<iostream>
using namespace std;
int max_diff(int arr[],int n){
	 int res=arr[1]-arr[0], minval=arr[0];
	for(int i=0; i<n; i++){
	 	for(int j=i+1; j<n; j++){
			if(arr[j]-minval>res)
			res=arr[j]-minval;
		}
		
	}
	return res;
}
int main(){
	int arr[]={5,3,25,12,27};
	int n=5;
	cout<<max_diff(arr,n);
	return 0;
}