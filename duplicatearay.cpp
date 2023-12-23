#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
    }

    cout << "\nOccurrences of elements in the array:" <<endl;

    for (int i = 0; i < n; i++) {
        if (arr[i] == -1) {
            continue;  // Skip elements marked as visited
        }

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;  // Mark the duplicate element as visited
            }
        }

        if (count > 1) {
            cout << "Element " << arr[i] << " occurs " << count << " times." << endl;
        }
    }

    return 0;
}
