#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
int main()
{	
    double A;
    double r;
    double h;
    
    cout << "Your name: Cone Area Calculator" << endl;
    cout << "\\\"/\\\"/\\\"/\\\"/\\\"/\\\"/\\\"/\\\"/\\\"/\\\"/\\\"/"<< endl;
    cout << "\n";
    cout << "Enter the radius of the cone: ";
    cin >> r;
    cout << "Enter the height of the cone: " << endl;
    cin >> h;

    A = acos(-1.0) * r * ( r + sqrt(h * h + r * r));
    cout << "Cone Area [" << A << "]";

    return 0; 
}