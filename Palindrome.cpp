#include<iostream>
#include<conio.h>
using namespace std;

int i, rev=0,r , temp,num;

int main(){
    system("CLS");
    cout<<"Enter the number: ";
    cin>>num;
    temp=num;
    for(i=num;i!=0; i=i/10)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    if (rev==temp){
        cout<<temp<<" is Palindrome Number!";
    }
    else{
        cout<<temp<<" is not Palindrome Number!";
    }
    
}