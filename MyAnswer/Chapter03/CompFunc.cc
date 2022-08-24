#include <iostream>
#include <vector>

using namespace std;

vector<int> filter(const vector<int> &vec, int filter_value, bool (*pred)(int, int))
{
    vector<int> nvec;

    for(int ix = 0; ix < vec.size(); ++ix)
    {
        if(pred(vec[ix], filter_value))
        {
            nvec.push_back(vec[ix]);
        }
    }

    return nvec;
}

bool less_than(int v1, int v2)
{
    return v1 < v2 ? true : false;
}

int main()
{
    vector<int> vec{1, 2, 3, 4, 5 , 6, 8};
    vector<int> nvec = filter(vec, 5, less_than);
    cout << nvec[0] << endl;
    return 0;
}