#include <iostream>
using namespace std;
void xstrepy (char *, char *);
   int main()
   {
       char p[10]="abcdef";
       char q[10];
       xstrepy(q,p);
        cout<<q;
   }
   void xstrepy(char *a, char *b)
   {
       while(*b!='\0')
       {
           *a=*b;
           a++;
           b++;
       }
       *a='\0';
   }