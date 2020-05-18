#include <iostream>
using namespace std;

int a[7]={7,8,1,2,4,3,6};
int b[8]={2,5,3,0,2,3,0,3};
void quick_sort(int l, int r)
{
int c;
int i=l, j=r,p=a[l],temp;
while(i<=j){
while(a[i]<p) {i++;}
while(a[j]>p) {j--;}
if(i<=j){
temp=a[i];
a[i]=a[j];
a[j]=temp;
i++; j--;
}
}
if (l<j) {quick_sort(l,j);}// Левая часть
if (i<r) {quick_sort(i,r);}//Правая часть
}

void counting_sort(int n)
{
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (b[i] > max)
            max = b[i];
        if (b[i] < min)
            min = b[i];
    }
    int *c = new int[max + 1 - min];
    for (int i = 0; i < max + 1 - min; i++) {
        c[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        c[b[i] - min] = c[b[i] - min] + 1;
    }
    int i = 0;
    for (int j = min; j < max + 1; j++) {
        while (c[j-min] != 0) {
            b[i] = j;
            c[j-min]--;
            i++;
        }
    }
}

int main ()
{
    int n;
    cout << "Tip sortirovki? (1 - quick sort , 2 - counting sort)";
    cin >> n;
    cout << endl;
    if (n==1)
    {
    quick_sort(0, 6);
    for (int i=0;i<7;i++)
    {
    cout << a[i] << " ";
    }
    }
    if (n==2)
    {
    counting_sort(8);
    for (int i=0;i<8;i++)
    {
    cout << b[i] << " ";
    }
    }

}
