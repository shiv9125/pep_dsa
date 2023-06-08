#include<iostream>
#include<forward_list>
using namespace std;
int main(){
	forward_list<int> v={2,4,6,8,10};//forward_list=singly linked list
	v.push_front(20);
	v.push_front(30);
	v.pop_front();//30 will be deleted because in front 30 will be there
   forward_list<int>::iterator itr;
	for(itr=v.begin();itr!=v.end();itr++){
		cout<<*itr<<endl;
  }
	
}