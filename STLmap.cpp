#include <iostream>
#include <map>
using namespace std;
 
int main()
{
 
    // empty map container
    map<int, int> m;
 
    // insert elements in random order
    m.insert(pair<int, int>(1, 40));
    m.insert(pair<int, int>(2, 30));
    m.insert(pair<int, int>(3, 60));
    m.insert(pair<int, int>(4, 20));
    m.insert(pair<int, int>(5, 50));
    m.insert(pair<int, int>(6, 50));
     
      m[7]=10;     // another way of inserting a value in a map
    m.erase(6);
   cout<< m.size()<<endl;//return the size of map
   cout << "The max size of m is " << m.max_size();
    // printing map gquiz1
    map<int, int>::iterator itr;
    cout << "\nThe map table is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = m.begin(); itr != m.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;
    map<int, int>::iterator itr1;
    itr1=m.find(3);//finding value
    cout<<"value found is "<<endl;
    cout<<itr1->first<<" "<<itr1->second<<endl;
    
    cout<<"another method to find "<<endl;
    auto itr2=m.find(3);
    if(itr2 != m.end()){
	
         cout << itr2->first <<" " << itr2->second << endl;
		 }
    else{
	
        cout << "Element not present in set";}
 
    return 0;
    
}