// Candy

// There are n children standing in a line. Each child is assigned a rating value given in the integer array ratings.

// You are giving candies to these children subjected to the following requirements:

// Each child must have at least one candy.
// Children with a higher rating get more candies than their neighbors.
// Return the minimum number of candies you need to have to distribute the candies to the children.

 

// Example 1:

// Input: ratings = [1,0,2]
// Output: 5
// Explanation: You can allocate to the first, second and third child with 2, 1, 2 candies respectively.
// Example 2:

// Input: ratings = [1,2,2]
// Output: 4
// Explanation: You can allocate to the first, second and third child with 1, 2, 1 candies respectively.
// The third child gets 1 candy because it satisfies the above two conditions.
 

// Constraints:

// n == ratings.length
// 1 <= n <= 2 * 104
// 0 <= ratings[i] <= 2 * 10^4

#include<stdio.h>

int candies(int* ratings, int ratingSize)
{
   int candies[ratingSize];
   for(int i=0;i<ratingSize;i++)
{
    candies[i] = 1;
}

  for(int i=1;i<ratingSize;i++)
  {
    if(ratings[i]>ratings[i-1])
    {
        candies[i] = candies[i-1] + 1;
    }
  }

  for(int i=ratingSize - 2; i>=0 ; i--)
  {
    if(ratings[i]>ratings[i+1])
       candies[i] = candies[i+1] + 1;
  }
  
  int candiesSum=0;
  for(int i=0; i<ratingSize; i++)
  {
     candiesSum += candies[i];
  }
return candiesSum;

}



int main()
{
    int rating[] = {1,2,2};
    int size = (sizeof(rating)/sizeof(rating[0]));
    int results = candies(rating,size);
    printf("%d",size);
    printf("the output is %d", results);
}