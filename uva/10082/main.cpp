//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1023
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
  map<char, char> keys;

  keys['1'] = '`', keys['2'] = '1', keys['3'] = '2', keys['4'] = '3', keys['5'] = '4', keys['6'] = '5', keys['7'] = '6', keys['8'] = '7', keys['9'] = '8', keys['0'] = '9', keys['-'] = '0', keys['='] = '-';
  keys['W'] = 'Q', keys['E'] = 'W', keys['R'] = 'E', keys['T'] = 'R', keys['Y'] = 'T', keys['U'] = 'Y', keys['I'] = 'U', keys['O'] = 'I', keys['P'] = 'O', keys['['] = 'P', keys[']'] = '[';
  keys['S'] = 'A', keys['D'] = 'S', keys['F'] = 'D', keys['G'] = 'F', keys['H'] = 'G', keys['J'] = 'H', keys['K'] = 'J', keys['L'] = 'K', keys[';'] = 'L', keys['\''] = ';';
  keys['X'] = 'Z', keys['C'] = 'X', keys['V'] = 'C', keys['B'] = 'V', keys['N'] = 'B', keys['M'] = 'N', keys[','] = 'M', keys['.'] = ',', keys['/'] = '.';
  keys[' '] = ' ';

  while (getline(cin, line))
  {
    for (int i = 0; i < line.length(); i++)
    {
      cout<<keys[line[i]];
    }

    cout<<endl;
  }

  return 0;
}