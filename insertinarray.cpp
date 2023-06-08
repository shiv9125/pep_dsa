#include <iostream>
#include <cmath>
using namespace std;

int insert(int arr[], int n, int x, int cap, int pos)
{
	if(n == cap)
		return n;

	int idx = pos - 1;

	for(int i = n - 1; i >= idx; i--)
	{
		arr[i + 1] = arr[i];
	}

	arr[idx] = x;

	return n + 1;
} 
int main(){
	int arr[6]={1,2,3,4,5};
	int n=5;
    n=insert(arr,n,8,6,2);//position start from 1...
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}