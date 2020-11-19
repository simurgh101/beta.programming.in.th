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

int main() {
  string s;
  cin >> s;
  int count = 0;
  for (char c:s) {
    if (isupper(c)) count++;
  }
  if (count == 0) cout << "All Small Letter";
  else if (count == s.length()) cout << "All Capital Letter"; 
  else cout << "Mix";
  return 0;
}
