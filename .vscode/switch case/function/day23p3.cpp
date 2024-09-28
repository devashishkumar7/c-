#include<iostream>
using namespace std;
bool iseven()
{
    //1 -> even
    //0 -> odd 
    int a;
    cin>>a;
    if ( a&1){
    return 0;
    }
    else {
    return 1;
    }
}
int main ()
{

    if ( iseven())
    cout << "the number is even" <<endl;
    else 
    cout <<" the num is odd"<<endl;
}



//* NICHE WALA V VALID HAI




#include<iostream>
using namespace std;
bool iseven(int a)
{
    //1 -> even
    //0 -> odd 
    if ( a&1){
    return 0;
    }
    else {
    return 1;
    }
}
int main ()
{
  int a;
  cin>>a;
    if ( iseven( a))
    cout << "the number is even" <<endl;
    else 
    cout <<" the num is odd"<<endl;
}

