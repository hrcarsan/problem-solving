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
  int t, w, y1, y2, gap;
  bool closed;

  cin>>t;

  while (t--)
  {
    cin>>w;
    closed = true;
    gap    = 0;

    while (w--)
    {
      cin>>y1>>y2;

      if (gap && gap != (y1-y2)) closed = false;

      gap = y1 - y2;
    }

    cout<<(closed? "yes": "no")<<endl<<(t? "\n": "");
  }

  return 0;
}
