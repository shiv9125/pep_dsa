#include<iostream>
using namespace std;
int main(){
	int A[7]={2,3,4,5,9,7,8};
	int n=7,max;
	max=A[0];
	for(int i=1; i<7; i++){
		if(A[i]>max){
			max=A[i];
		}
	}
	cout<<"max is  "<<max<<endl;
	return 0;
}