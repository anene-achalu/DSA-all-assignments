1️⃣ Exponential Search
How It Works:
Exponential Search is designed to work with sorted arrays.

It first finds a range where the target element may lie. It does this by repeatedly doubling the search range (starting from index 1).

Once the range is found, binary search is performed on the range to locate the element.

Steps:
Start with the first element, arr[0].

If the target is greater than the element at the current index, double the index (i.e., i = 2^k).

Once the right range is found, perform binary search in that range.

Time Complexity:
Exponential Search Time Complexity: O(log n) for the search and O(log n) for binary search.

Overall Time Complexity: O(log n).

Space Complexity:
Space Complexity: O(1) (iterative approach).

2️⃣ Jump Search
How It Works:
Jump Search is used for sorted arrays and works by skipping ahead by a fixed block size (usually sqrt(n)).

It repeatedly checks blocks of elements, and when it finds that the target lies in a block, it performs linear search inside that block.

Steps:
Divide the array into blocks of size √n.

Jump ahead by √n steps.

Perform linear search within the block where the target is likely located.

Time Complexity:
Jump Search Time Complexity: O(√n) (for finding the block).

Overall Time Complexity: O(√n).

Space Complexity:
Space Complexity: O(1) (no additional space required).

3️⃣ Hashing-Based Searching
How It Works:
Hashing involves converting the input element into a hash value (index in a hash table) using a hash function.

It uses a hash table (or hash map) to store and quickly retrieve elements based on their hashed values.

It provides constant time lookups for most operations (if the hash function is good).

Steps:
Create a hash table where the size is typically chosen as a prime number.

Insert elements into the table using a hash function.

For searching, compute the hash value for the target and look up the corresponding entry.

Time Complexity:
Best Case: O(1) (constant time lookup).

Average Case: O(1) (constant time, assuming uniform distribution).

Worst Case: O(n) (if hash collisions are very high).

Space Complexity:
Space Complexity: O(n) (for the hash table).

Summary of Findings
Search Algorithm	Time Complexity	Space Complexity	Best Use Case
Exponential Search	O(log n)	O(1)	When the range is unknown but sorted
Jump Search	O(√n)	O(1)	For large sorted arrays where binary search is not ideal
Hashing Search	O(1) (avg)	O(n)	For constant time lookups in large datasets with frequent search operations
Conclusion:
Exponential Search is effective for unsorted data when the upper bound is not known.

Jump Search is useful for sorted arrays, especially when binary search is not efficient for certain range-based searches.

Hashing Search is the most efficient for constant-time lookups, especially when you need fast access to large amounts of data (like dictionaries or databases).
