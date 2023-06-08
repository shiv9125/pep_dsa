#include<iostream>
using namespace std;
int getlargest(int arr[],int n){
	for(int i=0; i<n; i++){
			bool flag=true;
		for(int j=0; j<n; j++){
			if(arr[j]>arr[i]){
				flag=false;
				break;
			}
		}
		if(flag==true)
			return arr[i];
	}
	return -1;
}
int main(){
	int arr[]={10,12,9,8,4,3};
	cout<<getlargest(arr,6);
	return 0;
}