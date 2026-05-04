#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int getMedian(const vector<int>& buckets, int k) {
    int countSum = 0;
    int target = (k + 1) / 2;

    for (int i = 0; i < buckets.size(); ++i) {
        countSum += buckets[i];
        if (countSum >= target) {
            return i;
        }
    }
    return 0;
}

vector<int> windowedMedianBucketing(const vector<int>& nums, int k, int maxVal) {
    vector<int> results;
    if (nums.empty() || k == 0) return results;

    vector<int> buckets(maxVal + 1, 0);

    // Initialize first window
    for (int i = 0; i < k; ++i) {
        buckets[nums[i]]++;
    }

    results.push_back(getMedian(buckets, k));

    // Slide the window
    for (int i = k; i < nums.size(); ++i) {
        buckets[nums[i - k]]--; 
        buckets[nums[i]]++;     
        results.push_back(getMedian(buckets, k));
    }

    return results;
}

int main() {
    int n, k, maxVal;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter window size (k): ";
    cin >> k;

    cout << "Enter maximum value in array: ";
    cin >> maxVal;

    vector<int> medians = windowedMedianBucketing(nums, k, maxVal);

    cout << "Sliding Window Medians: ";
    for (int m : medians) {
        cout << m << " ";
    }
    cout << endl;

    return 0;
}