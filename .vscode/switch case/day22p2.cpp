#include<iostream>
using namespace std;
int main()
{
    int n;
    int  p;
    cout<<" enter the amount"<<endl;
    cin>>n;
    cout << " notes of different amount "<< endl;
    cin>>p;
    switch(p){
    case 100: cout << n/100 << endl;
    break;
    case 50: cout << n/50 << endl;
    break;
    case 20: cout<< n/20<< endl;
    break;
    case 10 : cout<< n/10<< endl;
    break;

    }

}
