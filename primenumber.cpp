//Wheter number is prime or not
#include<iostream>
using namespace std;
    int num,i,flag=0;
int main(){
    system("CLS");
    cout<<"Enter the number: ";
    cin>>num;

    for(i=2;i<=num/2;i++){
        if(num%i==0){
            flag++;
            break;         
        }
    }
    if (num==1){
        cout<<"Number is 1 which is nor prime or composite!";}

    else{
        if(flag!=0){
            cout<<"Number is not prime number!";
        }
        else{
            cout<<num<<" is prime number!";
        }
    }

}