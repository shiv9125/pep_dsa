#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[], int n ){//selection sort traverse and select minium and insert in array
	for(int i=0; i<n; i++){
		int min_ind=i;
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[min_ind]){
			
			min_ind=j;}
		}
		 swap(arr[i], arr[min_ind]);
	}
	
}
int main(){
	int arr[]={2,6,3,7,9,1};
	int n=6;
	selectionsort(arr,n);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}