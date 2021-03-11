//Fibionacci series
#include<iostream>

    using namespace std;
    int f(int n){
    if(n==0 || n==1){
        return (n);
    }
    return(f(n-1)+f(n-2));
    }

int main(){
    system("CLS");
    int n; 
    cout<<"\n Upto how many Fibionacci number you want? ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"\n"<<f(i);
    }
return 0;
}