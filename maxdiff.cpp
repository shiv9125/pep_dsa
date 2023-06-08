#include<iostream>
using namespace std;
int max_diff(int arr[],int n){
	 int maxd=arr[1]-arr[0];
	for(int i=0; i<n; i++){
	 	for(int j=i+1; j<n; j++){
			if(arr[j]-arr[i]>maxd)
			maxd=arr[j]-arr[i];
		}
		
	}
	return maxd;
}
int main(){
	int arr[]={2,3,10,12,4};
	int n=5;
	cout<<max_diff(arr,n);
	return 0;
}