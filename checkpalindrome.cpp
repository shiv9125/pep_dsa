#include <iostream>
using namespace std;
int main()
{
int m,n,r,rev=0;
 cout<<"Enter n "<<endl;
 cin>>n;
 m=n;
while(n>0){
	r=n%10;
	n=n/10;
	rev=rev*10+r;
}
cout<<"reverse number is "<<rev<<endl;
if(m==rev){
	cout<<"its palindrome"<<endl;
}
else {
	cout<<"not palindrome"<<endl;
}
return 0;
}