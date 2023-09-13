#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    double area;
    double height;
    double radius;
    
    cout << "Last name, First: Cylinder Area Calculator" << endl;
    cout << "-\\|/-\\|/-\\|/-\\|/-\\|/-\\|/-\\|/-\\|/-\\|/-\\|/-\\" << endl;
    cout << "\n";
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: " <<endl;
    cin >> height;
    area = 2 * acos(-1.0) * pow(radius,2) + 2 * acos(-1.0) * radius * height;
    cout << "Cylinder Area [" << area << "]";

return 0;
}