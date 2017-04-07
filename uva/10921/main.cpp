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
  string number;
  map<char, char> keys;

  keys['1'] = '1',  keys['0'] = '0', keys['-'] = '-';
  keys['A'] = keys['B'] = keys['C'] = '2';
  keys['D'] = keys['E'] = keys['F'] = '3';
  keys['G'] = keys['H'] = keys['I'] = '4';
  keys['J'] = keys['K'] = keys['L'] = '5';
  keys['M'] = keys['N'] = keys['O'] = '6';
  keys['P'] = keys['Q'] = keys['R'] = keys['S'] = '7';
  keys['T'] = keys['U'] = keys['V'] = '8';
  keys['W'] = keys['X'] = keys['Y'] = keys['Z'] = '9';

  while(getline(cin, line))
  {
    number = "";

    for (int i = 0; i < line.length(); i++)
    {
      number += keys[line[i]];
    }

    cout<<number<<endl;
  }

  return 0;
}