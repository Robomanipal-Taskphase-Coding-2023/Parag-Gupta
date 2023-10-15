# include <iostream>
using namespace std;
int main() 
{
int i,j,l,let[50];
string word;
char letter;
cout << "Enter a word: ";
cin >> word;
l= word.length();
for (i=0;i<l;i++)
  {
  char letter = word[i];
  let[i]=letter;
  }
for(i=0;i<l-1;i++)
  {
  for(j=0;j<l-i-1;j++)
    {
    if(let[j]>let[j+1])
    swap(let[j],let[j+1]);
    }
  }
for(i=0;i<l;i++)
  {
  cout << char (let[i]);
  }
return 0;
}