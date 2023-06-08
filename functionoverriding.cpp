#include<iostream>
using namespace std;
class Base
{
public:
 void fun()
 {
 cout<<"fun of Base"<<endl;
 }
};
class Derived: public Base
{
public:
 void fun()//redefined of function in derived class c/d function overriding  , while function overloading is two or more function have same name if number of type of parameters are different
 {
 cout<<"fun of Derived"<<endl;
 }
};
int main()
{
Derived d;
d.fun( );
}