#include<iostream>
using namespace std;
int getsum(int arr[],int l,int r){
	int sum=0;
	for(int i=l; i<=r; i++){
		sum=sum+arr[i];
	}
	return sum;
}
int main(){
	int arr[]={1,2,3,4,5,6};
	cout<<getsum(arr,1,3);
	return 0;
}