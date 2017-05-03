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
  long n, f, s, a, e, p;

  cin>>n;

  while (n--)
  {
    cin>>f;
    p = 0;

    while (f--)
    {
      cin>>s>>a>>e;
      p += s*e;
    }

    cout<<p<<endl;
  }

  return 0;
}
