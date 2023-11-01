#include <string>
#include <vector>
using namespace std;

struct Star
{
    double x, y;
    double magnitude;
    int draper;
    string names;
};

vector<int> magnitudeBetween(const vector<Star> &v, double lower, double upper)
{
    vector<int> result;
    // Add your work here
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].magnitude > lower && v[i].magnitude < upper)
        {
            result.push_back(v[i].draper);
        }
    }
    return result;
}
