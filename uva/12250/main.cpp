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
  int c = 1;
  map<string, string> languages;

  languages["HELLO"]   = "ENGLISH"; languages["HOLA"] = "SPANISH"; languages["HALLO"]        = "GERMAN";
  languages["BONJOUR"] = "FRENCH";  languages["CIAO"] = "ITALIAN"; languages["ZDRAVSTVUJTE"] = "RUSSIAN";

  while (getline(cin, line), line != "#")
  {
    if (languages.count(line)) printf("Case %d: %s\n", c++, languages[line].c_str());
    else                       printf("Case %d: %s\n", c++, "UNKNOWN");
  }

  return 0;
}
