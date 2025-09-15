# Assignment 2 Analysis - Anthony Delvalle

## Algorithm 1

Algorithm 1: Uses a search every time it adds a new number. Searching takes longer as the array fills -- total work is about
1+2+3+⋯+n=O(n^2)
| Size  | Time (sec) |
| ----- | ---------- |
| 5000  |            |
| 10000 |            |
| 20000 |            |
| 40000 |            |



## Algorithm 2:Each random draw and check !used[r] is O(1).

The while loop runs until the array is full. That’s n successful insertions.

Each element can only be marked once, so in expectation we’ll do ~n successful trials (the probability of collisions exists, but is bounded and doesn’t blow up runtime).

Total cost ≈ O(n).
| Size    | Time (sec) |
| ------- | ---------- |
| 100000  |            |
| 200000  |            |
| 400000  |            |
| 800000  |            |
| 1600000 |            |
| 3200000 |            |
| 6400000 |            |




## Algorithm 3

Your test results and analysis here...
