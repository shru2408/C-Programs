//Operation(Addition,Multiplication,Average)
#include<iostream>
using namespace std;
int num,c,avg,count,sum=0,n,mul=1;

int main(){
    system("CLS");
    cout<<"How many numbers you want to add?";
    cin>>count;
    for(n=0; n<count;n++){
    cout<<"Enter the numbers: ";
    cin>>num;
    sum=sum+num;
    mul=mul*num;
    }   
    avg =sum/2;
    
    cout<<"Addition is: "<<sum<<"\n";
    cout<<"Multiplication of numbers: "<<mul;
    cout<<"Average of numbers: "<<avg<<"\n";
   
    return 0;

}
