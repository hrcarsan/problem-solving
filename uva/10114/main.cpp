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
  int duration, deprecations, month;
  float down_payment, payment, loan, deprecation, current_deprecation, worth, owes;
  map<int, float> month_deprecation;
  map<int, float>::iterator it;

  while (cin>>duration>>down_payment>>loan>>deprecations, duration >= 0)
  {
    month_deprecation.clear();
    owes    = loan + down_payment;
    worth   = owes;
    payment = loan/duration;

    while (deprecations--)
    {
      cin>>month>>deprecation;
      month_deprecation[month] = deprecation;
    }

    for (month = 0; month <= duration; month++)
    {
      if (month_deprecation.count(month)) current_deprecation = month_deprecation[month];

      owes  -= month? payment: down_payment;
      worth -= worth*current_deprecation;

      if (owes < worth)
      {
        if (month == 1) printf("1 month\n");
        else            printf("%d months\n", month);

        break;
      }
    }
  }

  return 0;
}
