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
  int n, m, i, j, t = 0, cons[21];
  bool state[21];
  ll c, u, maxu;

  while (cin>>n>>m>>c, n || m || c)
  {
    u = 0, maxu = 0;

    for (i = 1; i <= n; i++) { cin>>cons[i]; state[i] = false; }

    for (j = 1; j <= m; j++)
    {
      cin>>i;
      state[i] = !state[i];

      if (state[i])
      {
        u += cons[i];
        if (u > maxu) maxu = u;
      }
      else u -= cons[i];
    }

    //if (t) printf("\n");
    printf("Sequence %d\n", ++t);

    if (maxu <= c)
    {
      printf("Fuse was not blown.\nMaximal power consumption was %lld amperes.\n\n", maxu);
    }
    else printf("Fuse was blown.\n\n");
  }

  return 0;
}