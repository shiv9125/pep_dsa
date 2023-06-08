#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>v1;
	for(int i=0; i<5; i++){
		v1.push_back(i);
	}
	for(int i=0; i<5; i++){
		cout<<v1[i]<<" "<<endl;
	}
	cout<<endl<<v1.size();
	
}