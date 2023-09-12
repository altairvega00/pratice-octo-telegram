#include <iomanip>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    double n;
    double s;
    double A;
    const double Pi = acos(-1.0); // Define Pi as acos(-1.0)

    cout << "Last name, First: Polygon Area Calculator" << endl;
    cout << "\"'\"'\"'\"'\"'\"'\"'\"'\"'\"'\"'\"'\"'\"'\"'\"'\"'\"'\"'\"'\"" << endl;
    cout << "\n";

    cout << "Enter the number of sides (as an integer): ";
    cin >> n;
    cout << "Enter the length of each side: " << endl;
    cin >> s;

    A = (pow(s,2) * n ) / (4 * tan (Pi / n));

    cout << "Polygon Area: [" << A << "]" << endl;
    return 0;
}