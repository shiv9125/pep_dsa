#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[3][2]={{10,20},{30,40},{50,60}};
	for(int i=0; i<3; i++){//for row 
		for(int j=0; j<2; j++){//for column
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
