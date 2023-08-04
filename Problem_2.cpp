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

const int N = 1e5 + 7;
int nums[N];

int findNumber(int array[], int n, int k)
{
    int L = 0;
    int R = n - 1;

    while (L <= R)
    {
        int mid = (L + R) / 2;

        if (array[mid] == k)
        {
            return mid; // Found the element, return its index
        }
        else if (array[mid] < k)
        {
            L = mid + 1; // Search the right half
        }
        else
        {
            R = mid - 1; // Search the left half
        }
    }

    return -1; // Element not found
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int k;
    cin >> k;

    int ans = findNumber(nums, n, k);

    if (ans != -1)
    {

        cout << ans;
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}

/*

8
-4 0 2 6 9 10 29 54
29

input
10
0 1 2 3 4 5 6 7 8 9
-3


6
output
Not Found
*/