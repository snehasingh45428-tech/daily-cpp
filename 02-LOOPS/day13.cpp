# include<iostream>
using namespace std;
int main(){
    int n, sum=0;
    cout <<"enter n:";
    cin>>n;
    for (int i=3; i<=n; i+=3){
        sum +=i;

    }
    cout<<"sum of number divisible by 3 from 1 to" <<n<<" = " <<sum<<endl;
    return 0;
}