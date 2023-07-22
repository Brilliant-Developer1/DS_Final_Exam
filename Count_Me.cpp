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
    cin.ignore();

    for (int i = 0; i < Q; i++)
    {
        string S;
        getline(cin, S);

        map<string, int> frqArray;
        int count = 0;
        string maxWord = "";

        int st = 0;
        int last = 0;
        while (st < S.length())
        {

            while (st < S.length() && S[st] == ' ')
            {
                st++;
            }
            last = st;

            while (last < S.length() && S[last] != ' ')
            {
                last++;
            }

            if (st < last)
            {
                int len = last - st;
                string oneWord;

                for (int i = 0; i < len; i++)
                {
                    oneWord = oneWord + S[st + i];
                }
                frqArray[oneWord]++;

                if (frqArray[oneWord] > count)
                {
                    count = frqArray[oneWord];
                    maxWord = oneWord;
                }
            }
            st = last;
        }

        cout << maxWord << " " << count << endl;
    }

    return 0;
}