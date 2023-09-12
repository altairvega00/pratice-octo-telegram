#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
int main()
{	
    double V;
    double R;
    double H;
    
    cout << "Your name: Cone Volume Calculator" << endl;
    cout << "\\\"/\\\"/\\\"/\\\"/\\\"/\\\"/\\\"/\\\"/\\\"/\\\"/\\\"/"<< endl;
    cout << "\n";
    cout << "Enter the radius of the cone: ";
    cin >> R;
    cout << "Enter the height of the cone: " << endl;
    cin >> H;

    V = ( R * R * H * acos(-1.0)) / 3;
    cout << "Cone Volume [" << V << "]";

    return 0; 
}