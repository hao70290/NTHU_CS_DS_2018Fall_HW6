# NTHU_CS_DS_2018Fall_HW6
Implement a hash table for strings.

## Implementation
### Functions
add:  
Given a string, insert the string into the hash table according to hash function. If the given string already exists in the hash table, do nothing.  
delete:  
Delete a given string from the hash table. If the given string does not exist in the hash table, do nothing.  
exist:  
Check whether a given string exists in the hash table.  

### Hash Function
The hash function maps an input string to an integer in the range [0,40]. In this homework, you need to transform each string into a 13331-based (13331進位) integer and modulo 41. Each digit of the given string is defined by its ASCII code (https://zh.wikipedia.org/wiki/ASCII).  
For example, give the string “abcde”, the corresponding ASCII code is 97 98 99 100 101”, and the hash value is computed as:  
(101+100*13331^1+99*13331^2+98*13331^3+97*13331^4) mod 41 = 19  
HINT: Computing the value directly would cause an overflow. Please refer to the modulo multiplication and modulo addition.

## Input
A sequence of commands consisting “add”, “exist”, “delete” and “print”. Commands “add”, “exist” and “delete” will be followed by a string. For example, “add abcd” means adding the string “abcd” into the hash table, and “exist bcde” means checking whether the string “bcde” exists in the hash table. Each string contains at most 10 alphabetical characters (‘a-zA-Z’).  
Command “print” outputs every element in the hash table. The print function has been defined and implemented in the header file.

## Output
When command “exist” is called, output “exist” if the given string exists in the hash table. Otherwise, output “not exist”.    When command “print” is called, print every element in the hash table. The format to print is defined in the header file.

## Keywaords
NTHU, DS, Data Structure, Homework, Hash Table.

## Reference
http://140.114.86.238/problem/12097/

## Note
The hash function may change, so be careful. Don't just copy it. It will be wrong.
