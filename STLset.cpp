#include<iostream>
#include<set>
using namespace std;
int main(){
	set<int> s={2,4,6,8,10};
	s.insert(20);
	s.insert(30);
	s.erase(30);
    cout<<"the size of map is "<<s.size()<<endl;
    
	set<int>::iterator itr;
	for(itr=s.begin();itr!=s.end();itr++){
		cout<<*itr<<endl;
	}
	cout<<"using for each loop "<<endl;
	for(int x:s){
		cout<<x<<endl;
	}
	  auto pos=s.find(6);//The auto keyword in C++ automatically detects and assigns a data type to the variable with which it is used. 
 
    // print element if it is present in set
    if(pos != s.end())
        cout << "Element found at position : "<< *pos;
    else
        cout << "Element not present in set";
 
    return 0;
}