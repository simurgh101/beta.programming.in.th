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

#define M_PI 3.14159265358979323846 /* pi */
#define LL long long int

void solve()
{
     int n, m, f;
     cin >> n >> m;
     int a[n][m];
     int b[n][m];
     int sum[n][m];
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               cin >> a[i][j];
          }
     }
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               cin >> b[i][j];
          }
     }
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               sum[i][j] = a[i][j] + b[i][j];
          }
     }
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               cout << sum[i][j] << " ";
          }
          cout << endl;
     }
}
int main()
{
     solve();
     return 0;
}