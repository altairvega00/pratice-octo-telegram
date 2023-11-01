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

double roundTrip(const vector<Star> &v, double &avgMagnitude)
{
    double totalDistance = 0.0;
    double totalMagnitude = 0.0;

    for (size_t i = 0; i < v.size(); ++i)
    {
        double dx = v[i].x - (i + 1 < v.size() ? v[i + 1].x : v[0].x);
        double dy = v[i].y - (i + 1 < v.size() ? v[i + 1].y : v[0].y);
        totalDistance += sqrt(dx * dx + dy * dy);

        totalMagnitude += v[i].magnitude;
    }

    avgMagnitude = (v.size() != 0) ? totalMagnitude / v.size() : 0;

    // Add your work here
    return totalDistance;
}