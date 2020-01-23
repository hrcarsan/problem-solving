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
  string web;
  vector<string> webs;
  vector<string>::iterator it;
  int t, v;

  cin>>t;

  for (int c = 1; c <= t; c++)
  {
    for (int l = 0, maxr = 0; l < 10; l++)
    {
      cin>>web>>v;

      if (v > maxr)
      {
        webs.clear();
        maxr = v;
      }

      if (v == maxr) webs.push_back(web);
    }

    printf("Case #%d:\n", c);

    for (it = webs.begin(); it != webs.end(); it++)
    {
      cout<<*it<<endl;
    }
  }

  return 0;
}
