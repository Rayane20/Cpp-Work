/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int revdigit(int y){
    int rem, rev=0;
    while(y>0){
        rem = y%10;
        rev = rev*10+rem;
        y = y/10;
    }return rev;

}

bool isPalindrome(int x) {
    //complete the function

    if(x==revdigit(x)){
        return true;
    }
    else{
        return false;
    }

}

int main() {
    int n;
    cin >>n;

    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}
