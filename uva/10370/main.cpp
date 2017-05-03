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
  int c, n, g, i;
  double average, above;
  vector<int> grades;

  cin>>c;

  while (c--)
  {
    cin>>n;
    grades.clear();
    average = 0;

    while (n--)
    {
      cin>>g;
      average += g;
      grades.push_back(g);
    }

    average /= grades.size();

    for (i = above = 0; i < grades.size(); ++i)
    {
      if (grades[i] > average) above++;
    }

    above = round(above*100000/double(grades.size()))/1000;

    printf("%.3f%s\n", above, "%");
  }

  return 0;
}
