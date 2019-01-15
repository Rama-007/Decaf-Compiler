# decaff-compiler-Rama-007

## File Structure
- src
  - Makefile : 
    - use "make" to run
  - parser.ypp : 
    - For Reading the code from a file and Creating nodes of AST tree
  - scanner.l : 
    - Return tokens to the parser file one by one
  - ast.h : 
    - contains all the class and method declarations.
    - Code for AST tree traversal using visitor design pattern
  - ast.cpp
    - Code for all the methods are written here.
    - GenCode functions used to create LLVM-IR
    - All the semantic errors are handled

- test-programs
  - 12 decaf programs, outputs for some are in sample output section.
  - arraysum.dcf : prints sum of all the elements in an array.
  - bubble.dcf : sorts array using bubble sort algorithm.
  - fact.dcf : Factorial of a number.
  - fib.dcf : nth fibonacci number.
  - hanoi.dcf : towers of hanoi.
  - linear.decf : prints if an element is found in an array or not.
  - maxmin.dcf : prints max and min element of an array.
  - netmax.dcf : prints the second largest element in an array.
  - sumn.dcf : print sum of first n elements.
  - vecadd.dcf : Outputs the sum of two vectors.

## How to run
- make
- ./parser inputfile
- lli outfile


## Description
The grammar is written without have any shift/reduce or reduce/reduce conflicts. The main code is in parser.ypp file. In this main function we first do yyparse(). In yyparse() the creation of AST, checking semantic errors. After that, dfs is done whose code is written in ast.h. Dfs is done using the visitor design pattern. Then after, LLVM-IR code is generated using generate code methods written for various classes. The LLVM-IR output is written in outfile. We can lli interpreter to run the outfile.

## Output for Test Programs
### arraysum.dcf
```
starkholmes@Stark-Holmes:/home/ramarohit/Documents/4-1/compilers/parser/final$ ./parser test-programs/arraysum.dcf 

Parsing Over
Semantics checked
Generating LLVM IR Code
starkholmes@Stark-Holmes:/home/ramarohit/Documents/4-1/compilers/parser/final$ lli outfile 
Enter the size of vectors: Enter the elements in the vector: 
The sum of given vector is : 4950
```
### bubble.dcf
```
starkholmes@Stark-Holmes:/home/ramarohit/Documents/4-1/compilers/parser/final$ ./parser test-programs/bubble.dcf 
Parsing Over
Semantics checked
Generating LLVM IR Code
starkholmes@Stark-Holmes:/home/ramarohit/Documents/4-1/compilers/parser/final$ lli outfile 
Enter the size of vectors: Enter the elements in the first vector: 
The final sorted order  is : 
1 2 3 4 5 6 7 8 9 10 
```
### quick_sort.dcf
```
starkholmes@Stark-Holmes:/home/ramarohit/Documents/4-1/compilers/parser/final$ ./parser test-programs/qsort.dcf 
Parsing Over
Semantics checked
Generating LLVM IR Code
starkholmes@Stark-Holmes:/home/ramarohit/Documents/4-1/compilers/parser/final$ lli outfile 
sorted array : 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 
 ```
### fib.dcf
```
starkholmes@Stark-Holmes:/home/ramarohit/Documents/4-1/compilers/parser/final$ ./parser test-programs/fib.dcf 
Parsing Over
Semantics checked
Generating LLVM IR Code
starkholmes@Stark-Holmes:/home/ramarohit/Documents/4-1/compilers/parser/final$ lli outfile 
Entered number: 10
Given fibonacci number is: 
55
```
### fact.dcf
```
starkholmes@Stark-Holmes:/home/ramarohit/Documents/4-1/compilers/parser/final$ ./parser test-programs/fact.dcf 
Parsing Over
Semantics checked
Generating LLVM IR Code
starkholmes@Stark-Holmes:/home/ramarohit/Documents/4-1/compilers/parser/final$ lli outfile 
Enter the number: 10 
Factorial of given number is: 362880
```
### gcd.dcf
```
starkholmes@Stark-Holmes:/home/ramarohit/Documents/4-1/compilers/parser/final$ ./parser test-programs/gcd.dcf 
Parsing Over
Semantics checked
Generating LLVM IR Code

starkholmes@Stark-Holmes:/home/ramarohit/Documents/4-1/compilers/parser/final$ lli outfile 
gcd is 6
```



