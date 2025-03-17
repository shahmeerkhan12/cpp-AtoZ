#include <iostream>
#include <algorithm>

const int MAX_SIZE = 100; // Define maximum size for arrays

void bucketSort(float arr[], int n) {
    // Create buckets
    float buckets[MAX_SIZE][MAX_SIZE] = {0}; // Assuming maximum size for buckets

    // Put array elements in different buckets
    for (int i = 0; i < n; ++i) {
        int bucket_index = n * arr[i];
        buckets[bucket_index][i] = arr[i];
    }

    // Sort individual buckets using insertion sort
    for (int i = 0; i < n; ++i) {
        int bucket_size = 0;
        for (int j = 0; j < MAX_SIZE; ++j) {
            if (buckets[i][j] != 0) {
                bucket_size++;
            }
        }
        for (int j = 1; j < bucket_size; ++j) {
            float key = buckets[i][j];
            int k = j - 1;
            while (k >= 0 && buckets[i][k] > key) {
                buckets[i][k + 1] = buckets[i][k];
                k--;
            }
            buckets[i][k + 1] = key;
        }
    }

    // Concatenate all buckets into arr
    int index = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < MAX_SIZE; ++j) {
            if (buckets[i][j] != 0) {
                arr[index++] = buckets[i][j];
            }
        }
    }
}

int main() {
    float arr[] = {0.42, 0.32, 0.33, 0.52, 0.37, 0.47, 0.51};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    bucketSort(arr, n);

    std::cout << "Sorted array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}



