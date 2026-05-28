# include<iostream>
using namespace std;
int main(){
    char ch;
    cout <<"enter char";
    cin >> ch;
    if (ch>=65 && ch<=90){
        cout << "Uppercase \n";
    } else if ( ch>= 97 && ch<=122){
        cout << "Lowercase \n";
    } else {
        cout << "no case \n";
    }
return 0;
}
