# Assignment 2 Analysis - Anthony Delvalle

## Algorithm 1

Algorithm 1: Uses a search every time it adds a new number. Searching takes longer as the array fills -- total work is about
1+2+3+⋯+n=O(n^2)
| Size  | Time (sec) |
| ----- | ---------- |
| 5000  |     0.2       |
| 10000 |     0.8       |
| 20000 |     3.0      |
| 40000 |     8.0       |



## Algorithm 2:
Each random draw and check !used[r] is O(1).

The while loop runs until the array is full. That’s n successful insertions.

Each element can only be marked once, so in expectation we’ll do ~n successful trials (the probability of collisions exists, but is bounded and doesn’t blow up runtime).

Total cost ≈ O(n).
| Size    | Time (sec) |
| ------- | ---------- |
| 100000  |    0.05        |
| 200000  |    0.1        |
| 400000  |    0.2        |
| 800000  |     1.4       |
| 1600000 |      0.9      |
| 3200000 |      1.6      |
| 6400000 |         3.1   |




## Algorithm 3

First loop: initializes array → O(n).

Second loop: Fisher–Yates shuffle, one swap per index → O(n).

Total cost ≈ O(n).
| Size       | Estimated Time |
| ---------- | -------------- |
| 500,000    |  0.1 sec      |
| 1,000,000  | 0.4 sec      |
| 2,000,000  |    0.4 sec      |
| 4,000,000  |  0.8 sec      |
| 8,000,000  |    1.6 sec      |
| 16,000,000 |  3.6 sec      |
| 32,000,000 |   6.4 sec      |

