#include<iostream>
using namespace std;
void swap(int a, int b){// formal parameter  note:- if any change in formal parameter that  will not modify actual parameter
	int temp;
	temp=a;
	a=b;
	b=temp;
	
	
}
int main(){
	int x=5,y=6;//actual parameter
	swap(x,y);
	cout<<x<<" "<<y<<endl;
	return 0;
	
}