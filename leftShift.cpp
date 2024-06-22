#include <bits/stdc++.h>
using namespace std;


void leftShift(int A[], int n, int k) {

    for (int j = 0; j < k; ++j) {

        for (int i = 1; i < n; ++i) {
            A[i - 1] = A[i];
        }
    }


    for (int i = n - k; i < n; ++i) {
        A[i] = 0;
    }
}

int main() {

    int A[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(A) / sizeof(A[0]);
    int k = 3;

    cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    leftShift(A, n, k);

    cout << "Array after left shift by " << k << " elements: ";
    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

