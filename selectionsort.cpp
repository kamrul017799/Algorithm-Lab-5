#include <bits/stdc++.h>
using namespace std;


void selectionSort(int A[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int iMin = i;
        for (int j = i + 1; j < n; ++j) {
            if (A[j] < A[iMin]) {
                iMin = j;
            }
        }

        swap(A[iMin], A[i]);
    }
}

int main() {

    int A[] = {64, 25, 12, 22, 11};
    int n = sizeof(A) / sizeof(A[0]);

    selectionSort(A, n);


    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

