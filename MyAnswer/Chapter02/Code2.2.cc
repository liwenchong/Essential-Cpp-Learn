#include <iostream>
#include <vector>
#include <string>

#define MAX_NUMBER 100

using namespace std;

bool getPentagonal(const int num, vector<int> &vec)
{
    if(num <= 0 || num >= MAX_NUMBER)
    {
        cout << "Error Number!" << endl;

        return false;
    }

    for(int i = 1; i <= num; ++i)
    {
        vec.push_back(i * (3 * i - 1) / 2);
    }

    cout << "Get Pentagonal Success, Pentagonal number : " << num << endl;

    return true;
}

void printVector(const vector<int> vec, const string seqType)
{
    if(seqType == "Pentagonal")
    {   
        cout << "Pentagonal : " << endl;
        for(int i = 0; i < vec.size(); ++i)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> myVec;
    int myNum = 10;
    string seqType = "Pentagonal";

    if(getPentagonal(myNum, myVec))
    {
        printVector(myVec, seqType);
    }

    return 0;
}