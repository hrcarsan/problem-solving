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

ostringstream os;

string f(string n)
{
  if (n.length() <= 1) return n;

  int i = -1, sum = 0;

  while (++i < n.length()) sum += n[i]-'0';

  return f((os.str(""), os<<sum,os.str()));
}


int main()
{
  string line;

  while (getline(cin, line), line != "0")
  {
    cout<<f(line)<<endl;
  }

  return 0;
}
