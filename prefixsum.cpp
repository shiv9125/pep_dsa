#include<iostream>
using namespace std;
int getsum(int arr[],int n){
	int res=arr[0];
	for(int i=1; i<n; i++){
		res=res+arr[i];
	}
	return res;
}
int main(){
	int arr[]={1,2,3,4,5,6};
	cout<<getsum(arr,6);
	return 0;
}