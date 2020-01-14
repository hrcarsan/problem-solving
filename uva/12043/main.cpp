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

map<int, map<int, bool>> divisors;


map<int, bool> get_divisors(int n)
{
  if (divisors[n].size()) return divisors[n];

  float r = sqrt(n);

  for (int i = 1; i <= r; i++)
  {
    if (n % i == 0) divisors[n][i] = divisors[n][n/i] = true;
  }

  divisors[n][n] = true;

  return divisors[n];
}


int d(int n)
{
  return get_divisors(n).size();
}


int o(int n)
{
  map<int, bool> divisors = get_divisors(n);
  map<int, bool>::iterator it;
  int sum = 0;

  for (it = divisors.begin(); it != divisors.end(); it++)
  {
    sum += it->first;
  }

  return sum;
}


int g(int a, int b, int k)
{
  int sum = 0;

  for (int i = a; i <= b; i++)
  {
    if (i % k == 0) sum += d(i);
  }

  return sum;
}


long h(int a, int b, int k)
{
  long sum = 0;

  for (int i = a; i <= b; i++)
  {
    if (i % k == 0) sum += o(i);
  }

  return sum;
}


int main()
{
  int t, a, b, k;

  cin>>t;

  while (t--)
  {
    cin>>a>>b>>k;
    printf("%d %ld\n", g(a, b, k), h(a, b, k));
  }

  return 0;
}
