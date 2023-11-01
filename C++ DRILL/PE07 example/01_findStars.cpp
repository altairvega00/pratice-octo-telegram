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

vector<int> findStars(const vector<Star> &v, const string &name)
{
    vector<int> result;
    // Add your work here
    for (int i = 0; i < v.size(); i++)
    {
        size_t pos = v[i].names.find(name);
        if (pos != string::npos)
        {
            result.push_back(v[i].draper);
        }
    }
    return result;
}