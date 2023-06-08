// C++ program to illustrate the
// Modifiers in vector
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// Assign vector
	vector<int> v;

	// fill the array with 10 five times
	v.assign(5, 10);

	cout << "The vector elements are: ";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
     cout<<v.size()<<endl;
	// inserts 15 to the last position
	v.push_back(15);
	cout<<"now the size is: "<<v.size()<<endl;
	cout<<"capacity is: "<<v.capacity();
	cout << "\nThe new vector elements are: ";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	int n = v.size();
	cout << "\nThe last element is: " << v[n - 1];

	// removes last element
	v.pop_back();

	// prints the vector
	cout << "\nThe vector elements are: ";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

}
