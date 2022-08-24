#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
void printVector(vector<T> vec);
template <typename T>
void printArray(T* arr, const int size);

template <typename T>
const T max(T para1, T para2);

template <typename T>
const T max(const vector<T> vecInt);

template <typename T>
const T max(const T* intArray, const int size);

int main()
{
    cout << "1 and 3 max : " << ::max(1, 3) << endl;
    cout << "1.1 and 3.3 max : " << ::max(1.1, 3.3) << endl;
    cout << "XiaoLi and XiaoJin max : " << max("XiaoLi", "XiaoJin") << endl;

    cout << endl << "////////////////////////////" << endl;

    vector<int> vecInt{0, 2, 3, 5, 6, 7, 11};
    vector<double> vecDouble{1.2, 2.4, 3.7, 5.7, 9.7, 17.2, 11.0};
    vector<string> vecStr{"Xiao", "Li", "Jin", "Wu", "Nanjing", "FXXK"};
    printVector(vecInt);
    cout << max(vecInt) << endl;
    printVector(vecDouble);
    cout << max(vecDouble) << endl;
    printVector(vecStr);
    cout << max(vecStr) << endl;

    cout << endl << "////////////////////////////" << endl;

    int intArr[] = {0, 2, 3, 5, 6, 7, 11};
    double doubleArr[]  = {1.2, 2.4, 3.7, 5.7, 9.7, 17.2, 11.0};
    string strArr[] = {"Xiao", "Li", "Jin", "Wu", "Nanjing", "FXXK"};
    printArray(intArr, 7);
    cout << max(intArr, 7) << endl;
    printArray(doubleArr, 7);
    cout << max(doubleArr, 7) << endl;
    printArray(strArr, 6);
    cout << max(strArr, 6) << endl;

    return 0;
}

template <typename T>
void printVector(vector<T> vec)
{
    if(is_same<T, double>::value)
    {
        cout << "vecDouble : {";
    }
    else if(is_same<double, int>::value)
    {
        cout << "vecInt : {";
    }
    else
    {
        cout << "vecStr : {";
    }

    for(int i = 0; i < vec.size() - 1; ++i)
    {
        cout << vec[i] << ", ";
    }

    cout << vec[vec.size() - 1] << "} : ";
}

template <typename T>
void printArray(T* arr, const int size)
{
    if(is_same<T, double>::value)
    {
        cout << "doubleArr : {";
    }
    else if(is_same<double, int>::value)
    {
        cout << "intArr : {";
    }
    else
    {
        cout << "strArr : {";
    }

    for(int i = 0; i < size - 1; ++i)
    {
        cout << *(arr + i) << ", ";
    }

    cout << *(arr + size - 1) << "} : ";
}

template <typename T>
const T max(T para1, T para2)
{
    if(para1 >= para2)
    {
        return para1;
    }
    
    return para2;
}

template <typename T>
const T max(const vector<T> vec)
{
    if(vec.size() == 1)
    {
        return vec[0];
    }

    T maxEle = vec[0];

    for(int i = 1; i < vec.size(); ++i)
    {
        if(vec[i] > maxEle)
        {
            maxEle = vec[i];
        }
    }

    return maxEle;
}

template <typename T>
const T max(const T* arr, const int size)
{
    if(size == 1)
    {
        return *arr;
    }

    T maxEle = *arr;

    for(int i = 1; i < size; ++i)
    {
        if(*(arr + i) > maxEle)
        {
            maxEle = *(arr + i);
        }
    }

    return maxEle;
}
