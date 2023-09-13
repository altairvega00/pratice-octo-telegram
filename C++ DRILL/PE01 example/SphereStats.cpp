#include <iomanip>
#include <string>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double r;
    double V;
    double A;
    
    cout << "Last name, First: Sphere Calculator" << endl;
    cout << "\\|/|\\|/\\|/\\|/\\|/\\|/\\|/\\|/\\|/\\|/\\|/\\"<< endl;
    cout << "\n";
    cout << "Enter the radius of the sphere: "<< endl;
    cin >> r;
    
    V = acos(-1.0) *r * r * r * (4.0/3.0);
    A = acos(-1.0) * r * r * 4;
    cout << "Sphere Volume: [" << V << "]" << endl;
    cout << "Sphere Surface Area: [" << A << "]" << endl;

    return 0;
}