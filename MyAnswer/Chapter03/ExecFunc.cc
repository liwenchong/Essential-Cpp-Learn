#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>

using namespace std;

template <typename IteratorType, typename elemType>
IteratorType myFind(IteratorType first, IteratorType last, const elemType value)
{
    for( ; first != last; ++first)
    {
        if(value == *first)
        {
            return first;
        }
    }

    return last;
}

int main()
{
    vector<int> vecInt{1, 3, 5, 7, 9};
    vector<string> vecStr{"Li", "Jin", "Wang", "Zhang", "Jiang"};
    int arrInt[] = {1, 2, 3, 4, 5};

    string mystr{"Zhang"};
    cout << *myFind(vecInt.begin(), vecInt.end(), 3)  << endl;
    cout << *myFind(vecStr.begin(), vecStr.end(), mystr)  << endl;
    cout << myFind(arrInt, arrInt + 5, 4) << "    " << *myFind(arrInt, arrInt + 5, 4) << endl;

    return 0;
}