#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string.h>

using namespace std;

void one ()
{
    srand(time(NULL));
    int n,i,a[100];
    cout<<"Vvedite razmernost massiva";
    cin>>n;
    for (i=0;i<n;i++)
  {
      a[i]=rand() % 100;
      cout << a[i] << " ";
  }
  cout << "\n";
  for (i=0;i<n;i++)
  {
      if (a[i-2]+a[i-1]==a[i])
      {
          cout << "delete";
      }
      else {cout << a[i] << " ";}
  }
}
void two ()
{
    srand(time(NULL));
    int N, M;
    cout << "Enter a matrix size:" << endl;
    cout << "N = ";
    cin >> N;
    cout << "M = ";
    cin >> M;
    int** A = new int*[N];
    for (int i = 0; i < N; i++)
    {
        A[i] = new int[M];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            A[i][j]=rand() % 100;
            cout << A[i][j]<<" ";
        }
        cout << "\n";
    }
    cout << endl;
    for (int i = 0; i < M; i++) //Используем метод пузырька для сортировки
    {
        for (int j = M - 1; j > i; j--)
        {
            if (A[0][j] < A[0][j-1])
            {
                for (int i = 0; i < N; i++)
                {
                    swap(A[i][j-1], A[i][j]);
                }
            }
        }
    }
    cout << "Target matrix:" << "\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < N; i++)
    {
        delete[] A[i];
    }
    delete[] A;
    system("pause");
}
void three ()
{
    char s1[10]="string1";
    char s2[]="string2";
    char s3[10];
    cout<<"Vvedite slovo(bez probelov)"<<"\n";
    cin>>s3;
    char *s4=new char[strlen(s3)+1];
    strcpy(s4,s3);
    for (int i=0;i<strlen(s3);i++)
    {
        if (i%2!=0)
        {
            cout << s3[i];
        }
    }
}
int main ()
{
    int N;
    cout << "Vvedite nomer funkcii(1-delete Fibonacci number,2-sort the matrix,3-delete even symbols in string): ";
    cin >> N;
    if (N==1)
    {
        one ();
    }
    if (N==2)
    {
        two ();
    }
    if (N==3)
    {
        three ();
    }

}
