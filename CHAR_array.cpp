#include<iostream>
using namespace std;
int main(){
	//char arr[6]="apple";
	//for(int i=0; i<6; i++){
	//	cout<<arr[i]<<endl;
	char arr[100];
	cout<<"enter input"<<endl;
    cin>>arr;
	cout<<arr<<endl;
	
	char arr1[100]="shiva is good";
	int i=0;
	while(arr1[i]!='\0'){
		cout<<arr1[i]<<endl;
		i++;
	}
	return 0;
}