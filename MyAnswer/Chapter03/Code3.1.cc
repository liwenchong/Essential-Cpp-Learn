/*
练习3.1 写一个读写文本文件的程序，将文件中的每个单字存入map。map的key便是刚才所说的单字，map的value则是该单字在文本文件中的出现次数。
再定义一份由“排除字眼”组成的set，其中包含的诸如a、an、or、the、and和but之类的单字。将某单字放在map之前，先确定单字并不在“排除字集”中。
一旦文本文件读取完毕，请显示一份单字清单，并显示各单字的出现次数。
你甚至可以再加以扩展，在显示单字之前，允许用户查询某个单字是否出现在文本文件中。
*/

#include <iostream>
#include <map>
#include <set>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    set<string> excludedWords{"a", "an", "or", "the", "and", "but"};
    ifstream in("column.txt");

    char buffer[256];
    string words;
    if (! in.is_open())
    { cout << "Error opening file"; exit (1); }
    while (!in.eof() )
    {
        in >> words;
        cout << words << endl;
    }

    return 0;
}