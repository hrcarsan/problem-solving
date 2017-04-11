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
  string s, t;
  int i, j;

  while (cin>>s>>t)
  {
    for (i = j = 0; j < t.length(); j++)
    {
      if (s[i] == t[j])
      {
        i++;
      }
    }

    if (i == s.length()) cout<<"Yes"<<endl;
    else                 cout<<"No"<<endl;

  }

  return 0;
}