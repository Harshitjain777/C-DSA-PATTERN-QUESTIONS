#include<iostream>
using namespace std;
int main(){
    int count=0;
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            if(i>=j){
            
            
                cout<<count;
                count++;
                
            }
            
        

        }
        cout<<endl;
    }
    
    return 0;
}
