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




## Problem 3
## Simple Calculator
#### Descriptions
  Make a calculator please :)
  
#### Input Format
  A single line consisting of an integer, a mathematical sign (" +, -, /, * ") and another integer.

#### Output Format
  Print the answer according to the input.  
 
#### Example
* Input 0
  <pre>
   5 + 5
  </pre>
* Output 0
  <pre>
    10
  </pre>
* Input 1
  <pre>
   5 - 3
  </pre>
* Output 1
  <pre>
   2
  </pre>
* Input 2
  <pre>
    5 * 2
  </pre>
* Output 2
  <pre>
    10
  </pre>
* Input 3
  <pre>
    6 / 2
  </pre>
* Output 3
  <pre>
    3
  </pre>
  
#### Constraints
1 < n <= 2,147,483,647



## Dedibay and His Immortal Life
#### Descriptions

A long time ago, lived an old man called “Dedibay”. He lived alone in the middle of the savanna with no lover, children, neighbors, even humans around him. He sleeps and eats alone. He did his daily activity alone. He did that because he wanted to get an immortal life. When he was young, he went to Dukun. The Dukun gave the rules that Dedibay needs to do to live immortal. There are only two rules. First, Dedibay cannot live together with family, relatives, even with no neighbor. Second, Dedibay should only eat an equal amount of two foodstuffs.

The first rules had been fulfilled. However, Dedibay is having a problem with the second rule. Dedibay lives immortal, but his body and brain never stopped aging. The more Dedibay getting older, the slower his brain. Because of that, help Dedibay count his food to an equal amount to continue his immortal life. If the foodstuffs is only two and equal, print “YES! DEDIBAY CAN LIVE IMMORTAL” without quotation marks. If the foodstuff is not equal, print “NO! GOODBYE DEDIBAY, RIP” without the quotation marks.

#### Input Format
  A single integer (n) as foodstuff that you want to compare.
  
#### Output Format 
  If the foodstuff is only two and equal, print "YES! DEDIBAY CAN LIVE IMMORTAL" without the quotation marks. If the foodstuff is not equal, print "NO! GOODBYE DEDIBAY, RIP" without the quotation marks.
  
#### Example
  * Input 0
    <pre>
    1
    1
    </pre>
  * Output 0
    <pre>
    YES! DEDIBAY CAN LIVE IMMORTAL
    </pre>
  * Input 1
    <pre>
    2
    1
    </pre>
  * Output 1
    <pre>
    NO! GOODBYE DEDIBAY, RIP
    </pre>
    
 #### Constraints
1 < n <= 2,147,483,647


## Teacher, can you give me a grade?
### Description 
At a school, there is a teacher named Alex who is very good, he likes to give his students grades on the same day when they take their exams, but because too many people take exams, Alex is tired, help Alex by creating a program that can give grades


#### Input Format
  float variable;
  
  a float variable contains her/his grade
  
#### Output Format
  “A“ if the grade is 86.0 – 100
  
  “AB“ if the grade is 76.0 – 85.99
  
  “B“ if the grade is 66.0 – 75.99
  
  “BC“ if the grade is 61.0 – 65.99
  
  “C“ if the grade is 56.0 – 60.99
  
  “D“ if the grade is 41.0 – 55.99
  
  “E“ if the grade is 0.0 – 40.99 
  
#### Example
  * Input 0
    <pre>
    86.0
    </pre>
  * Output 0
    <pre>
    A
    </pre>
  * Input 1
    <pre>
    85.99
    </pre>
  * Output 1
    <pre>
    AB
    </pre>
    
