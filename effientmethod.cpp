#include<iostream>
using namespace std;
int maxsum(int arr[], int n){
	int res=0;
	int maxend=arr[0];
	for(int i=1; i<n; i++){
		maxend=max(maxend+arr[i],arr[i]);
		res=max(res,maxend);
	}
	return res;
}
int main() {
	
     int arr[] = {1, -2, 3, -1, 2}, n = 5;

     cout<<maxsum(arr, n);
    
}