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
  int count, i;
  bool inWord;

  while (getline(cin, line))
  {
    for (count = i = 0, inWord = false; i < line.length(); i++)
    {
      if ((line[i] >= 65 && line[i] <= 90) || (line[i] >= 97 && line[i] <= 122))
      {
        if (!inWord) count++;
        inWord = true;
      }
      else inWord = false;
    }
    
    cout<<count<<endl;
  }

  return 0;
}
