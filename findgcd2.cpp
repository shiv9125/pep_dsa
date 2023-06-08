#include<iostream>
using namespace std;
void gcd(int a, int b){

	int res=min(a,b);
	while(res>0){
		if(a%res==0 && b%res==0){
			break;
		}
		res--;
	}
	cout<<res<<endl;
}
int main(){
   
   gcd(12,84);
  
}

