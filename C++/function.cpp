#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int main(){

   int max_of_four(int a, int b, int c, int d)
   {
    int ans;
    if (a > b && a > c && a > d)
        ans = a;
    else if (b > c && b > d)
        ans = b;
    else if ( c > d )
        ans = c;
    else
        ans = d;
    return ans;
    }

}
