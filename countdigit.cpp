#include<iostream>
using namespace std;
int main(){
	int x;
	int count=0;
	cout<<"enter the number"<<endl;
	cin>>x;
	while(x>0){
		x=x/10;
		count++;
	}
	cout<<count<<endl;
}