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
  int n, i, b, pb, dir;
  bool ordered;

  cin>>n;

  cout<<"Lumberjacks:"<<endl;

  while (n--)
  {
    for (i = 0, dir = 0, ordered = true; i < 10; i++)
    {
      cin>>b;

           if (!i || pb == b);
      else if (b > pb && dir < 0) ordered = false;
      else if (b < pb && dir > 0) ordered = false;
      else                        dir = b > pb? 1: -1;

      pb  = b;
    }

    cout<<(ordered? "Ordered": "Unordered")<<endl;
  }

  return 0;
}
