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

char s[1010];

int main(){
	int N;
	scanf("%d", &N);
	while(N--){
		scanf("%s", s);
		int l = strlen(s);
		printf((l == 1 && s[0] - '0' == 2) || ((s[l - 1] - '0') % 2 != 0) ? "T\n" : "F\n");	
	}
	
}
