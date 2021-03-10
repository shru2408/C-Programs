//Divison, Remainder, Subtraction.
#include <iostream>
using namespace std;

int a,b  ;
float rem,sub, divison;
int main()
{
    system("CLS");
    cout<<"Enter the numbers: ";
    cin>>a;
    cin>>b;
    divison=a/b;
    rem=a%b;
    sub=a-b;
    
    cout<<"Subtraction is: "<<sub<<"\n";
    cout<<"Divison is: "<<divison<<"\n";
    cout<<"Remainder is: "<<rem<<"\n";
    return 0;


}