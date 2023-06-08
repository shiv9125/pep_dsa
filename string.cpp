#include <iostream>
using namespace std;
  
// Driver Code
int main()
{
    // Declaring string
    string name="abc";
    char c='a';
  
    // Taking string input using getline()
   // getline(cin, str);
  
    
    cout << "The initial string is : ";
    cout << str << endl;
  
    // Inserting a character
    str.push_back('s');
  
    // Displaying string
    cout << "The string after push_back operation is : ";
    cout << str << endl;
  
    // Deleting a character
    str.pop_back();
  
    // Displaying string
    cout << "The string after pop_back operation is : ";
    cout << str << endl;
  
    return 0;
}