Time and Space Complexity Comparison
Approach	Time Complexity	Space Complexity
Iterative	O(log n)	O(1) (constant space)
Recursive	O(log n)	O(log n) (due to function call stack

Time Complexity:
Both approaches have O(log n) time complexity because they halve the search space with each iteration/recursion.

Space Complexity:
Iterative: The iterative approach uses O(1) space as it only requires a fixed amount of memory for the variables low, high, and mid.

Recursive: The recursive approach uses O(log n) space because each recursive call adds a new frame to the function call stack

Conclusion:
If you need a more memory-efficient solution, use the iterative approach.

If you prefer cleaner, more intuitive code and your recursion depth is manageable, use the recursive approach.

