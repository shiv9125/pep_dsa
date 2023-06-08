#include<iostream>
using namespace std;
struct rectangle
{
	int length;
	int breadth;
};
int main(){
    struct rectangle r;
	r.length=10;
	r.breadth=20;
	cout<<"area is "<<(r.length*r.breadth)<<endl;
	return 0;
}