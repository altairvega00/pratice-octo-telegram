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

struct Camera
{
    string manufacturer;
    string model;
    int releaseYear;
    int resolution;
    int weight;
    double price;
};

vector<string> bestValue(const vector<Camera> &v)
{
    vector<string> result;
    string name = "";
    string model = "";
    double price = -1;
    double bestValues = -1;
    int i = 0;
    ostringstream oss;
    for (i = 0; i < v.size(); i++)
    {
        double rate = v[i].resolution / v[i].price;
        if (name == "")
        {
            name = v[i].manufacturer;
            model = v[i].model;
            bestValues = rate;
            price = v[i].price;
        }
        else if (name == v[i].manufacturer)
        {
            if (bestValues < rate)
            {
                bestValues = rate;
                model = v[i].model;
                price = v[i].price;
            }
        }
        if (name != v[i].manufacturer)
        {
            oss << fixed << setprecision(2) << price;
            result.push_back(name + ":" + model + ":$" + oss.str());
            name = v[i].manufacturer;
            model = v[i].model;
            bestValues = rate;
            price = v[i].price;
            oss.str("");
        }
    }
    oss << fixed << setprecision(2) << price;
    result.push_back(name + ": " + model + ": $ " + oss.str());
    return result;
}
