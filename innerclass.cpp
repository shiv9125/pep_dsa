#include<iostream>
using namespace std;
class outer
{
	public:
		int a;
		static int b;
	 //   void fun(){
    //	i.display();
       // }
      //  void fun2(){
     //   i.show();	
		
class inner
	{
		public:
			void show(){
			cout<<b;         //inner class can only acees static member of outer class
			}
			void display(){
			cout<<"this is inner class"<<endl;
		}
		};
		inner i;		
};
int outer::b=10;
int main(){
	outer::inner obj;
	obj.show();
	obj.display();
	
	//o.fun();
//	o.fun2();
	
}