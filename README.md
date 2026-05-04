# Windowed-Median-With-Frequency-Bucketing
This code snippet demonstrates an efficient implementation of Sliding Window Median using the Frequency Bucketing (Counting Array) technique in C++ that supports :

1. Sliding Window Median Calculation
2. Efficient Updates using Frequency Count
3. Fixed Range Optimization (using max value constraint)
4. Real-time median tracking without sorting each window


Features :

1. Fast median computation using prefix frequency
2. Avoids re-sorting for every window
3. Efficient sliding window updates (add/remove in O(1))
4. Works best when element range is limited
5. Simple and memory-efficient approach


How It Works :

1. Initialize a frequency array (buckets) of size maxVal + 1
2. Populate the first window
3. Compute median using cumulative frequency
4. Slide the window :
- Remove outgoing element
- Add incoming element
- Recompute median


Time & Space Complexity :

1. Time Complexity :
O(n × maxVal) (median search per window)

2. Space Complexity:
O(maxVal) for frequency array


Use Cases :

1. Competitive Programming (Sliding window problems)
2. Real-time analytics (rolling statistics)
3. Data stream processing
4. Histogram-based algorithms
5. Systems with bounded integer ranges


How to Run :

Download the repository (extract the folder if needed) then open the project folder in the terminal (install a C++ compiler if needed), compile the program, and run the executable file. After running, enter the number of elements, array values, window size (k), and maximum value in the array to see the sliding window median output.
