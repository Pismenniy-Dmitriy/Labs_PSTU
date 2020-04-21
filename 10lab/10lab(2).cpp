#include <iostream>

using namespace std;

float minimal(int k, ...)
{
    int *p=&k;
    int h = *p;
    int mini = 1000000;
    int i=1;
    while (h!=1)
    {
     if (h < mini)
     {
       if(i%2!=0)
       {
        {mini = h;}
       }
     }
     h = *(++p);
     i++;
    }
   return mini;

}

int main()
{
    cout << "Min:"<< minimal(8,3,7,6,14,10,5,11,9,1);
}
