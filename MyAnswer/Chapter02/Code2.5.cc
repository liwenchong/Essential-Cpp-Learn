#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
void printVector(vector<T> vec);
template <typename T>
void printArray(T* arr, const int size);

const int max(const int para1, const int para2);
const double max(const double para1, const double para2);
const string max(const string para1, const string para2);

const int max(const vector<int> vecInt);
const double max(const vector<double> vecDouble);
const string max(const vector<string> vecStr);

const int max(const int* intArray, const int size);
const double max(const double* doubleArray, const int size);
const string max(const string* stringArray, const int size);

int main()
{
    cout << "1 and 3 max : " << max(1, 3) << endl;
    cout << "1.1 and 3.3 max : " << max(1.1, 3.3) << endl;
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

    cout << "} : ";
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

    cout << "} : ";
}

const int max(const int para1, const int para2)
{
    if(para1 >= para2)
    {
        return para1;
    }
    
    return para2;
}

const double max(const double para1, const double para2)
{
    if(para1 >= para2)
    {
        return para1;
    }
    
    return para2;
}

const string max(const string para1, const string para2)
{
    if(para1 >= para2)
    {
        return para1;
    }
    
    return para2;
}

const int max(const vector<int> vecInt)
{
    if(vecInt.size() == 0)
    {
        return -1;
    }

    if(vecInt.size() == 1)
    {
        return vecInt[0];
    }

    int maxInt = vecInt[0];

    for(int i = 1; i < vecInt.size(); ++i)
    {
        if(vecInt[i] > maxInt)
        {
            maxInt = vecInt[i];
        }
    }

    return maxInt;
}

const double max(const vector<double> vecDouble)
{
    if(vecDouble.size() == 0)
    {
        return -1;
    }

    if(vecDouble.size() == 1)
    {
        return vecDouble[0];
    }

    double maxDouble = vecDouble[0];

    for(int i = 1; i < vecDouble.size(); ++i)
    {
        if(vecDouble[i] > maxDouble)
        {
            maxDouble = vecDouble[i];
        }
    }

    return maxDouble;
}

const string max(const vector<string> vecStr)
{
    if(vecStr.size() == 0)
    {
        return "";
    }

    if(vecStr.size() == 1)
    {
        return vecStr[0];
    }

    string maxStr = vecStr[0];

    for(int i = 1; i < vecStr.size(); ++i)
    {
        if(vecStr[i] > maxStr)
        {
            maxStr = vecStr[i];
        }
    }

    return maxStr;
}


const int max(const int* intArray, const int size)
{
    if(size <= 0)
    {
        return -1;
    }

    if(size == 1)
    {
        return *intArray;
    }

    int maxNum = *intArray;

    for(int i = 1; i < size; ++i)
    {
        if(*(intArray + i) > maxNum)
        {
            maxNum = *(intArray + i);
        }
    }

    return maxNum;
}

const double max(const double* doubleArray, const int size)
{
    if(size <= 0)
    {
        return -1;
    }

    if(size == 1)
    {
        return *doubleArray;
    }

    double maxNum = *doubleArray;

    for(int i = 1; i < size; ++i)
    {
        if(*(doubleArray + i) > maxNum)
        {
            maxNum = *(doubleArray + i);
        }
    }

    return maxNum;
}

const string max(const string* stringArray, const int size)
{
    if(size <= 0)
    {
        return "";
    }

    if(size == 1)
    {
        return *stringArray;
    }

    string maxStr = *stringArray;

    for(int i = 1; i < size; ++i)
    {
        if(*(stringArray + i) > maxStr)
        {
            maxStr = *(stringArray + i);
        }
    }

    return maxStr;
}