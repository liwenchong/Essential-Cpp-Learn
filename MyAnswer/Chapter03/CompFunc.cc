#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

vector<int> filter(const vector<int> &vec, int val, const less<int> &lt)
{
    vector<int> nvec;
    vector<int>::const_iterator iter = vec.begin();

    while((iter = find_if(iter, vec.end(), bind2nd(lt, val))) != vec.end())
    {
        nvec.push_back(*iter);
        iter++;
    }

    return nvec;
}

bool less_than(int v1, int v2)
{
    return v1 < v2 ? true : false;
}

int main()
{
    // less<int> a;
    vector<int> vec{1, 2, 3, 4, 5 , 6, 8};
    vector<int> nvec = filter(vec, 5, less<int>());
    cout << nvec[0] << endl;
    return 0;
}