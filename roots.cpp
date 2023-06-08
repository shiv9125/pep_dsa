#include<iostream>
using namespace std;
int main(){
	int b,a,c,d;
	cout<<"enter the value of b and a and c"<<endl;
	cin>>b>>a>>c;
	d=b*b-4*a*c;
	if(d==0){
		cout<<"roots are equal and real";
	}
	else if(d>0){
		cout<<"roots are real and unequal";
	}
	else
	{
	
		cout<<"roots are imaginary";
	}
	return 0;
	
}