#include<bits/stdc++.h>
using namespace std;
bool ispal(string str){
	int beg=0;
	int end=str.length()-1;
	while(beg<end){
		if(str[beg]!=str[end]){
		return false;}
		beg++;
		end--;
	}
	return true;
}
int main(){
//	string str="ABCBA";
	cout<<ispal("ABCBA");
	return 0;
}