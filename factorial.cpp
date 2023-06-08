#include<iostream>
using namespace std;
int main(){
	int n,i,fact=1;
	cout<<"enter n"<<endl;
	cin>>n;
	for(i=n; i>=0; i--)
	{
		fact=fact*i;
	}
	cout<<fact<<endl;
	
	return 0;
}