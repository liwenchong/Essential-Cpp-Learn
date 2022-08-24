#include <iostream>
#include <string>
#include <vector>

#define MAX_NUMBER 100

using namespace std;

const vector<int> * getPentagonal(const int num)
{
    static vector<int> vec;

    if(num <= 0 || num >= MAX_NUMBER)
    {
        return &vec;
    }

    for(int i = vec.size(); i < num; ++i)
    {
        vec.push_back(i * (3 * i - 1) / 2);
    }

    return &vec;
}

int getIndexInVector(const int index, const vector<int> vec)
{
    if(index < 1 || index > vec.size())
    {
        return -1;
    }

    return vec[index];
}

int main()
{
    int number = 10;
    const vector<int> *vec;
    vec = getPentagonal(number);
    cout << getIndexInVector(1, *vec) << endl;

    return 0;
}