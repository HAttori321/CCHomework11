#include <iostream>
using namespace std;
int main() {

    int M, N;
    

    cout << "Enter the size of array A: ";
    cin >> M;
    cout << "Enter the size of array B: ";
    cin >> N;
    int* A = new int[M];
    int* B = new int[N];
    cout << "Enter elements of array A: ";
    for (int i = 0; i < M; ++i)
    {
        cin >> A[i];
    }

    cout << "Enter elements of array B : ";
    for (int i = 0; i < N; ++i) 
    {
        cin >> B[i];
    }
    int* result = new int[M];
    int resultSize = 0;

    for (int i = 0; i < M; ++i) 
    {
        int j;
        for (j = 0; j < N; ++j) 
        {
            if (A[i] == B[j]) 
            {
                break;
            }
        }
        if (j == N) {
            result[resultSize++] = A[i];
        }
    }

    cout << "Result : ";
    for (int i = 0; i < resultSize; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    delete[] A;
    delete[] B;
    delete[] result;

    return 0;
}