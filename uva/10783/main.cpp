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
  int t = 0, T, a, b, i, s;

  cin>>T;

  while (++t <= T)
  {
    cin>>a>>b;

    for (i = a, s = 0; i <= b; i++)
    {
      if (i%2 == 1) s += i;
    }

    printf("Case %d: %d\n", t, s);
  }

  return 0;
}
