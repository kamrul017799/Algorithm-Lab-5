#include <bits/stdc++.h>
using namespace std;


bool isPrime(int n) {
    if (n <= 1)
    return false;
    bool flag = true;


    for (int i = 2; i <= sqrt(n); ++i)
        {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}

int main() {

    int number = 29;

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}

