#include<iostream>
using namespace std;
int main(){
	int A[10]={2,4,6,7,8,9,10,11,13,15};
	int l=0, h=9,key,mid;
	cout<<"enter key to search"<<endl;
	cin>>key;
	while(l<=h){
		mid=(l+h)/2;
		if(key==A[mid]){
			cout<<"found at index :- "<<mid<<endl;
			return 0;
		}
		else if(key<A[mid]){
			h=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	cout<<"not found"<<endl;
	return 0;
	     
}