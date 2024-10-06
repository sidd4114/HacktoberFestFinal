// Type of Triangle

// You are given a 0-indexed integer array nums of size 3 which can form the sides of a triangle.

// A triangle is called equilateral if it has all sides of equal length.
// A triangle is called isosceles if it has exactly two sides of equal length.
// A triangle is called scalene if all its sides are of different lengths.
// Return a string representing the type of triangle that can be formed or "none" if it cannot form a triangle.

 

// Example 1:

// Input: nums = [3,3,3]
// Output: "equilateral"
// Explanation: Since all the sides are of equal length, therefore, it will form an equilateral triangle.
// Example 2:

// Input: nums = [3,4,5]
// Output: "scalene"
// Explanation: 
// nums[0] + nums[1] = 3 + 4 = 7, which is greater than nums[2] = 5.
// nums[0] + nums[2] = 3 + 5 = 8, which is greater than nums[1] = 4.
// nums[1] + nums[2] = 4 + 5 = 9, which is greater than nums[0] = 3. 
// Since the sum of the two sides is greater than the third side for all three cases, therefore, it can form a triangle.
// As all the sides are of different lengths, it will form a scalene triangle.
 

// Constraints:

// nums.length == 3
// 1 <= nums[i] <= 100
#include <stdio.h>
#include <stdbool.h>
int nums[3],i,j;
int temp, flag=3;

char* triangleType( int numsSize) {

for( i=1;i<=3;i++)
{
    printf("Enter [%d]th side", i);
    scanf("%d", &nums[i-1]);
}

}
int isTriangle()
{

        if(nums[0]+nums[1]>=nums[2])
        {
            flag=flag-1;

        }
        if(nums[1]+nums[2]>=nums[0])
        {
            flag=flag-1;


        }
        if(nums[0]+nums[2]>=nums[1])
        {
            flag=flag-1;


        }

        else
        {
            printf("Not a triangle");
            flag=0;
        }

  return flag;
}

void main(){

triangleType(3);

   if(flag>0)
   {
         if((nums[0]==nums[1])&& (nums[1]==nums[2]))
    {
        printf("\nEquilateral");
    }
    else if(nums[0]==nums[1])
    {
        printf("\nIsoceles");
    }
    else if(nums[1]==nums[2])
    {
        printf("\nIsoceles");
    }
    else if(nums[2]==nums[0])
    {
        printf("\nIsoceles");
    }
    else if((nums[0]!=nums[1])&& (nums[1]!=nums[2])&& (nums[2]!=nums[0]))
    {
        printf("\nScalene");
    }
    else
    {
    printf("\nNone");

 }
   }

else{
printf("Not a triangle");

}
}