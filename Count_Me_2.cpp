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
    int Q;
    cin >> Q;

    while (Q--)
    {
        int N;
        cin >> N;

        vector<long long int> frqArr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> frqArr[i];
        }

        map<long long int, int> frq;
        for (long long int num : frqArr)
        {
            frq[num]++;
        }

        long long int maxNum = INT_MIN;
        int count = 0;

        for (auto x : frq)
        {
            if (x.second > count || (x.second == count && x.first > maxNum))
            {
                count = x.second;
                maxNum = x.first;
            }
        }

        cout << maxNum << " " << count << endl;
    }

    return 0;
}