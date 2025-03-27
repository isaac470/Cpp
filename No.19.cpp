#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main(){
    
    int binary,decimal =0, base =1, last_digit;
    cout<<"Enter a binary number: "<<endl;

    cin>>binary;
    while(binary >0){
        last_digit=binary%10;
        decimal +=last_digit*base;
        binary/=10;
        base*=2;
    }

    cout<<"Decimal : "<<decimal<<endl;
    cout<<"Hexadecimal: "<<hex<<uppercase<<decimal<<endl;
    cout<<"Octal: "<<oct<<decimal<<endl;

    return 0;
}