
#include <iostream>
using namespace std;
 
void lineIntersection(int x, int y, int z,
                  int h, int k, int radius)
{
    int distance = (abs(x * h + y * k + z)) /
                     sqrt(x * x + y * y);
 
    if (radius == distance)
        cout << "One Intersection" << endl;
    else if (radius > distance)
        cout << "Two Intersection" << endl;
    else
        cout << "No Intersection" << endl;
}

int main()
{ 
    int radius;
    cout <<"Enter circle's radius: ";
    cin >> radius;
    cout << "\n";
    int h, k;
    cout <<"Enter circle's center x co-ordinate: "; 
    cin >> h;
    cout << "\n";
    cout <<"Enter circle's center y co-ordinate: "; 
    cin >> k; 
    cout << "\n";

    int x1, y1, x2, y2;
    cout << "Enter x1: ";
    cin >> x1;
    cout << "\n";
    cout << "Enter y1: ";
    cin >> y1;
    cout << "\n";
    cout << "Enter x2: ";
    cin >> x2;
    cout << "\n";
    cout << "Enter y2: ";
    cin >> y2;
    cout << "\n";

    int a = y1 - y2;
    int b = x2 - x1;
    int c = (x1-x2) * y1 + (y2-y1) * x1;
    
    lineIntersection(a, b, c, h, k, radius);
    return 0;
}