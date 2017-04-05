//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=208
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
  string new_line;
  bool first = true;
  bool quote = false;

  while (getline(cin, line))
  {
    new_line = "";

    for (int i = 0; i < line.length(); i++)
    {
      if (line[i] == '"')
      {
        new_line +=  quote? "''": "``";
        quote     = !quote;
      }
      else new_line += line[i];
    }

    cout<<new_line<<endl;
  }

  return 0;
}