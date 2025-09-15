# Assignment 2 Reflection - Anthony Delvalle

## Approach to the Problem

When I first saw the problem, my main goal was just to make sure I understood what each version of the `permutations` function was supposed to do. Instead of jumping straight into coding, I thought about how random number generation and uniqueness checks could be handled differently. I knew there were probably multiple ways to build a permutation, so I wanted to compare them and see the trade-offs.

## Techniques Used

1. **Sequential Search**: Relied on a linear scan to avoid duplicates.
2. **Boolean Array**: Used a boolean array to track which values were already used.
3. **Fisher-Yates Shuffle**: A well-known and efficient algorithm for generating random permutations.

I tested each one by running it on different array sizes and checking both correctness and run time.

## Challenges Encountered

One challenge was keeping track of efficiency. At first, I didn’t think the differences would matter much, but once I ran the code on larger arrays, I could see how slow the first approach got.

Another challenge was making sure the random numbers didn’t repeat. In the beginning, I had some logic bugs, but I fixed them by stepping through the code carefully and re-checking how the search function and the used array worked.

## Resources

I didn’t use many outside resources for this assignment, but I did

- Look up a refresher on the Fisher-Yates shuffle to make sure I implemented it correctly.
- Briefly checked online forums to compare the time complexity of the different methods.
- Asked advice from other friends in the field

## Conclusions

From this assignment, I realized how much of a difference the choice of algorithm makes. Even though all three methods solve the same problem, their performance can be drastically different as the input size grows.

The **Fisher-Yates shuffle** stood out as the most efficient, while the **search-based approach** was clearly the slowest. 

For me, the main lesson is that knowing multiple approaches is useful, but **picking the right one for the situation is what really matters**.
