#include<iostream>
using namespace std;
class Base
{ // it is abstract class because it has pure virtual function    means you canot create object of it you can only create pointer of that class
public:
	
 virtual void fun1()=0;//pure virtual function
 virtual void fun2()=0;
};
class Derived :public Base
{
public:
 void fun1()
 {
 cout<<"fun1 of Derived"<<endl;
 }
 void fun2()
 {
 cout<<"fun2 of Derived"<<endl;
 }

};
int main()
{ 
 Derived d;
 d.fun1();
 d.fun2();
}