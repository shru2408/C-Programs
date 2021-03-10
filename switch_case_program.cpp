//Length,Compare,Reserve, Lower, Upper cases

#include<iostream>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
 using namespace std;
  int n;
  char str[20],str1[20];
  int main()
{
        system("CLS");
        cout<<"Enter the string=> \n";
        gets(str);
        cout<<"Enter second  string=> \n";
        gets(str1);

        cout<<"Which function do you want to use?\n";
        cout<<" 1.Find the length of string\n";
        cout<<" 2.Compare String\n";
        cout<<" 3.Reserve string\n";
        cout<<" 4.Convert into UPPER CASE \n";
        cout<<" 5.Convert into lower case \n";
        cout<<"Enter your choice: ";
        cin>>n;

    switch(n){
        case 1:{
            cout<<"Length of first string: "<<strlen(str);
            cout<<"\nLength of second string: "<<strlen(str1);
               }
        break;
        case 2:{ if(strcmpi(str,str1)==0){
                cout<<"\nBoth strings are same";}
                else{
                cout<<"\nBoth strings are not same";
                     }
                    }
        break;
        case 3:{
                cout<<"The reverse string: "<<strrev(str);
                cout<<"\nThe reverse of second string: "<<strrev(str1);
                     }
        break;
        case 4:{
                     cout<<"UPPER CASE of first string: "<<strupr(str);
                    cout<<"\nUPPER CASE of second string: "<<strupr(str1);
                         }
        break;
        case 5:{
                         cout<<"lower case of first string: "<<strlwr(str);
                         cout<<"\nlower case of second string: "<<strlwr(str1);
                              }
        break;
        default: cout<<"\nEnter number is wrong. Please enter right choice!"  ;
             }

    return(0);         
 }