# Title: Count Zero's

# Problem Statement:
  Given an integer **N**.Count the total Number of zeroes in the binary notations of numbers in range of 0 to 2n-1
  
  
# Input:
  - The First line of input will contain an integer N.
# Output:
  - Print the total number of zeroes in the binary notations of numbers in range of 0 to 2n-1
 
# Constraints:
  1 $\leq$ n $\leq$ 10^5
# Sample Test Case-1:
- Input:<br>
  ```
  2
  ```
- Output:<br>
  ```
  4
  ```
- Explaination:<br>
  - writing Binary Notation for numbers in range of 0 to 3:
  - 0 is 00
  - 1 is 01
  - 2 is 10
  - 3 is 11
  - Total Number of zero's in above strings is 4(2 zero's in 0, 1 zero in 1,1 zero in 2).
  
 # Hints/Concepts Involved:
  - Equal contribution of o's and 1's for numbers in range of [0,2^n-1]
