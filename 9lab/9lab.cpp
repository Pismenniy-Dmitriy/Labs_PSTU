#include <iostream>
#include <cmath>
#include <float.h>
using namespace std;


double f(double x)
{
    return acos(x)-sqrt(1-0.3*pow(x, 3));;
}

int main(int argc, char* argv[])
{
    float a, b, x;

    cout << "Left:";
    cin >> a;
    cout << "Right:";
    cin >> b;

    if (a == b)
    {
        cout << "Left=Right!";
        return 0;
    }
    if (a > b)
    {
        cout << "Left>Right!";
        return 0;
    }
    int n = 1;
    while (FLT_EPSILON<= abs(b - a))
    {
        x = (a + b) / 2;
        if (f(x) == 0)
        {
            return 0;
        }
        else
        {
            if (f(a) * f(x) < 0) b = x;
            if (f(a) * f(x) > 0) a = x;
        }
        n++;
    }

    if ((f(x) != 0) && (a <= b))
    {
        cout << "x=" << x << endl;

        cout << "Count: " << n;
    }
    return 0;
}


