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

double starsBetween(const vector<Star> &v, vector<string> &names, double lower, double upper)
{
    double result = -1;
    // Add your work here

    double sum = 0;
    int cnt = 0;
    for (int j = 0; j < v.size(); j++)
    {
        if (v[j].magnitude > lower && v[j].magnitude < upper)
        {
            sum += v[j].magnitude;
            cnt++;
            names.push_back(v[j].names);
        }
    }
    result = sum / cnt;
    if (names.size() == 0)
        return -1;
    return result;
}
