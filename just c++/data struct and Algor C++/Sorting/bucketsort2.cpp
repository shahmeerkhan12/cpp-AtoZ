#include <iostream>
#include <vector>
#include <algorithm>

void bucketSort(std::vector<float>& arr) {
    int n = arr.size();

    // Create buckets
    std::vector<std::vector<float>> buckets(n);

    // Put array elements in different buckets
    for (int i = 0; i < n; ++i) {
        int bucket_index = n * arr[i];
        buckets[bucket_index].push_back(arr[i]);
    }

    // Sort individual buckets
    for (int i = 0; i < n; ++i) {
        std::sort(buckets[i].begin(), buckets[i].end());
    }

    // Concatenate all buckets into arr
    int index = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < buckets[i].size(); ++j) {
            arr[index++] = buckets[i][j];
        }
    }
}

int main() {
    std::vector<float> arr = {0.42, 0.32, 0.33, 0.52, 0.37, 0.47, 0.51};

    std::cout << "Original array:" << std::endl;
    for (float elem : arr) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    bucketSort(arr);

    std::cout << "Sorted array:" << std::endl;
    for (float elem : arr) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
