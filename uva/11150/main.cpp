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
  int n, b, e, d;

  while(cin>>n)
  {
    b = n;

    do
    {
      e  = n%3;
      d  = (n-e)/3;
      n  = d+e;
      b += d;
    }
    while(n > 2);

    if (n == 2) b++;

    cout<<b<<endl;
  }

  return 0;
}