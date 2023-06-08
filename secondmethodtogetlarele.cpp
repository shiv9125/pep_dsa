#include<iostream>
using namespace std;
int getlargest(int arr[],int n){
	  int temp=arr[0];
	  for(int i=1; i<n; i++){
	  	if(arr[i]>temp){
	  		temp=arr[i];
		  }
	  }
	 return temp;
	
}
		
int main(){
	int arr[]={10,7,9,8,17,3};
	cout<<getlargest(arr,6);
	return 0;
}