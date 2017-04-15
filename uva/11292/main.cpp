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
  int n, m, head, knight, cost;
  vector<int>::iterator ith, itk;

  while (cin>>n>>m, n || m)
  {
    vector<int> heads, knights;
    cost = 0;

    while (n--)
    {
      cin>>head;
      heads.push_back(head);
    }

    while (m--)
    {
      cin>>knight;
      knights.push_back(knight);
    }

    sort(heads.begin(), heads.end());
    sort(knights.begin(), knights.end());

    for (ith = heads.begin(), itk = knights.begin(); ith != heads.end();)
    {
      while (itk != knights.end() && *itk < *ith)
      {
        itk++;
      }

      if (itk != knights.end())
      {
        cost += *itk;
        ith++, itk++;
      }
      else break;
    }

    if (ith == heads.end()) cout<<cost<<endl;
    else                    cout<<"Loowater is doomed!"<<endl;
  }

  return 0;
}