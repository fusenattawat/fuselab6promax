#include<iostream>
using namespace std;

int main(){
    int n = 1;
    int e = 0;
    int o = 0;
    while ( n != 0){
        cout << "Enter an integer: ";
        cin >> n;
        if ( n%2 == 0 and n != 0 ){
            e = e+1;
        }else if( n%2 != 0){
            o = o+1;
        }
    }
    cout << "#Even numbers = "<< e << endl;
    cout << "#Odd numbers = "<< o << endl;
    return 0;
}