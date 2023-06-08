#include<iostream>
using namespace std;
void fun1(int n){
	if(n==0){
	return;
	}
	cout<<"gfg"<<endl;
	fun1(n-1);//recursion - fun call itself
	
}

int main(){
	fun1(2);
	return 0;
}
