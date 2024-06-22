#include <bits/stdc++.h>
using namespace std;


void insertionSort(int A[], int n) {
    for (int j = 1; j < n; ++j) {
        int value = A[j];
        int i = j - 1;
        while (i >= 0 && A[i] > value) {
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = value;
    }
}

int main() {

    int A[] = {64, 25, 12, 22, 11};
    int n = sizeof(A) / sizeof(A[0]);

    insertionSort(A, n);


    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

