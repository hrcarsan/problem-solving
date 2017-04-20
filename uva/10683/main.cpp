#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <bitset>
#include <map>
#include <set>
#include <stack>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <cstring>
#include <utility>
#include <climits>
typedef long long ll;

using namespace std;

int main()
{
  int h, m, s, c;
  long t;

  while (scanf("%2d%2d%2d%2d\n", &h, &m, &s, &c) != EOF)
  {
    t = (h*3600 + m*60 + s)*100 + c;
    printf("%07ld\n", t * 125/108);
  }

  return 0;
}
