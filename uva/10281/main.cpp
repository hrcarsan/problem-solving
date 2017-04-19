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
  int hours, minutes, seconds;
  double speed = 0, last_speed = 0, last_time = 0, time = 0, distance = 0;
  string line;

  while (speed = -1, getline(cin, line))
  {
    sscanf(line.c_str(), "%d:%d:%d %lf", &hours, &minutes, &seconds, &speed);

    time      = (double)(hours*3600 + minutes*60 + seconds)/3600;
    distance += (time - last_time)*last_speed;
    last_time = time;

    if (speed != -1) last_speed = speed;
    else             printf("%02d:%02d:%02d %.2lf km\n", hours, minutes, seconds, distance);
  }

  return 0;
}
