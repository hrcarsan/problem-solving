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
  int t, donation, amount = 0;
  string line, action;

  cin>>t;
  cin.ignore();

  while (t--)
  {
    getline(cin, line);

    istringstream is(line);

    is>>action;

    if (action == "donate")
    {
      is>>donation;
      amount += donation;
    }
    else if (action == "report")
    {
      cout<<amount<<endl;
    }
  }

  return 0;
}
