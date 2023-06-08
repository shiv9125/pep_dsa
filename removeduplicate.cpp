#include<iostream>
using namespace std;
int fun(int arr[], int n){
	int size=0;
	for(int i=0; i<n; i++){
		if(arr[i]!=arr[i+1]){
			arr[size]=arr[i];
			size++;
	}
	}
	return size;
}
int main(){
	int arr[]={10,20,20,20,30,30,40};
	int n=7;
	n=fun(arr,n);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<endl;
	}
}
