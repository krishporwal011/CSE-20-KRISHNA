#include <iostream>
using namespace std;
void display(char *);
int main()
{
    char name[5]="xyab";
    //display(name)or display(&name[0])
    display(&name[0]);
}
void display(char *p)
{
    while(*p!='\0')
    {
        cout<<*p;
        p++;
    }
}