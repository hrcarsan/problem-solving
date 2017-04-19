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
  int n, i, j, x, o, d;
  string rows[3], aux;
  bool x_win, o_win;
  char symbol;
  int lines[8][6] =
  {
    {0,0, 1,0, 2,0},
    {0,1, 1,1, 2,1},
    {0,2, 1,2, 2,2},
    {0,0, 0,1, 0,2},
    {1,0, 1,1, 1,2},
    {2,0, 2,1, 2,2},
    {0,0, 1,1, 2,2},
    {0,2, 1,1, 2,0}
  };

  scanf("%d\n", &n);

  while (n--)
  {
    getline(cin, rows[0]);
    getline(cin, rows[1]);
    getline(cin, rows[2]);
    getline(cin, aux);

    for (i = 0, x_win = o_win = false, d = 0; i < 8; i++)
    {
      for (j = x = o = 0; j < 6; j+=2)
      {
        symbol = rows[lines[i][j]][lines[i][j+1]];

             if (symbol == 'X') { x++; }
        else if (symbol == 'O') { o++; }
      }

           if (i  < 3) d    += x - o;
           if (x == 3) x_win = true;
      else if (o == 3) o_win = true;
    }

         if (x_win && o_win)   printf("no\n");
    else if (x_win && d == 1)  printf("yes\n");
    else if (o_win && d == 0)  printf("yes\n");
    else if (x_win || o_win)   printf("no\n");
    else if (d == 0 || d == 1) printf("yes\n");
    else                       printf("no\n");
  }

  return 0;
}
