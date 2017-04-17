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
  int i, j;
  string name, code;
  map<char, char> guide;

  guide['B'] = guide['P'] = guide['F'] = guide['V'] = '1';
  guide['C'] = guide['S'] = guide['K'] = guide['G'] = guide['J'] = guide['Q'] = guide['X'] = guide['Z'] = '2';
  guide['D'] = guide['T'] = '3';
  guide['L'] = '4';
  guide['M'] = guide['N'] = '5';
  guide['R'] = '6';

  printf("%*s%s%*s%s\n", 9, "", "NAME", 21, "", "SOUNDEX CODE");

  while (cin>>name)
  {
    code = "0000";
    code[0] = name[0];

    for (i = 1, j = 1; i < name.length() && j <= 3; i++)
    {
      if (guide[name[i]] && guide[name[i-1]] != guide[name[i]])
      {
        code[j++] = guide[name[i]];
      }
    }

    printf("%*s%s%*s%s\n", 9, "", name.c_str(), 25 - name.length(), "", code.c_str());
  }

  printf("%*s%s\n", 19, "", "END OF OUTPUT");

  return 0;
}
