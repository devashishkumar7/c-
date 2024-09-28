#include<iostream>
using namespace std;
// prime no.-> 1
// 0-> not prime no.
bool isprime(int n ){

for (int i=2;i<n;i++){
    // if n is divisible by any number between 2 and n-1, then it's not prime.
if ( n%i==0)
{ 
return 0;
}
}
    return 1;
}
int main()
{
int n;
cin>>n;

    if (isprime(n)) {
 cout<<"is a prime number"<<endl;
    }
    else {
 cout<<"is not a prime number"<<endl;

}

}