#include<iostream>
using namespace std;
class rectangle
{   
    private://making data member private so that no one can access outside
	int length;
	int breadth;
    public://making member function public so that in main function or outside we can access
    void display(int l, int b){
    	if(l>=0){
    		length=l;
		}
		else{
			cout<<"wrong input"<<endl;
			length=0;
		}
	
	
		if(b>=0){
			breadth=b;
		}
		else{
			cout<<"wrong input"<<endl;
			breadth=0;
		}
		
	}	
int area(){
	return length*breadth;
}
int perimeter(){
	return 2*(length+breadth);
}
};
int main(){
	rectangle r1;
//	r1.display(6,5);
	cout<<r1.area()<<endl;
//	cout<<r1.perimeter();
	return 0;
	
}
	