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
  int N, R, B, s, D, i, address, index;
  string name;
  map<string, vector<int> > C;
  int L[11], U[11];

  cin>>N>>R;

  while (N--)
  {
    cin>>name>>B>>s>>D;

    for (i = 1; i <= D; i++) cin>>L[i]>>U[i];

    C[name].assign(D + 1, 0);
    C[name][D] = s;
    C[name][0] = B;

    for (i = D - 1; i > 0; i--) C[name][i]  = C[name][i+1]*(U[i+1]-L[i+1]+1);
    for (i = 1; i <= D; i++)    C[name][0] -= C[name][i]*L[i];
  }

  while (R--)
  {
    cin>>name;
    cout<<name<<"[";
    address = C[name][0];

    for (i = 1; i <= C[name].size()-1; i++)
    {
      cin>>index;
      cout<<(i>1? ", ": "")<<index;
      address += C[name][i]*index;
    }

    cout<<"] = "<<address<<endl;
  }

  return 0;
}