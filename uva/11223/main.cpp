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
  int t = 0, T, i;
  string line, code, translation;
  map<string, char> codes;
  
  codes[".-"]     = 'A'; codes[".---"]   = 'J'; codes["..."]    = 'S'; codes[".----"]  = '1'; 
  codes["---..."] = ':'; codes["-..."]   = 'B'; codes["-.-"]    = 'K'; codes["-"]      = 'T'; 
  codes["--..--"] = ','; codes["-.-.-."] = ';'; codes["-.-."]   = 'C'; codes[".-.."]   = 'L'; 
  codes["...--"]  = '3'; codes["..--.."] = '?'; codes["-...-"]  = '='; codes["-.."]    = 'D'; 
  codes["...-"]   = 'V'; codes["....-"]  = '4'; codes[".----."] = '\''; codes[".-.-."]  = '+';
  codes["-."]     = 'N'; codes[".--"]    = 'W'; codes["....."]  = '5'; codes["-.-.--"] = '!'; 
  codes["..-."]   = 'F'; codes["---"]    = 'O'; codes["-..-"]   = 'X'; codes["-...."]  = '6'; 
  codes["--."]    = 'G'; codes[".--."]   = 'P'; codes["-.--"]   = 'Y'; codes["--..."]  = '7'; 
  codes[".-..-."] = '"'; codes["...."]   = 'H'; codes["--.-"]   = 'Q'; codes["--.."]   = 'Z'; 
  codes["-.--.-"] = ')'; codes[".--.-."] = '@'; codes[".."]     = 'I'; codes[".-."]    = 'R'; 
  codes["----."]  = '9'; codes[".-..."]  = '&'; codes[".-.-.-"] = '.'; codes["..---"]  = '2';  
  codes["..-"]    = 'U'; codes["--"]     = 'M'; codes["."]      = 'E'; codes["-....-"] = '-'; 
  codes["-..-."]  = '/'; codes["-.--."]  = '('; codes["---.."]  = '8'; codes["-----"]  = '0';
  codes["..--.-"] = '_';

  scanf("%d\n", &T);

  while (++t <= T)
  {
    getline(cin, line);

    for (i = 0, code = "", translation = ""; i < line.length(); i++)
    {
      if (line[i] == ' ')
      {
        translation += code.length()? codes[code]: ' ';        
        code         = "";
      }
      else code += line[i];
    }

    translation += codes[code];

    if (t > 1) printf("\n");
    printf("Message #%d\n%s\n", t, translation.c_str());
  }

  return 0;
}
