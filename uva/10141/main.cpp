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
  int n, p, r, met, maxmet, t = 0;
  string requirement, proposal, selected;
  double d, minprice;
  bool select;

  while (scanf("%d %d\n", &n, &p), n || p)
  {
    while (n--) getline(cin, requirement);

    minprice = INT_MAX;
    maxmet   = 0;
    selected = "";

    while (p--)
    {
      getline(cin, proposal);
      scanf("%lf %d\n", &d, &r);

      met    = r;
      select = met > maxmet || (met == maxmet && d < minprice);

      while (r--) getline(cin, requirement);

      if (select)
      {
        maxmet   = met;
        selected = proposal;
        minprice = d;
      }
    }

    if (t) printf("\n");
    printf("RFP #%d\n%s\n", ++t, selected.c_str());
  }

  return 0;
}