#include <iostream>
#include<cmath>

using namespace std;

double rec(double num,double y)
{if(num==y)
    return sqrt(num);
return sqrt(num+rec(++num,y));}

int main()
{cout<<rec(1,9);
return 0;}
