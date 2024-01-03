#include<iostream>
using namespace std;

int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   if(a>b){
    if(a>c){
        cout<< "A is greatest";
    }
    else{
        cout<<"C is greatest";

    }
   }
   else{
    if(b>c){
        cout<<" B is grtst";
    }
    else{
        cout<< "c is grtst";
    }
   }
    return 0;
}