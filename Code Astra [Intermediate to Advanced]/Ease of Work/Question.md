# Title: Ease of Work

# Problem Statement:
  Kakazu a greedy ninja from the village hidden in waterfall going to his akatsuki hide out ,wants to carry amount of X rō (bounty earned by him) ,there are quite a few denominations using which he can make an amount of X. However it's not equally easy to carry one 5 rō coin and one 10 rō coin. So he wants you to make his work easier by making him choose appropriate denominations.

Note:
1. More is the value of denomination more easy to carry it.
2. Denominations are to be given such that a perfect change can be made using given denominations.
3. It is known that one should include as many higher denominations as possible in order for ease of work.
4. There is no Coin limit for each denomination(Each denomination can be used any number of times)

# Input:
  - The First Line of input will contain two space-seperated integers x,n.
  - The second line of input will contain n integers (d1, d2, .. , dn)

# Output:
  - For each test case The contribution vector should be printed.
  - contribution vector expresses contribution of each denomination in making x.
  - Refer test cases explaination.
 
# Constraints:
  - 1 $\leq$ x $\leq$ 10^4
  - 1 $\leq$ n $\leq$ 10^5
# Sample Test Case-1:
- **Input**:<br>
  ```
  101 4
  7 8 9 11
  ```
- **Output**:<br>
  ```
  1 1 1 7
  ```
- Explaination:<br>
- First we start including most 11's so we get,which means 0 7's 0 8's 0 9's and 9 11's.
- (101/11 = 9) but we cannot consider this, as change for remaining 2 (101-99) cannot be made using 7,8,9.

- so we go to next level by taking 8 11's and try to make change 13(101-88) using 7,8,9

- Now include 1 9's and try to make change 4(13-9) using 7,8 but we change for 4 cannot be made using 7,8.

- so we proceed by taking 7 11's,Now (101-77) = 24 should be formed using 7,8,9

- we try including 2 9's which gives 24- (9 * 2) = 6 but change for 6 cannot be made using 7,8 ,try including 1 9's which gives 24-9 = 15,Now try taking 1 8's, 15-8 = 7 ,change of 7 can be made using 1 7.
  So the Overall contribution vector is <1,1,1,7>
  
  
 # Hints/Concepts Involved:
  - Rescursive Function
   
