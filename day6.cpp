#include<iostream>
using namespace std;
int main(){
    char  n ;
    cout  <<"enter the value "<<endl;
    cin >> n;
if (n>='A' && n<='Z')
{
    cout << n <<" is upper case " <<endl;
}
 else if (n>='a' && n<= 'z')
{
    cout << n <<" is lower case "<<endl;

}
else if (n>='0' && n<='9')
{
    cout << n <<" is a digit" <<endl;
}
return 0;
}
