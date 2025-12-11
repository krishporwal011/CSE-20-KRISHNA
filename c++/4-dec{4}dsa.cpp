#include <iostream>
using namespace std;
void xstrcat (char *, char *);
   int main()
   {
         char p[10]="abc";
         char q[5]="xyz";
         xstrcat(p,q);
          cout<<p;
   }
   void xstrcat(char *a, char *b)
   {
       while(*a!='\0')
       {
           a++;
       }
       while(*b!='\0')
       {
           *a=*b;
           a++;
           b++;
       }
       *a='\0';
   }