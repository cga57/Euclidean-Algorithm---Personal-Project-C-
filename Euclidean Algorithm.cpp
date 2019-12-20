#include <iostream>


using namespace std;


int GCD(int x,int y); // find the GCM in a set of two numbers using the Eucledian theorem
// calculates the GCD for a pair of numbers
int main () {
    // two blank lines
    int x,y;
    cout << "Input two numbers x and y to find the GCD b/w them" << endl;
    cin >> x >> y;

    // cout statement
    cout << GCD(x,y);
}
// We must use the Eucledian Algoritmm in order to find the GCD
// The Eucledian method works like this:
// Ex: GCD(9,81): Take the smaller
//
int GCD(int x, int y) {
    // varaibles to store the smaller and the bigger number
    int small;
    int big;
    // stores the correct value into the varaibles. If the two numbers
    // are equal, then that number will be the GCD. Covers this possibility
    if (x==y){

        return x; // since the GCD b/w the two numbers if they are equal will just be the number

    } else if(x>y){
        big = x;
        small = y;
    } else {
        big = y;
        small = x;
    }
    // a = bq+r , all division statements can be written like that with one statement
    int a,b,q;

    while(true) {
        // finds the remainder
        int final_remainder = big % small;
        // uses the division theorem of a = bq+r
        big = (big/small)*small + (final_remainder);
        if(final_remainder == 0) {
            return small;
        }
        else{
            // transfers the two objects
            big = small;
            small = final_remainder;
        }


    }
}
