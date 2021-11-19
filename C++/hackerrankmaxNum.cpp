#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main(){
 //max_of_four(int a, int b, int c, int d){
int a,b,c,d;
    int ans;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    if (a > b && a > c && a > d)
       cout<<a;
        //ans = a;
    else if (b > c && b > d)
        cout<<b;
        //ans = b;
    else if (c > d)
    cout<<c;
        //ans = c;
    else
    cout<<d;
       // ans = d;
    return ans;
    }

