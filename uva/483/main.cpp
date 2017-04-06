//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=424
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
  string word;
  string rword;
  bool first;

  while (getline(cin, line))
  {
    istringstream is(line);
    first = true;

    while (is>>word)
    {
      rword = "";

      for (int i = word.length() - 1; i >= 0; i--)
      {
        rword += word[i];
      }

      cout<<(first? "": " ")<<rword;
      first = false;
    }

    cout<<endl;
  }

  return 0;
}