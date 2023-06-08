#include<iostream>
using namespace std;
int main(){
	int i,n;
	int num[100], sum=0;
	float average;
	cout<<"enter the no of element"<<endl;
	cin>>n;
    cout<<"enter numbers"<<endl;
	for(i=0; i<n; i++){
    	cin>>num[i];
		sum=sum+num[i];
	}
	average=sum/n;
	cout<<"average is "<<average<<endl;
	
	return 0;
}