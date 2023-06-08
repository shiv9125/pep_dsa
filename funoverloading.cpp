#include<iostream>
using namespace std;
int add(int x, int y){
	return x+y;
}
int add(int x, int y, int z){
	return x+y+z;
}
float add(float x , float y){
	return x+y;
}
int main(){
	int c;
	c=add(5,3);
	cout<<c<<endl;
	int d;
	d=add(2,3,4);
	cout<<d<<endl;
	float p;
	p=add(2.2f , 2.4f);
	cout<<p<<endl;
	return 0;
}