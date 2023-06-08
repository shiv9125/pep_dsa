#include <iostream>
using namespace std;
 
class Point {
private:
    int x, y;
 
public:
    // Parameterized Constructor
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
 
    int getX() { return x; }
    int getY() { return y; }
};
 
int main()
{
    // Constructor called
    Point p1(10, 15);//p1 is object
    cout << p1.getX()<<endl;
    cout << p1.getY()<<endl;
 
    return 0;
}