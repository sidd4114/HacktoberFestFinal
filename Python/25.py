'''
A word is considered valid if:

It contains a minimum of 3 characters.
It contains only digits (0-9), and English letters (uppercase and lowercase).
It includes at least one vowel.
It includes at least one consonant.
You are given a string word.

Return true if word is valid, otherwise, return false.

Notes:

'a', 'e', 'i', 'o', 'u', and their uppercases are vowels.
A consonant is an English letter that is not a vowel.
 

Example 1:

Input: word = "234Adas"

Output: true

Explanation:

This word satisfies the conditions.

Example 2:

Input: word = "b3"

Output: false

Explanation:

The length of this word is fewer than 3, and does not have a vowel.

Example 3:

Input: word = "a3$e"

Output: false

Explanation:

This word contains a '$' character and does not have a consonant.

 

Constraints:

1 <= word.length <= 20
word consists of English uppercase and lowercase letters, digits, '@', '#', and '$'.
'''
class Solution(object):
    def isValid(self, word):
        """
        :type word: str
        :rtype: bool
        """
        vowel=['a','e','i','o','u','A','E','I','O','U']
        cons=['b','c','d','g','f','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z']
        digit=['0','1','2','3','4','5','6','7','8','9']
        if len(word)<=3:
            return False
        for i in word:
            if i in vowel:
                pass
            if i in cons:
                pass
            if i in digit:
                return True
            else:
                return False
        
        
obj=Solution()

i1="234Adas"
i2="b3"
i3="a3$e"
print(obj.isValid(i1))
print(obj.isValid(i2))
print(obj.isValid(i3))        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        