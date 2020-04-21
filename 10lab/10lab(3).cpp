#include <iostream>

using namespace std;

int ar(int a1,int a2,int a3,int a4,int a5,int a6)
{
    int arr[6]={a1,a2,a3,a4,a5,a6};
    for(int i=1;i<6;i++)
{for(int j=5;j>=i;j--)
{if(arr[j]<arr[j-1])
{int r=arr[j];arr[j]=arr[j-1];arr[j-1]=r;}
}
}
for(int I=0;I<6;I++){
cout<<arr[I]<<" ";
}
}
float ar(float a1,float a2,float a3,float a4,float a5,float a6)
{
    float arr[6]={a1,a2,a3,a4,a5,a6};
      for(int i=1;i<6;i++)
{for(int j=5;j>=i;j--)
{if(arr[j]<arr[j-1])
{float r=arr[j];arr[j]=arr[j-1];arr[j-1]=r;}
}
}
for(int I=0;I<6;I++){
cout<<arr[I]<<" ";
}
}
int main()
{int t1,t2,t3,t4,t5,t6;
 float g1,g2,g3,g4,g5,g6;
cout<<"for int:\n";
cout<<"Massiv=?\n";
cin>>t1>>t2>>t3>>t4>>t5>>t6;
ar(t1,t2,t3,t4,t5,t6);
cout<<"\nfor float:\n";
cout<<"Massiv=?\n";cin>>g1>>g2>>g3>>g4>>g5>>g6;
ar(g1,g2,g3,g4,g5,g6);
}
