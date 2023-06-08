#include <iostream>
using namespace std;
bool ispalindrome(string str,int start,int end){//start=0,end=n-1;where n is length of string
	if(start>=end)
	 return true;
	  return (str[start]==str[end])&& ispalindrome(str,start+1,end-1);// 1 means true 0 means false
	  	
	  
	
}
int main(){
 cout<<ispalindrome("abcba",0,4)<<endl;
 return 0;
}