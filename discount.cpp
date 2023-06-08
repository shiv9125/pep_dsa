#include<iostream>
using namespace std;
int main(){
	float bill_amount;
	float discount;
	cout<<"enter bill_amount"<<endl;
	cin>>bill_amount;

	if(bill_amount>=500){
		cout<<"discount is 20%"<<endl;
		discount=bill_amount*20/100;
		cout<<discount;
	}
	else if(bill_amount>100 && bill_amount<500){
		cout<<"discount is 10%"<<endl;
		discount=bill_amount*10/100;
		cout<<discount;
	}
	else {
		cout<<"no discount"<<endl;
	}
	return 0;
}