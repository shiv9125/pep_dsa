#include<iostream>
using namespace std;
int add(int x, int y, int z=0)//int z=0 is default parameter
{
	return x+y+z;
}
int main(){
	int c=add(2,5);
	cout<<c<<endl;
	c=add(2,5,4);
	cout<<c<<endl;
    c=add(2,5,0);
    cout<<c<<endl;
	return 0;
}