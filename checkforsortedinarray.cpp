#include<iostream>
using namespace std;
string sorted(int arr[],int n){//string data type return string as true or false
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[i])
			return "false";
		}
	}
	return "true";
}
int main(){
	int arr[]={3,4,5,6,7,68};
	cout<<sorted(arr,6);
	return 0;
}
