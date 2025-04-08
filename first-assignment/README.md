## Algorithm:To Find Smallest Number in an Array
Input: An array arr of size n Output: The smallest number in the array Initialize a variable min with the first element of the array (arr[0]). Loop through the array starting from the second element (i = 1 to n-1): If arr[i] is smaller than min, update min = arr[i]. Return min as the smallest number.

How to Run the Code
Clone the repository to your local machine.
Open the terminal and navigate to the repository directory.
Compile the C++ code using:
 g++ smallest.cpp -o smallest
Run the compiled program:
./smallest
Output
The program will output:
The smallest number in the array is: 10
Contributing
Feel free to contribute to this project by forking the
repository and submitting a pull request.
License
This project is licensed under the MIT License.

## Algorithm:To Find the second and third largest element This C++ program finds the second and third unique elements in a given array wothout It uses a single-pass algorithm to track the top three unique maximum values efficiently.

#algorithm

Initialize 'first','second', and 'third' with the first element of the array.
Loop through each element:
If the current element is greater than 'first', update all three (third ← second ← first ← current).
Else if greater than 'second' and not equal to 'first', update 'second' and 'third'.
Else if greater than 'third' and not equal to 'first' or 'second', update 'third'.
After the loop, print the second and third largest values. How to Run the Code Clone the repository to your local machine. Open the terminal and navigate to the repository directory. Compile the C++ code using: g++ 2nd&3rd.cpp -o 2nd&3rd Run the compiled program: ./2nd&3rd Output The program will output: Second largest: 40 Third largest: 30 Contributing Feel free to contribute to this project by forking the repository and submitting a pull request. License This project is licensed under the MIT License.