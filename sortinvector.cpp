#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int>v={5,7,20,10};
	v.push_back(40);
	v.pop_back();
	sort(v.begin(),v.end());
	for(int x:v)
	cout<<x<<" ";
	sort(v.begin(),v.end(),greater<int>());//sort in descending
    cout<<endl;
	for(int x:v)
	cout<<x<<" ";
	
}