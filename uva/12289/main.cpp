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


bool is_word(string text, string word)
{
  if (text.length() != word.length()) return false;

  int mistakes = 0;

  for (int i = 0; i < word.length(); i++)
  {
    if (text[i] != word[i]) mistakes++;
  }

  return mistakes <= 1;
}


int main()
{
  int t;
  string line;

  cin>>t;
  cin.ignore();

  while (t--)
  {
    getline(cin, line);

         if (is_word(line, "one"))   cout<<"1"<<endl;
    else if (is_word(line, "two"))   cout<<"2"<<endl;
    else if (is_word(line, "three")) cout<<"3"<<endl;
  }

  return 0;
}
