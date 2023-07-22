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

using namespace std;

class Students
{
public:
    string name;
    int roll;
    int marks;

    Students(string name, int roll, int marks) : name(name), roll(roll), marks(marks) {}

    // Custom comparator for the priority queue
    struct Compare
    {
        bool operator()(const Students &s1, const Students &s2)
        {
            if (s1.marks == s2.marks)
                return s1.roll > s2.roll;
            return s1.marks < s2.marks;
        }
    };
};

int main()
{
    int N;
    cin >> N;
    priority_queue<Students, vector<Students>, Students::Compare> maxPQ;

    for (int i = 0; i < N; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Students x(name, roll, marks);
        maxPQ.push(x);
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
            maxPQ.push(x);

            Students maxMark = maxPQ.top();
            cout << maxMark.name << " " << maxMark.roll << " " << maxMark.marks << endl;
        }
        else if (cmd == 1)
        {
            if (maxPQ.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                Students maxMark = maxPQ.top();
                cout << maxMark.name << " " << maxMark.roll << " " << maxMark.marks << endl;
            }
        }
        else if (cmd == 2)
        {
            if (maxPQ.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                maxPQ.pop();
                if (!maxPQ.empty())
                {
                    Students maxMark = maxPQ.top();
                    cout << maxMark.name << " " << maxMark.roll << " " << maxMark.marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
        }
    }
    return 0;
}
