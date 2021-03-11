#include<iostream>
#include<conio.h>
using namespace std;
class number
{
public:
int largest(int,int,int);

};
int number::largest(int a,int b, int c)
{
return((a>b)?((a>c)?a:c):((b>c)?b:c));
}
int main()
{
  system("CLS");
number n;
int x,y,z;
cout<<"First number=> ";
cin>>x;
cout<<"Second number=> ";
cin>>y;
cout<<"Third number=> ";
cin>>z;
int w=n.largest(x,y,z);
cout<<"\nLargest number among the three is=> "<<w;

}