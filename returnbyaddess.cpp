#include<iostream>
using namespace std;
int* fun(int n)
{
int *p=new int[n];
for(int i=0;i<n;i++)
p[i]=5*i;
return p;
}
int main()
{    int *q=fun(5);
	for(int i=0; i<5; i++){
		cout<<q[i]<<endl;
	}
return 0;
}