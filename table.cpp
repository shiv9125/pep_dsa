#include<iostream>
using namespace std;
int main(){
	int n,i;
	cout<<"enter n"<<endl;
	cin>>n;
	for(i=1; i<=n; i++){
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
	}
	return 0;
}