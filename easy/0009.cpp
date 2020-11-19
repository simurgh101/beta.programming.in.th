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

int a[3];
char str[4];
int main() {
  for(int i = 0; i < 3; i++) scanf("%d", &a[i]);
  scanf("%s", str);
  sort(a, a+3);
  for(int i = 0; i < 3; i++) {
    printf("%d ", a[str[i] - 'A']);
  }
}