#include<iostream>
using namespace std;

int main(){
    int num, oddcount = 0, evencount = 0 ;
    cout << "Enter an integer: ";

    while( cin >> num && num != 0){
        if(num % 2 == 0){
        evencount++ ;
        }else{
        oddcount++ ;
    }
    cout << "Enter an integer: " ;
}
    cout << "#Even numbers = " << evencount << endl;
    cout << "#Odd numbers = " << oddcount ;
    return 0;

}