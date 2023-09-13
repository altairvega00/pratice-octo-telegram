#include <iomanip>
#include <string>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
        // Add your code here
    double x1;
    double y1;
    double x2;
    double y2;
    double D;
    
    cout << "Last name, First: Distance Calculator" << endl;
    cout << "\\\"\\\\\"\\\\\"\\\\\"\\\\\"\\\\\"\\\\\"\\\\\"\\\\\"\\\\\"\\\\\"\\\\\"\\\\"<<endl;
    cout << "\n";
    
    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;
    cout << "Enter x2 and y2: " << endl;
    cin >> x2 >> y2;
    
    D = sqrt(pow(x2-x1,2) + pow(y2 -y1, 2));
    cout << "Distance between points [" << D << "]";

    return 0;
}