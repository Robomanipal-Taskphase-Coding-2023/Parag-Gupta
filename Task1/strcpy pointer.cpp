#include <iostream>
using namespace std;
void strcopy(char *str1, char *str2) 
{
  while(*str2 != '\0')
    {
      *str1= *str2;
      str1++;
      str2++;
    }
  *str1 = '\0';  
}
int main()
{
  char s1[100], s2[100];
  cout << "Enter the string: ";
  cin >> s2;
  strcopy(s1, s2);

  cout << "The copied string is: " << s1 << endl;
  return 0;
}
