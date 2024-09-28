#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    cout<<" enter the value of a & b"<<endl;
    cin>>a;
    cin>>b;
    cout<<" enter the operation you want to perform"<<endl;
    char op;
cin>>op;
    switch (op){
    case '+' : cout <<a+b;
    break;
    case '-': cout << a-b;
    break;
    case '*': cout<< a*b;
    break;
    }
}