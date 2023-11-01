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

double bestMileage(const vector<Car> &v, vector<string> &vMileage)
{
    double result = 0;
    // Add your work here
    double mileage = -1;
    string model = "";
    string name = "";
    int cnt = 0;
    int i = 0;
    for (i = 0; i < v.size(); i++)
    {
        if (name == "")
        {
            name = v[i].mfg;
            model = v[i].model;
            mileage = v[i].mpg;
        }
        else if (name == v[i].mfg)
        {
            if (mileage < v[i].mpg)
            {
                mileage = v[i].mpg;
                model = v[i].model;
            }
        }
        if (name != v[i].mfg)
        {
            result += mileage;
            vMileage.push_back(name + ";" + model);
            cnt++;
            name = v[i].mfg;
            mileage = v[i].mpg;
            model = v[i].model;
        }
    }
    cnt += 1;
    result += mileage;
    vMileage.push_back(v[i - 1].mfg + ";" + model);
    result /= cnt;
    return result;
}
