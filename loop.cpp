#include <iostream>

using namespace std;

bool accept(){
    cout<<"Do you want to proceed(y or n)?\n";

    char answer =0;
    cin>>answer;

    if (answer=='y')return true;
    return false;
}

bool accept2(){
    cout<<"Do you want to procees(y or n)?\n";

    char answer =0;
    cin>>answer;

    switch (answer)
    {
    case 'y':/* constant-expression */
        return true;
    case 'n':
        return false;/* code */
        break;
    
    default:
        cout<<"I'll take that for a no.\n";
        return false;
    }
}
int main(){
    accept2();
}