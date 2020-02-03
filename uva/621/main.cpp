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
#include <regex>
typedef long long ll;

using namespace std;

int main()
{
  int n;
  string line;

  cin>>n;
  cin.ignore();

  while (n--)
  {
    getline(cin, line);

         if (line == "1" || line == "4" || line == "78") cout<<"+"<<endl;
    else if (regex_match(line, regex(".+35$")))          cout<<"-"<<endl;
    else if (regex_match(line, regex("^9.+4$")))         cout<<"*"<<endl;
    else                                                 cout<<"?"<<endl;
  }

  return 0;
}
