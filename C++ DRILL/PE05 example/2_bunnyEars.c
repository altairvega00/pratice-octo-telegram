#include <string>
using std::string;

int bunnyEars(int n)
{
  if(n !=0)
   {
      return (2 + bunnyEars(n-1));
   }
   return 0; // replace this with your code
}
/*
int bunnyEars(int n)
{
   return 2 * n;
    // replace this with your code
}
*/
