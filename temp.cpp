// #include<bits/stdc++.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <strstream>
#include <tuple>
#include <typeinfo>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>

// #include<bits/stdc++.h>
using namespace std;

class Students
{
public:
    string name;
    int roll;
    int marks;

    Students(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

Students findMaxMark(vector<Students> &students)
{

    Students maxMark("", 0, 0);
    for (auto x : students)
    {
        if (x.marks > maxMark.marks || (x.marks == maxMark.marks && x.roll < maxMark.roll))
        {
            maxMark = x;
        }
    }
    return maxMark;
}
int main()
{

    int N;
    cin >> N;
    vector<Students> students;
    for (int i = 0; i < N; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Students x(name, roll, marks);
        students.push_back(x);
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Students x(name, roll, marks);
            students.push_back(x);

            Students maxMark = findMaxMark(students);
            cout << maxMark.name << " " << maxMark.roll << " " << maxMark.marks << endl;
        }
        else if (cmd == 1)
        {

            Students maxMark = findMaxMark(students);
            cout << maxMark.name << " " << maxMark.roll << " " << maxMark.marks << endl;
        }
        else
        {
            // Find the student of highest mark
            Students maxMark = findMaxMark(students);

            // Delete the student of highest mark
            for (auto x = students.begin(); x != students.end(); x++)
            {
                if (x->marks == maxMark.marks)
                {
                    students.erase(x);
                    break;
                }
            }

            // After Delete print the student of highest mark

            if (!students.empty())
            {
                Students maxMark = findMaxMark(students);
                cout << maxMark.name << " " << maxMark.roll << " " << maxMark.marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}