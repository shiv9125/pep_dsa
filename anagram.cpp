#include<bits/stdc++.h>
using namespace std;
bool isanagram(string s1, string s2){
	if(s1.length()!=s2.length()){
		return false;
	}
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	return (s1==s2);
}
int main(){
	cout<<isanagram("listen","silent");
	return 0; 
}