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

  while (getline(cin, line))
  {
    for (int i = 0; i < line.length(); i++)
    {
      printf("%c", line[i] - 7);
    }

    cout<<endl;
  }  

  return 0;
}
