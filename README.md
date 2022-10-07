# CPQuestion-1

# Problem Statement:
  You are given an array of n integers a1,a2,a3,a4,a5,...an and an integer x.Check Whether if it is possible to make x using numbers of the given array.Each Number from array can be used at max once.
  
# Input:
  The first input line contains two space seprated integers n(the array length) and intger x<br>
  The next line has n integers a1,a2,a3,a4,a5,a6,..an.

# Output:
  print "YES" if it is to possible to make x<br>
  print "NO" otherwise.
 
# Constraints:
  - 1 <= n <= 100
  - 1 <= x <= 10^5
  - 1 <= ai <= 1000
# Sample Test Case-1:
- Input:<br>
  4 9 
  4 2 2 5
- Output:<br>
  YES
- Explaination:<br>
  9 can be formed by adding 5,4 or 5,2,2
   
# Sample Test Case-2:
- Input:<br>
  1 1 
  1
- Output:<br>
  YES
  
 # Sample Test Case-3:
 - Input:<br>
   4 19
   7 8 9 2
 - Output:<br>
   YES
 - Explaination:<br>
   17 can be formed by adding 8,9,2
   
