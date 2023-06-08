#include<iostream>
using namespace std;
int countsubarray(int arr[],int n,int k,int m){//n=size of array   k=size of subarray   m=ones
	int ans=0;
	for(int i=0; i<n-k+1; i++){
		int count=0;
		for(int j=0; j<k; j++){
			if(arr[i+j]==1){
				count++;
				}
			}
			if(count>=m){
		        ans++;
			
		}
	}
	return ans;
}
int main(){
	int arr[]={1,0,0,1,0,1,0,1,1};
	int n=9;
	int k=3;
	int m=2;
	cout<<countsubarray(arr,n,k,m);
	return 0;
}