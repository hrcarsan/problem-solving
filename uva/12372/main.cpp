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
  int t, l, w, h;

  cin>>t;

  for (int c = 1; c <= t; c++)
  {
    cin>>l>>w>>h;

    if (l > 20 || w > 20 || h > 20) printf("Case %d: bad\n", c);
    else                            printf("Case %d: good\n", c);
  }

  return 0;
}
