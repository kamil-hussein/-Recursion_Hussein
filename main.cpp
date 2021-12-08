#include <iostream>
using namespace std;

int factorial(int);
void Hanoi(int m, string start, string middle, string end){
    cout << "m is equal to: " << m << endl;
    if(m == 1){
        cout << "Move Disc " << " from " << start << "  to " << end << endl;
    }
    else{
        Hanoi(m-1,start,end,middle);
        cout << "Move disc " << m << " from " << start << " to " << end << endl;
        Hanoi(m-1,middle,start,end);
    }
}

int main() {
   int discs = 3;
    Hanoi(discs, "start","middle","end");
    int n, result;

    cout << "Enter posative  number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}