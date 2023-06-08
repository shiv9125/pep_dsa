#include<iostream>
using namespace std;
int main(){
	cout<<"Menu\n";
	cout<<"1.add\n"<<"2.subtract\n"<<"3.multiply\n"<<"4.divide\n"<<endl;
	int option;
	cout<<"enter option"<<endl;
	cin>>option;
	int a,b,c;
	cout<<"enter two number"<<endl;
	cin>>a>>b;
	switch(option){
		case 1: c=a+b;
		        
		       break;
		case 2: c=a-b;
		       
		       break;
	    case 3: c=a*b;
	           
		       break;
	    case 4: c=a/b;
	           
		       break;
	    default: cout<<"invalid input"<<endl;		   		   		          
	}
	cout<<"the result is "<<c<<endl;
	return 0;
}