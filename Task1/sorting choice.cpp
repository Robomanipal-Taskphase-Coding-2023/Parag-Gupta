#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}
int binarySearch(int arr[], int n, int target) {
    int l = 0, r = n - 1;
    while (l<= r) {
        int mid = l + (r-l) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return -1; 
}

int main() {
    int n,i,target,position;
    char choice;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array:" << endl;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter 'b' for Bubble Sort or 's' for Selection Sort: ";
    cin >> choice;

    if (choice == 'b') {
        bubbleSort(arr, n);
        cout << "Array sorted using Bubble Sort." << endl;
    } else if (choice == 's') {
        selectionSort(arr, n);
        cout << "Array sorted using Selection Sort." << endl;
    } else {
        cout << "Invalid choice. Please enter 'b' or 's'." << endl;
        return 1;
    }

    cout << "Sorted Array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    cout << "Enter the number to search for: ";
    cin >> target;

    position = binarySearch(arr, n, target);

    if (position != -1) {
        cout << "Element found at position " << position << "." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
