#include<iostream>
using namespace std;
int main(){
	int hour;
	cout<<"enter hour";
	cin>>hour;
	if(hour>=9 && hour<=18){
		cout<<"working time";
	}
	else{
		cout<<"not working time";
	}
	return 0;
}