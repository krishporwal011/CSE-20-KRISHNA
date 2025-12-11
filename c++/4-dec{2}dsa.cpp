#include <iostream>
using namespace std;

 int xstrlen(char *);
    int main()
    {
        char p[10]="xyzancd";
        int y;
        y=xstrlen(p);
        cout<<y;
    }
    int xstrlen(char *a)
    {
        int c=0;
        while(*a!='\0')
        {
            c++;
            a++;
        }
        return c;
    }

