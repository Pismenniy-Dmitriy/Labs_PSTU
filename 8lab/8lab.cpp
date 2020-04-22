 #include <iostream>
 #include <conio.h>
 #include <stdio.h>
 #include <Windows.h>
 using namespace std;

 typedef struct
 {
 char nazvanie [40];
 char aftor [40];
 float god_izdaniya;
 float kolvo_stranic;

 } kniga;

 void form(char sFileName[10],int KolZap)
 {
 int i;
 char* rejim="w";
 FILE *f;
 kniga s;
 if (KolZap==1) {
 rejim="a";
 }
 if ((f=fopen(sFileName,rejim))==NULL) exit(1);
 for (i=0;i<KolZap;i++) {
 cout <<"Vvedite nazvanie - ";
 scanf ("%s",&s.nazvanie);
 cout <<"Vvedite aftor - ";
 scanf ("%s",&s.aftor);
 cout <<"Vvedite god izdaniya - ";
 scanf ("%f",&s.god_izdaniya);
 cout <<"Vvedite kol-vo stranic - ";
 scanf ("%f",&s.kolvo_stranic);
 cout <<endl;
 fwrite(&s,sizeof(kniga),1,f);
 if (ferror(f)!=NULL) exit(2);
 }
 fclose(f);
 }
 void vivod(char sFileName[10])
 {
 FILE *f;
 kniga d;
 if ((f=fopen(sFileName, "r"))==NULL) exit(3);
 cout <<"File - "<<sFileName<<endl;
 while (!feof(f)) {
 fread (&d,sizeof(kniga),1,f);
 if (!feof(f)) {
 cout <<"============================\n";
 cout <<"Nazvanie: "<<d.nazvanie<<endl;
 cout <<"Aftor: "<<d.aftor<<endl;
 cout <<"God izdaniya: "<<d.god_izdaniya<<endl;
 cout <<"Kol-vo stranic: "<<d.kolvo_stranic<<endl;
 cout <<"============================\n";
 }
 }
 fclose(f);

 }

 void udalenie(char cFileIn[10], char cFileOut[10])
 {
 kniga d;
 FILE *f1,*f2;
 char temp[40];
 if ((f1=fopen(cFileIn, "r"))==NULL) exit(4);
 if ((f2=fopen(cFileOut,"w"))==NULL) exit(5);
 cout << "Vvedite nazvanie na udalenie - ";
 cin >> temp;

 while(1)
 {
    fread(&d,sizeof(kniga),1,f1);
    if (feof(f1)) break;
    if (strcmp(d.nazvanie, temp))
        fwrite (&d,sizeof(kniga),1,f2);
 }

 fclose(f2);
 fclose(f1);
 }

 int main()
 {
     int n;
     cout <<"Vvedite kol-vo zapisey: - ";
     cin>>n;
     cout <<endl;
     form("f1.dat",n);
     vivod("f1.dat");
     udalenie("f1.dat","f2.dat");
     cout <<"Posle udalenia:\n";
     vivod("f2.dat");
     getch();
     n=1;
     system("cls");
     form ("f2.dat",n);
     cout <<"Posle dobavlenia:\n";
     vivod ("f2.dat");
     getch();
 }
