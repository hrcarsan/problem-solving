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
  int c = 1, n, e, b;

  while (cin>>n, n)
  {
    b = 0;

    while (n--)
    {
      cin>>e;

      b += e? 1: -1;
    }

    printf("Case %d: %d\n", c++, b);
  }

  return 0;
}
