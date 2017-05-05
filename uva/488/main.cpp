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
  int t, a, A, f, i;
  string line;

  cin>>t;

  while (t--)
  {
    cin>>A>>f;

    while (f--)
    {
      i = a = 1;

      do
      {
        line.assign(a, a+'0');
        cout<<line<<endl;        
        
        if (a >= A) i = -1;
        a += i;
      }
      while(a);

      if (f) cout<<endl;
    }

    if (t) cout<<endl;
  }

  return 0;
}
