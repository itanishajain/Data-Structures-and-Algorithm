#include <iostream>
using namespace std;

void reverseArray(int ar[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        swap(ar[start], ar[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {77, 86, 13, 65, 87, 34, 75, 21, 58};
    int size=9;
    reverseArray(arr, size);

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}