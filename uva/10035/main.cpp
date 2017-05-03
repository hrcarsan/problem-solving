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
  string a, b;
  int len, i;
  long count, c;

  while (cin>>a>>b, a != "0" || b != "0")
  {
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    a.insert(a.length(), 10 - a.length(), '0');
    b.insert(b.length(), 10 - b.length(), '0');
    
    len = max(a.length(), b.length());

    for (i = 0, count = 0, c = 0; i < len; ++i)
    {
      c = (a[i]-'0')+(b[i]-'0')+c > 9? 1: 0;
      count += c;
    }

    if (count) printf("%ld carry operation%s.\n", count, (count>1?"s":""));
    else       printf("No carry operation.\n");
  }

  return 0;
}
