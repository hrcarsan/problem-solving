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
  long n;

  while (cin>>n, n)
  {
    printf("f91(%ld) = %ld\n", n, n >= 101? n-10: 91);
  }

  return 0;
}
