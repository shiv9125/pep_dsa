#include<iostream>
using namespace std;
int subarraysum(int arr[],int n,int k){
		int res=0;
	   for(int i=0; i<n-k+1; i++){
	   	int sum=0;
		for(int j=0; j<k; j++){
			sum=sum+arr[j+i];
			res=max(res,sum);
		}
	//	if(sum>res){
		//	res=sum;
	//	}
    		
	}
	return res;
}
int main(){
	int n,k;//taking input from user
	cin>>n>>k;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<subarraysum(arr,n,k);
	return 0;
}