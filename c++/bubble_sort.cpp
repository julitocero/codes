#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Intercambiar arr[j] y arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {473, 652, 38, 817, 176, 520, 763, 569, 988, 625, 487, 951, 758, 956, 220, 247, 634, 42, 122, 887, 
746, 954, 479, 128, 38, 337, 271, 233, 810, 444, 586, 828, 443, 34, 464, 350, 675, 505, 239, 595, 
780, 446, 646, 348, 573, 936, 264, 222, 53, 937, 609, 206, 576, 370, 144, 471, 983, 735, 377, 582, 
899, 510, 669, 709, 134, 539, 575, 906, 243, 195, 416, 533, 919, 146, 767, 90, 704, 270, 753, 232, 
418, 430, 130, 101, 248, 272, 680, 399, 474, 744, 528, 609, 252, 824, 428, 704, 678, 779, 874, 836, 
189, 976, 901, 216, 618, 195, 728, 809, 664, 481, 808, 235, 850, 596, 532, 970, 460, 324, 979, 463}
;
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
