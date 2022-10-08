# Title: Sum of Sums which are odd

# Problem Statement:
  You are given an array of n integers a1,a2,a3,a4,a5,...an.Try to output sum of all possible odd sums that can be made using numbers of array.<br>
  Note: each element of array can be used at max once for making one odd sum.
# Input:
  The first input line contains array length.
  The next line has n integers a1,a2,a3,a4,a5,a6,..an.

# Output:
  print the sum of all odd sums which can be made using elements of array.<br>
 
# Constraints:
  - 1 <= n <= 100
  - 1 <= ai <= 1000
# Sample Test Case-1:
- Input:<br>
  3 
  2 4 5
- Output:<br>
  32 
- Explaination:<br>
  possible odd sums are:<br>
  5 -> (5)<br>
  7 -> (5+2)<br>
  9 -> (5+4)<br>
  11 -> (5+4+2)<br>
  
 # Submission Rules:
 - Expected Time Complexity: O(n.X)
 - where X = a1+a2+a3..+an
 - Auxliary Space: O(x)
   
