
/* 
 * CS:APP Bitbasher Project 
 * 
 * <Please put your name and userid here>
 * 
 * bits.c - Source file with your solutions to the project.
 *          
 *
 * WARNING: Do not include the <stdio.h> header; it confuses the dlc
 * compiler. You can still use printf for debugging without including
 * <stdio.h>, although you might get a compiler warning. In general,
 * it's not good practice to ignore compiler warnings, but in this
 * case it's OK.  
 */

#if 0
/*
 * Instructions to Students:
 *
 * STEP 1: Read the following instructions carefully.
 *

You will create your solution to the Bitbasher Project  by
editing the collection of functions in this source file.

INTEGER CODING RULES:
 
  Replace the "return" statement in each function with one
  or more lines of C code that implements the function. Your code 
  must conform to the following style:
*/
  int Funct(arg1, arg2, ...) {
      /* brief description of how your implementation works */
      int var1 ;
      ...
      int varM ;

      varJ = ExprJ;
      ...
      varN = ExprN;
      return ExprR;
  }

/*  Each "Expr" is an expression using ONLY the following:
  1. Integer constants 0 through 255 (0xFF), inclusive. You are
      not allowed to use big constants such as 0xffffffff.
  2. Function arguments and local variables (no global variables).
  3. Unary integer operations ! ~
  4. Binary integer operations & ^ | + << >>
    
  Some of the problems restrict the set of allowed operators even further.
  Each "Expr" may consist of multiple operators. You are not restricted to
  one operator per line.

  You are expressly forbidden to:
  1. Use any control constructs such as if, do, while, for, switch, etc.
  2. Define or use any macros.
  3. Define any additional functions in this file.
  4. Call any functions.
  5. Use any other operations, such as &&, ||, -, or ?:
  6. Use any form of casting.
  7. Use any data type other than int.  This implies that you
     cannot use arrays, structs, or unions.

 
  You may assume that your machine:
  1. Uses 2s complement, 32-bit representations of integers.
  2. Performs right shifts arithmetically.
  3. Has unpredictable behavior when shifting if the shift amount
     is less than 0 or greater than 31.


EXAMPLES OF ACCEPTABLE CODING STYLE:
   *
   * pow2plus1 - returns 2^x + 1, where 0 <= x <= 31
   */
  int pow2plus1(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     return (1 << x) + 1;
  }

  /*
   * pow2plus4 - returns 2^x + 4, where 0 <= x <= 31
   */
  int pow2plus4(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     int result = (1 << x);
     result += 4;
     return result;
  }

/* FLOATING POINT CODING RULES

For the problems that require you to implement floating-point operations,
the coding rules are less strict.  You are allowed to use looping and
conditional control.  You are allowed to use both ints and unsigneds.
You can use arbitrary integer and unsigned constants. You can use any arithmetic,
logical, or comparison operations on int or unsigned data.

You are expressly forbidden to:
  1. Define or use any macros.
  2. Define any additional functions in this file.
  3. Call any functions.
  4. Use any form of casting.
  5. Use any data type other than int or unsigned.  This means that you
     cannot use arrays, structs, or unions.
  6. Use any floating point data types, operations, or constants.


NOTES:
  1. Use the dlc (data lab checker) compiler (described in the handout) to 
     check the legality of your solutions.
  2. Each function has a maximum number of operations (integer, logical,
     or comparison) that you are allowed to use for your implementation
     of the function.  The max operator count is checked by dlc.
     Note that assignment ('=') is not counted; you may use as many of
     these as you want without penalty.
  3. Use the btest test harness to check your functions for correctness.
  4. Use the BDD checker to formally verify your functions
  5. The maximum number of ops for each function is given in the
     header comment for each function. If there are any inconsistencies 
     between the maximum ops in the writeup and in this file, consider
     this file the authoritative source.

 *
 * STEP 2: Modify the following functions according the coding rules.
 * 
 *   IMPORTANT. TO AVOID GRADING SURPRISES:
 *   1. Use the dlc compiler to check that your solutions conform
 *      to the coding rules.
 *   2. Use the BDD checker to formally verify that your solutions produce 
 *      the correct answers.
 */


#endif
/* Copyright (C) 1991-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */
/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */
/* wchar_t uses Unicode 10.0.0.  Version 10.0 of the Unicode Standard is
   synchronized with ISO/IEC 10646:2017, fifth edition, plus
   the following additions from Amendment 1 to the fifth edition:
   - 56 emoji characters
   - 285 hentaigana
   - 3 additional Zanabazar Square characters */
/* 
 * f2301 - return 1 if x == y, and 0 otherwise 
 *   Examples: f2301(5,5) = 1, f2301(4,5) = 0
 *   Legal ops: ! ^ 
 *   Max ops: 2
 *   Rating: 2
 */
int f2301(int x, int y) {
  return null;
}
/* 
 * f2302 - Check whether x is nonzero 
 *   Examples: f2302(3) = 1, f2302(0) = 0
 *   Legal ops: ~ & | + >>
 *   Max ops: 5
 *   Rating: 4 
 */
int f2302(int x) {
  return null;
}
/* 
 * f2303 - /* if x <= y  then return 1, else return 0 */ 
// *   Example: f2303(4,5) = 1.
// *   Legal ops: ! ~ & ^ | + >>
// *   Max ops: 13
// *   Rating: 3

int f2303(int x, int y) {
  return null;
}
/* 
 * f2304 - if x > y  then return 1, else return 0 
 *   Example: f2304(4,5) = 0, f2304(5,4) = 1
 *   Legal ops: ! ~ & ^ | + >>
 *   Max ops: 12
 *   Rating: 3
 */
int f2304(int x, int y) {
  return null;
}
/* 
 * f2305 - return 1 if x < 0, return 0 otherwise 
 *   Example: f2305(-1) = 1.
 *   Legal ops: & >>
 *   Max ops: 2
 *   Rating: 2
 */
int f2305(int x) {
  return null;
}
/*
 * f2306 - return 1 if 0x30 <= x <= 0x39 
 * These are the ASCII codes for characters '0' to '9'
 *   Example: f2306(0x35) = 1.
 *            f2306(0x3a) = 0.
 *            f2306(0x05) = 0.
 *   Legal ops: ! ~ | + >>
 *   Max ops: 7
 *   Rating: 3
 */

int f2306(int x) {
  return null;
  
}
/* 
 * f2307 - return 1 if x can be represented as a 
 *   16-bit, two's complement integer.
 *   Examples: f2307(33000) = 0, f2307(-32768) = 1
 *   Legal ops: ! ^  >>
 *   Max ops: 4
 *   Rating: 1
 */
int f2307(int x) {
  return null;
}
/* 
 * f2308 - return x -> y in propositional logic - 0 for false, 1
 * for true. (->)  is called implication in propositional logic
 * A ->  B is false when A is true and B is false, 
 * and it is true in all other cases. 
 *   Example: f2308(1,1) = 1
 *            f2308(1,0) = 0
 *   Legal ops: ! ~ ^ |
 *   Max ops: 2
 *   Rating: 2
 */
int f2308(int x, int y) {
  return null;
}
/* 
 * f2309 - Return bit-level equivalent of expression (int) f
 *   for floating point argument f.
 *   Argument is passed as unsigned int, but
 *   it is to be interpreted as the bit-level representation of a
 *   single-precision floating point value.
 *   Anything out of range (including NaN and infinity) should return
 *   0x80000000u.
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 13
 *   Rating: 4
exp = (uf >> 23) & 0xff;
 */
int f2309(unsigned uf) {
  return null;
}
/*
 * f2310 - return floor(log base 2 of x), where x > 0
 *   Example: f2310(16) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 27
 *   Rating: 4
 */
int f2310(int x) {
  return null;
}
/* 
 * f2311 - Extract byte n from word x
 *   Bytes numbered from 0 (LSB) to 3 (MSB)
 *   Examples: f2311(0x12345678,1) = 0x56
 *   Legal ops: & << >>
 *   Max ops: 3
 *   Rating: 2
 */
int f2311(int x, int n) {
  return null;
}
/* 
 * f2312 - Return bit-level equivalent of absolute value of f for
 *   point argument f.
 *   Both the argument and result are passed as unsigned int's, but
 *   they are to be interpreted as the bit-level representations of
 *   single-precision floating point values.
 *   When argument is NaN, return argument..
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 4
 *   Rating: 2
 */
unsigned f2312(unsigned uf) {
  return null;
}
/* 
 * f2313 - return a mask that marks the position of the
 *               most significant 1 bit. If x == 0, return 0
 *   Example: f2313(96) = 0x40
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 4 
 */
int f2313(int x) {
  return null;
}
/* 
 * f2314 - Return bit-level equivalent of expression -f for
 *   floating point argument f.
 *   Both the argument and result are passed as unsigned int's, but
 *   they are to be interpreted as the bit-level representations of
 *   single-precision floating point values.
 *   When argument is NaN, return argument.
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 5
 *   Rating: 2
 */
unsigned f2314(unsigned uf) {
    return null;
}
/* 
 * f2315 - return word with all odd-numbered bits set to 1
 *   Legal ops: | << 
 *   Max ops: 4
 *   Rating: 2
 */
int f2315(void) {
  return null;
}
/*
 * f2316 - if x < y  then return 1, else return 0 
 *   Example: f2316(4,5) = 1.
 *   Legal ops: ! ~ & ^ | + >>
 *   Max ops: 12
 *   Rating: 3
 */
int f2316(int x, int y) {
  return null;
}
/* 
 * f2317 - return 1 if x >= 0, return 0 otherwise 
 *   Example: f2317(-1) = 0.  f2317(0) = 1.
 *   Legal ops: ~ & >>
 *   Max ops: 3
 *   Rating: 3
 */
int f2317(int x) {
  return null;
}
