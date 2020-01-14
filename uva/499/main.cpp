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
  int i, maxf;
  map<char, int> freq;
  map<char, int>::iterator it;
  set<char> letters;
  set<char>::iterator itl;

  while (getline(cin, line))
  {
    freq.clear(), letters.clear();

    for (i = maxf = 0; i < line.length(); i++)
    {
      if ((line[i] >= 65 && line[i] <= 90) || (line[i] >= 97 && line[i] <= 122))
      {
        maxf = max(maxf, ++freq[line[i]]);
      }
    }

    for (it = freq.begin(); it != freq.end(); it++)
    {
      if (it->second == maxf) letters.insert(it->first);
    }

    for (itl = letters.begin(); itl != letters.end(); itl++) cout<<*itl;

    cout<<" "<<maxf<<endl;
  }

  return 0;
}
