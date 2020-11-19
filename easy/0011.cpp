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


int main(){
     int m;
     int arr[42]={};
     for (int i=0;i<10;i++) {
          cin >> m;
          int index = m%42;
          arr[index]=1;
     }
     int count=0;
     for (auto i:arr) {
          if (i==1) count++;
     }    
     cout << count;
}
