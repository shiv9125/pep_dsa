#include <iostream>
#include <cmath>
using namespace std;
void countfreq(int arr[],int n){
	for(int i=0; i<n; i++){
		if(arr[i]==-1)
		continue;
		int temp=arr[i];
		int count=0;
		for(int j=0; j<n; j++){
			if(temp==arr[j]){
			
			count++;
			arr[j]=-1;}
		}
		cout<<temp<<" "<<count<<endl;
	}
}
int main(){
	int arr[]={1,2,1,4,2,4,1,5};
	int n=8;
	countfreq(arr,n);
	return 0;
}