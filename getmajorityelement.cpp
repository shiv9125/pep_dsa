#include<iostream>
using namespace std;
int getmajorityelement(int arr[],int n){
	for(int i=0; i<n; i++){
		int count=1;
		for(int j=i+1; j<n; j++){
			if(arr[i]==arr[j])
			count++;
			}
		if(count>n/2)
				return i;
	}
	return -1;
}
int main(){
	int arr[]={1,3,5,2,5,5,5};
	int n=7;
	cout<<getmajorityelement(arr,n);
	return 0;
	
}