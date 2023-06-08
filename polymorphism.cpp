#include<iostream>
using namespace std;
class Car
{
public:
 virtual void start()=0;                                                     
										// polymorphism means having many forms it is abilty of message to be displayed in more than one form
};
class Innova:public Car
{
public:
 void start(){cout<<"Innova Started"<<endl;}   
};
class Swift:public Car
{
public:
 void start(){cout<<"Swift Started"<<endl;}
};
int main()
{
 Car *c;
 Innova i;
 c=&i;
 c->start();
 Swift s;
 c=&s;
 c->start();
     //or 
 //Car *p=new Innova();
 //p->start();
 //p=new Swift();
 //p->start();
 
}