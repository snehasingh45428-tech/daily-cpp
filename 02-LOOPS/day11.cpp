#include<iostream>
using namespace std;
int main(){
    int n =7;
    bool isprime =true;
    for (int i=2;i<n-1;i++){
        if(n%i==0){
            isprime =false;
            break;
        }
    }
    if (isprime == true){
        cout<<"prime number\n";
    }else{
    cout<<"non prime number\n";
    
    
}
    return 0;
}