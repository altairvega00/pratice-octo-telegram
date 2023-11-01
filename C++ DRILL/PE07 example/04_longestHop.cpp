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

vector<Star> longestHop(const vector<Star> &v)
{
    vector<Star> result(2);
    // Add your work here
    double longest = -1;
    for (int i = 0; i < v.size() - 1; i++)
    {
        double length = sqrt(pow(v[i].x - v[i + 1].x, 2) + pow(v[i].y - v[i + 1].y, 2));
        if (length > longest)
        {
            result[0] = v[i];
            result[1] = v[i + 1];
            longest = length;
        }
    }
    return result;
}
