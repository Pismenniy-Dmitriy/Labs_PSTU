#include <iostream>
#include <stack>
using namespace std;

int main ()
{
    stack <double> A;
    stack <double> B;
    int i=0;
    int n;
    cout << "Vvedite kol-vo chisel" << "\n";
    cin >> n;
    cout << "vvedite chisla" << "\n";
    while (i<n)
   {
    double a;
    cin >> a;
    A.push(a);
    B.push(a);
    i++;
   }
   i=0;
   while (i<n)
   {
    cout<<A.top()<<" ";
    A.pop();
    i++;
   }
   cout<<endl<<"Steck posle udaleniya:"<<endl;
   i=1;
   while (i<=n)
   {
    if(i%2==0)
    {
        B.pop();
        i++;
    }
    else
    {
        cout<<B.top()<<" ";
        B.pop();
        i++;
    }
   }
}
