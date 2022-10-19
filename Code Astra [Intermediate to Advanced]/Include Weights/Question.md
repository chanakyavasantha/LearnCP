# Title: Include Weight's

# Problem Statement:
  1. There is a bag of capacity C.
  2. There are weights numbered from 1 to n(w[1],w[2],...w[n]).
  3. There is a profit associated to carry each w[i].
  4. Maximize the profit to carry bag with weights not exceeding its capacity.
  
  
# Input:
  - The First Line of input contains two space-seperated integers W and n.
  - The second Line of input contains n space-seperated integers w[1] , w[2] , w[3] ... w[n]
  - The Third Line of input contains n space-seperated integers P[1], P[2], ... ,P[n].
  - P[i] denotes Profit associated with W[i]

# Output:
  - The first line of output should contain maximum profit.
  - The second line of input should contain profits(space- seperated) contributing to maximum profit in sorted order.
  - The third line of input should contain weights(space- seperated) corresponding to above printed profits.
 
# Constraints:
  - 1 $\leq$ C $\leq$ 10000<br>
  - 1 $\leq$ w[i] $\leq$ 1000<br>
  - 1 $\leq$ P[i] $\leq$ 1000<br>
# Sample Test Case-1:
- Input:<br>
  ```
  50 3
  10 20 25
  60 120 100
  ```
- Output:<br>
  ```
  220
  100 120
  25 20
  ```
- Explaination:<br>
  - For getting a maximum profit of 220
  - 100 120 units are profits contributing to maximum profit (in sorted order), their respective weights are 25 and 20.
# Sample Test Case -2:
- Input:<br>
  ```
  46 5
  7 10 12 6 8
  55 70 43 62 90
  ```
- Output:<br>
  ```
  320
  43 55 62 70 90
  12 7 6 10 8
  ```
 # Hints/Concepts Involved:
  - Dp implementation of knapsack problem.
