#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
	unordered_map<string,int>m;
	m["gfg"]=20;
	m["sfg"]=30;
	m.insert({"shiv",50});
	for(auto x:m)
	 cout<<x.first<<" "<<x.second<<endl;
	 
	 return 0;
}
