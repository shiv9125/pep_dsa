#include<iostream>
using namespace std;
void bubsort(int arr[],int n){   //bubble sort means compare adjacent elemnt and swap greater element to right side
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
		if(arr[i]>arr[j])
		swap(arr[i],arr[j]);}
		
	}
	
}
int main(){
	int arr[]={2,10,15,4,3,6,4};
	int n=7;
	bubsort(arr,n);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}