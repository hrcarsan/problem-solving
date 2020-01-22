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
  int t, n, h, ch, cl, w;

  cin>>t;

  for (int c = 1; c <= t; c++)
  {
    cin>>n;
    ch = cl = 0, w = -1;

    while (n--)
    {
      cin>>h;

           if (w < 0);
      else if (h > w) ch++;
      else if (h < w) cl++;

      w = h;
    }

    printf("Case %d: %d %d\n", c, ch, cl);
  }

  return 0;
}
