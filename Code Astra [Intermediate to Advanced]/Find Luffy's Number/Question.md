# Title: Find Luffy's Number [Gray Code]

# Problem Statement:
  Luffy is given two integers n,k. help luffy for finding answer to the following problem.<br>
  Construct a good array and print the kth index of the good array.
  - Note:
    An array is called good iff it contains all the values in the range of [0,2^n-1] and any two adjacent numbers should always differ by only one bit in their binary     notation.<br>
    More over,the first element and last element should also differ by only one bit in their binary notation.
    
    
# Input:
  The first line of the input contains two space seperated integers n and k.

# Output:
  Construct the Good Array and print the kth index of good array.
 
# Constraints:
  1 $\leq$ n $\leq$ 1000
  1 $\leq$ k $\leq$ 1000
# Sample Test Case-1:
- Input:<br>
  ```
  3 4
  ```
- Output:<br>
  ```
  6
  ```
- Explaination:<br>
  - Good_Array following given conditions is: 0 1 3 2 6 7 5 4<br>
    we have all the numbers in the range of 0 $\leq$ i  $\leq$ 7 and,<br>
    0 and 1 have one bit difference
    - 000
    - 001

  
    1 and 3 have one bit difference
    - 001
    - 011

    ...<br>
    similiarly 4 and 0 have also have one bit difference
    - 100
    - 000

    fourth index in the above array is 6.
   
 # Hints/Concepts Involved:
  - Implementation of gray code
   
