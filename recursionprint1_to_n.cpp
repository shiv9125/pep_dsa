#include<iostream>
using namespace std;
void fun(int n){
	
	if(n==0){
		return;
	}
	fun(n-1);
	cout<<n<<endl;
	
}
int main(){
	fun(10);
	return 0;
}