
In Coin Change Problem  we use  Recursion to solve this problem.
Here we take index of  coin array  and sum of coin till that index.
There is base case that  if index is equal to zero then
We check for sum is equal to given value of  customer sum.
If the sum is not greater than we say that this is not the solution of given sum.
Like for coins[]=[ 1 ,2 ,5 ,8, 10]
Input  7
Then we can make the sum
	1 ,2,2,2
	2,5,
	1,1,1,1,1,1,1
	1,1,5
 
For all of these solution we choose that solution that is possible we minimum number of coin.

Here we can not take the coin which has greater value than target sum.
We can use dynamic programming to reduce the complexity of problem 
And  here we are not computing the subproblem that has been calculated before so it take extra space to store the result of subproblem.

