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

class Rectangle
{
  public: int x1, y1, x2, y2;

  public: Rectangle(int x1, int y1, int x2, int y2)
  {
    this->x1 = min(x1, x2), this->y1 = min(y1, y2);
    this->x2 = max(x1, x2), this->y2 = max(y1, y2);
  }
};

struct RectangleCompare
{
  bool operator()(const Rectangle& a, const Rectangle& b)
  {
    return a.x1 <= b.x1;
  }
};


int main()
{
  int w, h, n, x1, y1, x2, y2, xi, yi, spots, fill;
  set<Rectangle, RectangleCompare> rectangles;
  set<Rectangle, RectangleCompare>::iterator it;

  while (cin>>w>>h>>n, w || h || n)
  {
    rectangles.clear();

    while (n--)
    {
      cin>>x1>>y1>>x2>>y2;
      rectangles.insert(Rectangle(x1, y1, x2, y2));
    }

    for (yi = 1, spots = 0; yi <= h; yi++)
    {
      for (it = rectangles.begin(), xi = 1, fill = 0; it != rectangles.end(); it++)
      {
        if (it->y1 > yi || it->y2 < yi) continue;
        if (it->x2 < xi)                continue;

        fill += it->x2 - max(it->x1, xi) + 1;
        xi    = it->x2 + 1;
      }

      spots += w - fill;
    }

         if (!spots)     printf("There is no empty spots.\n");
    else if (spots == 1) printf("There is one empty spot.\n");
    else                 printf("There are %d empty spots.\n", spots);
  }

  return 0;
}
