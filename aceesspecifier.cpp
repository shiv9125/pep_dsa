class Base
{
private: int a;
protected: int b;
public: int c;

 void funBase()
 {
 a=10;//all public,protected,private can be access inside a class
 b=5;
 c=15;
 }
};
class Derived:public Base
{
public:
 void funDerived()
 {
 
 b=5;//protected and public member both can be access inside derived class
 c=15;
 }
};
int main()
{
 Base b;
 

 b.c=20;//only public member can be access on an object
}