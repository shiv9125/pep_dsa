#include<iostream>
using namespace std;
string getSorted(int arr[],int n){

	for(int i=0,j = 1; j<n; i++,j++){

	if(arr[i]>arr[j]){
			return "false";
	}
	
}
	return "true";
	
}
int main(){
	int arr[]={2,4,6,7,8};
	int n=5;
	cout<<getSorted(arr,n);
	return 0;
}