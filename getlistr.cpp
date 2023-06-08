#include <sstream>
#include <vector>
#include<iostream>
using namespace std;
int main() {
    string str;
    getline (cin, str);
    stringstream s(str + ',');
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ',') {
            count++;
        }
    }
    for (int i = 0; i < count+1; i++) {
        int a;
        char c;
        s >> a >> c;
        cout << a << "\n";
         
    }
}