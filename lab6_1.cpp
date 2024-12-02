#include<iostream>
using namespace std;

int main(){
    int x, e=0, o=0;
    cout << "Enter an integer: ";
    cin >> x;
    while(x != 0){
        if (x % 2 == 0){
            e += 1;
        }else{
            o += 1;
        }
        cout << "Enter an integer: ";
        cin >> x;
    }
    cout << "#Even numbers = "<< e<< "\n";
    cout << "#Odd numbers = "<< o << "\n";
    return 0;
}
