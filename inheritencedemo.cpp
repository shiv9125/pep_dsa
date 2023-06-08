#include<iostream>
using namespace std;
class Base{
	public:
	int x;
	void show(){
	
	cout<<x<<endl; }
};
class Derived : public Base{// derived class inherit the feature of base class 
	public:
		int y;
		void display(){
		
		cout<<x<<" "<<y<<endl;}
};
int main(){
	Base b1;
	b1.x=25;
	b1.show();
	Derived d1;
	d1.x=10;
	d1.y=20;
	d1.show();
	d1.display();
}