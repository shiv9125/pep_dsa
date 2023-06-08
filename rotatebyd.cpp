#include <iostream>
#include <cmath>
using namespace std;

 void lRotateOne(int arr[], int n)
{
	int temp = arr[0];

	for(int i = 1; i < n; i++)
	{
		arr[i - 1] = arr[i];
	}

	arr[n - 1] = temp;
}

void leftRotate(int arr[], int d, int n)
{
	for(int i = 0; i < d; i++)
	{
		lRotateOne(arr, n);
	}
}
int main(){
	int arr[]={1,2,3,4,5};
	int n=5,d=2;
	leftRotate(arr, d, n);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}