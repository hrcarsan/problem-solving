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
  int t, n;

  cin>>t;

  while (t--)
  {
    cin>>n;
    cout<<abs((int)(n*31.5 + 3696.2)%10)<<endl;
  }

  return 0;
}