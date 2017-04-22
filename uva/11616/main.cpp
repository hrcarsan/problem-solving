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

map<int, string> romans;

void init_romans()
{
  romans[1]    = "I";    romans[10]   = "X";    romans[100]  = "C";   romans[1000] = "M"; 
  romans[2]    = "II";   romans[20]   = "XX";   romans[200]  = "CC";  romans[2000] = "MM"; 
  romans[3]    = "III";  romans[30]   = "XXX";  romans[300]  = "CCC"; romans[3000] = "MMM"; 
  romans[4]    = "IV";   romans[40]   = "XL";   romans[400]  = "CD"; 
  romans[5]    = "V";    romans[50]   = "L";    romans[500]  = "D";   
  romans[6]    = "VI";   romans[60]   = "LX";   romans[600]  = "DC";   
  romans[7]    = "VII";  romans[70]   = "LXX";  romans[700]  = "DCC";
  romans[8]    = "VIII"; romans[80]   = "LXXX"; romans[800]  = "DCCC";  
  romans[9]    = "IX";   romans[90]   = "XC";   romans[900]  = "CM";
}

string to_roman(int i)
{
  string roman = "";
  int number, d = 1;

  do
  {
    d     *= 10;
    number = i%d;
    i     -= number;
    roman  = romans[number] + roman;    
  }
  while (i > 0);

  return roman;
}


int main()
{
  ostringstream os;
  map<string, string> conversion;
  string roman, arabic, n;

  init_romans();

  for (int i = 0; i < 4000; i++)
  {    
    arabic             = (os.str(""), os<<i, os.str());
    roman              = to_roman(i);
    conversion[arabic] = roman;
    conversion[roman]  = arabic;
  } 

  while (getline(cin, n)) cout<<conversion[n]<<endl;

  return 0;
}
