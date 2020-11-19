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
#define abs(a) (((a) > 0) ? (a) : (-(a)))
#define M_PI 3.14159265358979323846 /* pi */
#define LL long long int
#define vt vector

void solve()
{
  char s[101];

  cin >> s;
  int l = strlen(s);
  sort(s, s + l);
  int count = 0;
  for (int i = 0; i < l; i++)
  {
    if (s[i] != s[i + 1])
    {
      count++;
    }
  }
  if (count % 2 == 0)
  {
    cout << "CHAT WITH HER!\n";
  }
  else
  {
    cout << "IGNORE HIM!\n";
  }
}

int main()
{
  solve();
}
