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
  char comb[6][3] =
  {
    {'B', 'C', 'G'},
    {'B', 'G', 'C'},
    {'C', 'B', 'G'},
    {'C', 'G', 'B'},
    {'G', 'B', 'C'},
    {'G', 'C', 'B'},
  };
  map<int, map<char, long> > bins;
  long i, min_mov, mov;
  char *min_comb;

  while (scanf("%ld%ld%ld%ld%ld%ld%ld%ld%ld", &bins[0]['B'], &bins[0]['G'], &bins[0]['C'], 
                                              &bins[1]['B'], &bins[1]['G'], &bins[1]['C'],
                                              &bins[2]['B'], &bins[2]['G'], &bins[2]['C']) != EOF)
  {
    for (i = 0, min_mov = LONG_MAX; i < 6; i++)
    {
      mov  = bins[1][comb[i][0]] + bins[2][comb[i][0]] +
             bins[0][comb[i][1]] + bins[2][comb[i][1]] +
             bins[0][comb[i][2]] + bins[1][comb[i][2]];

      if (mov < min_mov)
      {
        min_comb = comb[i];
        min_mov  = mov;
      }
    }

    cout<<min_comb[0]<<min_comb[1]<<min_comb[2]<<" "<<min_mov<<endl;
  }

  return 0;
}
