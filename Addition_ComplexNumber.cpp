#include<iostream>
#include<conio.h>

using namespace std;
class complex
{
private:
int real,image;
public:
complex()
 {
 real=2;
 image=5;
 }
complex(int r)
  {
  real=r;
  image=5;
  }
complex(int re,int i)
   {
   real=re;
   image=i;
   }
friend complex sum(complex c,complex e);
friend void show(complex d);

};
complex sum(complex c,complex e)
{ complex t;
t.real=c.real+e.real;
t.image=c.image+e.image;
return(t);

}
void show(complex d)
{
cout<<"the sum is ="<<d.real<<"+i"<<d.image;
}

int main(){
    system("CLS");
    int r,im,r1,im1;
    complex c1;
    cout<<"Enter the real and imaginary number: ";
    cin>> r;
    cin>>im;
    complex c2(r,im);
     cout<<"Enter the second real and imaginary number: ";
     cin>> r1;
     cin>>im1;
     complex c3(r1,im1);
    c1=sum(c2,c3);
    show(c1);
    return(0);
}