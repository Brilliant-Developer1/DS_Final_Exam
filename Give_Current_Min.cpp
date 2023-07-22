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

int main()
{
    int N;
    cin >> N;
    priority_queue<long long int, vector<long long int>, greater<long long int>> minPQ;

    for (int i = 0; i < N; i++)
    {
        long long int x;
        cin >> x;
        minPQ.push(x);
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            long long int x;
            cin >> x;
            minPQ.push(x);

            cout << minPQ.top() << endl;
        }
        else if (cmd == 1)
        {
            if (minPQ.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << minPQ.top() << endl;
            }
        }
        else if (cmd == 2)
        {
            if (minPQ.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                minPQ.pop();
                if (minPQ.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << minPQ.top() << endl;
                }
            }
        }
    }

    return 0;
}