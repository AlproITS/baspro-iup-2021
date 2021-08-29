# Problem sets for the first week

## FizzBuzzNoLoop
### Problem Statement
| Expected Runtime  | Memory Limit  |
| ----------------  | ------------- |
|    1 ms   |   |
#### Description
  Doe is a first-year student of Informatics, ITS. One day, he applied for an internship position at FUND Corp. as a Software Engineer there. During the selection process, his coding skills were tested. Unfortunately, he had difficulties solving a problem and was given a chance to contact a friend to help him. Doe decided to ask for your help. Write a program so that Doe can be accepted!
  
  The program will receive a single integer, n, as an input. Then based on n's value, it will output: 'Fizz' if n is divisible by 3, 'Buzz' if n is divisible by 5, both as 'FizzBuzz' if n is divisible by 3 and 5, or simply print out n if it is not divisible by either 3 or 5.
#### Input Format
  A single integer (n) as described in the problem description.
#### Output Format
  Print either:
  * 'Fizz' if n is divisible by 3,
  * 'Buzz' if n is divisible by 5,
  * 'FizzBuzz' if n is divisible by 3 and 5,
  * else n if neither.
#### Example
* Input 0
  <pre>
    1
  </pre>
* Output 0
  <pre>
    1
  </pre>
* Input 1
  <pre>
    3
  </pre>
* Output 1
  <pre>
    Fizz
  </pre>
* Input 2
  <pre>
    15
  </pre>
* Output 2
  <pre>
    FizzBuzz
  </pre>
#### Constraints
0 < n < 2,147,483,647



## Ganesis and Pillars
#### Descriptions
  "Why are we still here? just to suffer?", said a man once. This is a tale of "B", just a boy. He is a trainee of martial arts in his little town "MSF". He is hoping to one day roam the world and more. A part of his training is to jump between pillars in MSF. There are exactly 5 pillars, namely A, Bee, C, D, and E. They are ordered from left to right with A as the first pillar, and E as the last pillar. The pillars are identical in height, but the distance between one pillar to the next pillar may vary. He must jump from the first pillar to the last pillar one pillar at a time. B has a maximum jump distance of n. He can jump from one pillar to the next if the distance is not greater than B's maximum jump distance. Help B to determine whether he can clear this challenge or not. If he can print "YES HE CAN" without the quotation marks. If he fails, print "NO HE CAN'T" without the quotation marks.
  
#### Input Format
  A single line containing n , the distance of A to Bee, Bee to C, C to D, and D to E.

#### Output Format
  If he can print "YES HE CAN" without the quotation marks. If he fails, print "NO HE CAN'T" without the quotation marks.
 
#### Example
  * Input 0
  <pre>
    1 1 1 1 1
  </pre>
* Output 0
  <pre>
    YES HE CAN
  </pre>
* Input 1
  <pre>
    2 2 2 3 2
  </pre>
* Output 1
  <pre>
    NO HE CAN'T
  </pre>
* Input 2
  <pre>
    2 2 1 1 2
  </pre>
* Output 2
  <pre>
    YES HE CAN
  </pre>
  
#### Constraints
1 < n <= 2,147,483,647
