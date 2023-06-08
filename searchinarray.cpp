#include<iostream>
using namespace std;
int search(int A[],int n,int x){
	for(int i=0; i<n; i++){
		if(A[i]==x)
		return i;
	}
	return -1;
}

	
int main(){
	int A[]={1,2,3,8,5,6};
	cout<<search(A, 6, 4);
	return 0;
	
}