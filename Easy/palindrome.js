/*
Given a string s which consists of lowercase or uppercase letters, return the length of the longest 
palindrome
 that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome.

 

Example 1:

Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
Example 2:

Input: s = "a"
Output: 1
Explanation: The longest palindrome that can be built is "a", whose length is 1.
*/

//Solution

var longestPalindrome = function (s) {
  let array = s.split("");
  let flag = 0;
  let n = array.length;

  for (let a = 0; a < n; a++) {
    if (
      n % 2 === 0 &&
      ((array[a] === array[n - a]) === array[a + 1]) === array[a + 2]
    ) {
      flag = array.length;
    }
  }

  if (n === 1) {
    flag = 1;
  } else {
    //problem statement - we need to find similar characters , if no. of similar characters = 1 , 2 ,4 6, 8, 10 etc
    for (let i = 0; i < n; i++) {
      for (let j = i + 1; j < n; j++) {
        if (array[i] === array[j]) {
          flag += 1;
        }
      }
    }
  }
  return flag;
};
