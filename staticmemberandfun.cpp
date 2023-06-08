#include<iostream>
using namespace std;
class Test
{
public:
 int a;
 static int count;//static member

 Test()
 {
 a=10;
 count++;
 }
 static int getCount()//static member function
 {
 return count;
 }

};
int Test::count=0;//defining data member using scope resolution
int main()
{
 Test t1,t2;
 cout<<t1.count<<endl;
 cout<<t2.count<<endl;
 cout<<Test::getCount()<<endl;
 cout<<t1.getCount()<<endl;
}