
#include <bits/stdc++.h>
using namespace std;

int sumOfList(int A[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += A[i];
    }
    return sum;
}

int main() {

    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);

    int result = sumOfList(A, n);
    cout << "The sum of the list is: " << result << endl;

    return 0;
}
