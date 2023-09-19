#include <bits/stdc++.h>
using namespace std;

int unique(int a, int b, int c)
{
    int result; 
   
    if(a == b && b == c){
        result =  "1";
    }
    else if(a == b || b == c || a == c){
        result = "2";
    }
    else{
        result = "3";
    }
    return result;
}