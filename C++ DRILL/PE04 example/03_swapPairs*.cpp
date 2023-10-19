/**
 * Write a function named swapPairs() that accepts a string reference as a parameter and
modifies that string so that each pair of adjacent letters will be reversed. If the string has an
odd number of letters, the last letter is unchanged. For example, if a string
variable s stores "example", the call of swapPairs(s); should change the string to "xemalpe".
If s had been "hello there", the call would produce "ehll ohtree".
The function should return the number of "swaps" made. (Remember that there are three
assignments involved in each swap.) Do not use any string functions from the standard library
other than size() and at().
*/

//함수 리턴값이 int라는건 대체 어디에 있는거지 ? 눈물나온다 ... ㅠㅠㅠㅠㅠ 
// 다시보니까 should return number라고 되어있네 ㅠㅁ ㅠ 
// 지피티써서 자존심 상해... ㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠ


#include <string>
using std::string

int swapPairs(std::string& s)
{
    int swaps = 0;
    size_t slen = s.size();
    
    for (size_t i = 0; i < slen - 1; i += 2)
    {
        char temp = s.at(i);
        s.at(i) = s.at(i + 1);
        s.at(i + 1) = temp; // 그냥 달달외우자 .. 
        swaps++;
    }
    
    return swaps;
}
/* 내가 한 바보코딩
int swapPairs(string& s)
{
   string result ="";
   int realresult;
   size_t slen = s.size();
   int i = 0;
   
   if(slen /2 != 0) //odd number
   {
      while( i != slen -1)
      {
         result += s.at(i+1) + s.at(i);
         i+= 2;
         realresult++;
      }
         result += s.at(slen-1);
   }
   else 
   {
      while(i != slen)
      {
         result += s.at(i+1) + s.at(i);
         i++;
         realresult++;
      }
   
   }
   return realresult;
}

*/