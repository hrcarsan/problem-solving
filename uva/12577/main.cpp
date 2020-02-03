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
  string line;
  int c = 0;

  while (getline(cin, line), line != "*")
  {
         if (line == "Hajj")  printf("Case %d: Hajj-e-Akbar\n", ++c);
    else if (line == "Umrah") printf("Case %d: Hajj-e-Asghar\n", ++c);
  }

  return 0;
}
