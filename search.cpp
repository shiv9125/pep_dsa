#include <iostream>

using namespace std;


int main()
{
    int n,x;
    cin>>n,x;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int j=n-1; j>=0; j--){
        if(arr[j]==x){
        cout<<j;}
    }
    return 0;
}

