#include <iostream>
using namespace std;
class Base //base or parent class
{
public:
 int a;
 void display()
 {
 cout<<"Display of Base "<<a<<endl;
 }
};
class Derived:public Base //  derived or child class inherit feature of parent or base class
{
public:
 void show()
 {
 cout<<"Show of Derived"<<endl;
 }
};
int main()
{
 Derived d;
 d.a=100;
 d.display();
 d.show();
}