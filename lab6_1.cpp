#include<iostream>
using namespace std;

int main(){
    int num ;
    cout << "Enter an integer: ";
    cin >> num ;
     
    if(num % 2 == 0){
        cout << "#Even numbers = " << num ;
    }else{
        cout << "#Odd numbers = " << num ;
    }
    return 0;
}
