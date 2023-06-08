#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v{2,4,6,8,10};
	cout<<"capacity is"<< v.capacity()<<endl;//kitne elements store krne ki capacity h=5
	cout<<"size is" <<v.size()<<endl;//current me kitne elements h=5
	v.push_back(20);
	cout<<"capacity is"<< v.capacity()<<endl;//10
	cout<<"size is" <<v.size()<<endl;//6
	v.push_back(30);
	v.pop_back();
	for(int x:v){ //using for each loop
	cout<<x<<endl;}
	for(int i=0; i<6; i++){//another way 
		cout<<v[i]<<endl;
	}
}
