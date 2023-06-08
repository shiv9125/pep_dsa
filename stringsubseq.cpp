#include<bits/stdc++.h>
using namespace std;
bool strsubsequence(string s1,string s2){
	int j=0;
	 for(int i = 0; i < s1.length() && j < s2.length(); i++){
        if(s1[i] == s2[j])
        j++;
    }
    return(j==s2.length());
}
int main(){
	cout<<strsubsequence("ABCDE","BGD");
	return 0;
}