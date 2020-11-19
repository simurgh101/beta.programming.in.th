#include <utility>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <array>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846 /* pi */
#define LL long long int
#define vt vector

string c;
int main()
{
    int i;
    int m = 1;
    long long s3, t3, p11, n11, s11, t11;
    cin >> c;
    if (c.length()%2 == 0) m = -1;
    s3 = p11 = n11 = 0;
    for (i = 0; i < c.length(); i++) {
        s3 += c[i]-'0';
        if (m == 1)
            p11 += c[i]-'0';
        else
            n11 -= c[i]-'0';
        m *= -1;
    }
    cout << s3%3 << " ";
    s11 = p11+n11;
    if (s11 < 0) {
        while (s11 < 0) s11 += 11;
        cout << s11 << endl;
    }
    else {
        while (s11 >= 11) s11 = s11%11;
        cout << s11 << endl;
    }
    return 0;
}