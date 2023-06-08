#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int> v={2,4,6,8,10};//list=doubly linked list
	v.push_back(20);
	v.push_back(30);
	v.pop_back();
	list<int>::iterator itr;//using iterator
	for(itr=v.begin();itr!=v.end();itr++){
		cout<<*itr<<endl;
  }
	
}