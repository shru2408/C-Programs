//Whether number is armstrong or not
#include<iostream>
using namespace std;

int sum=0,num,a,b;
int main(){
    system("CLS");
    cout<<"Enter the number: ";
    cin>>num;
    b=num;
        while(num>0){

            a=num%10;            
            sum= sum+(a*a*a);
            num=num/10; 
        }
        if(b==sum){
            cout<<b<<" is armstrong!";
        }
        else{
            cout<<b<<" is not armstrong!";
        }

}