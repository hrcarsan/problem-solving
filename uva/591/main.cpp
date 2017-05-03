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
  int t = 0, n, N, h, th, b, i, k;
  vector<int> heights;

  while (cin>>N, N)
  {
    heights.clear();
    n = th = 0;

    while (n++ < N)
    {
      cin>>h;
      th += h;
      heights.push_back(h);
    }

    b = th/N;

    for (i = k = 0; i < heights.size(); ++i)
    {
      k += heights[i] > b? heights[i] - b: 0;
    }

    printf("Set #%d\nThe minimum number of moves is %d.\n\n", ++t, k);
  }

  return 0;
}
