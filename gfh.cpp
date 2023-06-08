#include<iostream>
#include<vector>
using namespace std;
void fun(string str){
    vector<int>v;
	char ch;
	for(int i=0; i<str.length(); i++){
		if(str[i]==','){
			ch=str[i];
		}
		else{
			v.push_back(str[i]);
		}
	}
	for(int i=0; i<v.size(); i++){
		cout<<v[i];
	}
}
int main(){
	string str="12,13,14";
	getline(cin,str);
	fun(str);
	return 0;
	
}