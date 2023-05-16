#include<iostream.h>
#include<conio.h>
inline int multi(int t,int g,int c)
{
cout<<"enter the value of t:"<<endl;
cin>>t;
cout<<"enter the value of g:"<<endl;
cin>>g;
c=t*g;
cout<<"the mul of a and b:"<<c<<endl;
return 0;
}
void main ()
{
int t,g,c;
clrscr();
multi(t,g,c);
getch();
}
