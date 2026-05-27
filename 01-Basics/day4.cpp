#include<iostream>
using namespace std;
int main(){
    cout<<! (3>1)<< endl;//output 1 change into 0 because (! NOT) convert (true 1) to (false 0)
    cout<<! (3<1)<< endl;//output 0 change into 1 because (! NOT) convert (false 0) to (true 1)
    cout<<((3<1)||(3<5))<<endl;//output 1  because (|| OR) IF ANY ONE STATEMENT is  true it give overall true 
    cout<<(((3<1)||(3<2))) <<endl;// false only when both the statement are fals 
    cout<<(((3>1)&&(3>2)))<< endl;//output 1 both true 
    cout<<((3>1)&&(3>6))<< endl;//in th case on && if any one statement is false it give fals overall
return 0;
}