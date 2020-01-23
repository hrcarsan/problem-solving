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
  int t, n, x, w;
  vector<int> positions;
  vector<int>::iterator it;

  cin>>t;

  while (t--)
  {
    cin>>n;
    positions.clear();

    while (n--)
    {
      cin>>x;
      positions.push_back(x);
    }

    sort(positions.begin(), positions.end());

    for (it = positions.begin()+1, w = 0; it != positions.end(); it++)
    {
      w += *it - *(it-1);
    }

    cout<<w*2<<endl;
  }

  return 0;
}
