#include<iostream>
using namespace std;
int main(){
	int day;
	cout<<"enter day"<<endl;
	cin>>day;
	if(day==1){
		cout<<"monday";
	}
	else if(day==2){
		cout<<"tuesday";
	}
	else if(day==3){
		cout<<"wednesday";
	}
	else if(day==4){
		cout<<"thursday";
	}
	else {
		cout<<"sunday";
	}
	return 0;
}