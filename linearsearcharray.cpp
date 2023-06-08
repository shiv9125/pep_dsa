#include<iostream>
using namespace std;
int main(){
	int A[10]={1,2,3,4,5,6,7,89,32,45};
	int key,n=10;
	cout<<"enter key to search"<<endl;
	cin>>key;
	for(int i=0; i<n; i++){
		if(key==A[i]){
			cout<<"found at index :- "<< i <<endl;	
			return 0;
		}	
	}
	cout<<"not found"<<endl;
	return 0;
}