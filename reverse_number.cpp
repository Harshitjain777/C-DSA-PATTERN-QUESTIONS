#include<iostream>
using namespace std;
int main(){
    for(int i=1 ; i<=5 ; i++){
        for(int j=1 ; j<=5-i ; j++){
            cout<<" ";
        }
    int reverse=0;
     
    int n=4321;
    while(n>0){
        
        
        int lastdigit=n%10;
       reverse =reverse*10 + lastdigit;
        n=n/10;
        
    }
    cout<<reverse;
    return 0;

}