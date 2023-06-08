#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>v1;
	cout<<v1.capacity()<<endl;
	//v1.push_back(10);
	//cout<<v1.capacity();
//	v1.push_back(20);
	//v1.push_back(30);
	//cout<<v1.capacity();
	//v1.pop_back();
	//cout<<v1.capacity();
	for(int i=0; i<=9; i++){
		v1.push_back(10*(i+1));
	}
	cout<<"final capacity-"<<v1.capacity()<<endl;
	v1.pop_back();
	v1.pop_back();
	v1.pop_back();
	cout<<"after pop 3 element-"<<v1.capacity()<<endl;
	cout<<"no of elements-"<<v1.size()<<endl;
	for(int i=0; i<v1.size(); i++){
		cout<<v1[i]<<" "<<endl;
	}
	cout<<"value at index 3 is-"<<v1.at(3)<<endl;
	cout<<"last value-"<<v1.back()<<endl;
	cout<<"front value-"<<v1.front();
}