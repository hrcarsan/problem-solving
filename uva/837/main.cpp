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
#define INF 2000000000 // 2 billion

using namespace std;

class Film
{
  public: double x1, x2, c;

  public: Film(double x1, double x2, double c)
  {
    this->x1 = min(x1, x2), this->x2 = max(x1, x2), this->c  = c;
  }
};

int main()
{
  int t, nl;
  double x1, y1, x2, y2, c;
  set<double> ep;
  set<double>::iterator epi, epj;
  vector<Film> films; 

  cin>>t;

  while (t--)
  {
    cin>>nl;

    films.clear(), ep.clear();
    ep.insert(-INF);

    while (nl--)
    {
      scanf("%lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &c);
      films.push_back(Film(x1, x2, c));
      ep.insert(x1), ep.insert(x2);
    }

    ep.insert(INF);
    printf("%d\n", ep.size() - 1);

    for (epi = epj = ep.begin(); ++epj != ep.end(); epi++)
    {
      x1 = *epi, x2 = *epj, c  = 1;

      for (int i = 0; i < films.size(); ++i)
      {
        if (x1 >= films[i].x1 &&  x2 <= films[i].x2)
        {
          c *=  films[i].c;
        }
      }

           if (x1 == -INF) printf("-inf %.3lf %.3lf\n", x2, c);
      else if (x2 == INF)  printf("%.3lf +inf %.3lf\n", x1, c);
      else                 printf("%.3lf %.3lf %.3lf\n", x1, x2, c);
    }

    if (t) printf("\n");
  }

  return 0;
}
