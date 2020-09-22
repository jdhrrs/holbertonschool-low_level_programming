# 0x01. C - Variables, if, else, while

## Learning Objectives

- What are the arithmetic operators and how to use them
- What are the logical operators (sometimes called boolean operators) and how to use them
- What the the relational operators and how to use them
- What values are considered TRUE and FALSE in C
- What are the boolean operators and how to use them
- How to use the if, if ... else statements
- How to use comments
- How to declare variables of types char, int, unsigned int
- How to assign values to variables
- How to print the values of variables of type char, int, unsigned int with printf
- How to use the while loop
- How to use variables with the while loop
- How to print variables using printf
- What is the ASCII character set
- What are the purpose of the gcc flags -m32 and -m64

## Requirements

- All files are created and compiled on Ubuntu 14.04.4 LTS using gcc 4.8.4
- All files are linted for syntax and style with [Betty](https://github.com/holbertonschool/Betty)

## Tasks

<details>
<summary>View Contents</summary>

### [0. Positive anything is better than negative nothing](./0-positive_or_negative.c)

- This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative
-520693284 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative
-973398895 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative
-199220452 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative
266853958 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative
-48147767 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative
0 is zero
```

### [1. The last digit](./1-last_digit.c)

- This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of 629438752 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of -748255693 is -3 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of -1052791662 is -2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of 491506926 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of 954249937 is 7 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of 652334952 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of 809065140 is 0 and is 0
```

### [2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](./2-print_alphabet.c)

- Write a program that prints the alphabet in lowercase, followed by a new line.
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - You can only use putchar twice in your code

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 2-print_alphabet.c -o 2-print_alphabet
julien@ubuntu:~/0x01$ ./2-print_alphabet
abcdefghijklmnopqrstuvwxyz
```

### [3. When I was having that alphabet soup, I never thought that it would pay off](./4-print_alphabt.c)

- Write a program that prints the alphabet in lowercase, followed by a new line.
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - You can only use putchar three times in your code

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 3-print_alphabets.c -o 3-print_alphabets
julien@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
```

### [4. alphABET](./3-print_alphabets.c)

- Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
  - Print all the letters except q and e
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - You can only use putchar twice in your code

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 4-print_alphabt.c -o 4-print_alphabt
julien@ubuntu:~/0x01$ ./4-print_alphabt
abcdfghijklmnoprstuvwxyz
julien@ubuntu:~/0x01$ ./4-print_alphabt | grep [eq]
```

### [5. Numbers](./5-print_numbers.c)

- Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 5-print_numbers.c -o 5-print_numbers
julien@ubuntu:~/0x01$ ./5-print_numbers
0123456789
```

### [6. Numberz](./6-print_numberz.c)

- Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
  - You are not allowed to use any variable of type char
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - You can only use putchar twice in your code

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
julien@ubuntu:~/0x01$ ./6-print_numberz
0123456789
```

### [7. Smile in the mirror](./7-print_tebahpla.c)

- Write a program that prints the lowercase alphabet in reverse, followed by a new line.
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - You can only use putchar twice in your code

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
```

### [8. Hexadecimal](./8-print_base16.c)

- Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - You can only use putchar three times in your code

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
```

### [9. Patience, persistence and perspiration make an unbeatable combination for success](./9-print_comb.c)

- Write a program that prints all possible combinations of single-digit numbers.
  - Numbers must be separated by ,, followed by a space
  - Numbers should be printed in ascending order
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - You can only use putchar four times maximum in your code
  - You are not allowed to use any variable of type char

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
```

### [10. 00...99](./10-print_comb2.c)

- Write a program that prints the numbers from 00 to 99.
  - Numbers must be separated by ,, followed by a space
  - Numbers should be printed in ascending order, with two digits
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - You can only use putchar five times maximum in your code
  - You are not allowed to use any variable of type char

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 10-print_comb2.c -o 10-print_comb2
julien@ubuntu:~/0x01$ ./10-print_comb2
00, 01, 02, 03, 04, 05, 06, 07, 08, 09, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99
```

### [11. Inventing is a combination of brains and materials. The more brains you use, the less material you need](./100-print_comb3.c)

- Write a program that prints all possible different combinations of two digits.
  - Numbers must be separated by ,, followed by a space
  - The two digits must be different
  - 01 and 10 are considered the same combination of the two digits 0 and 1
  - Print only the smallest combination of two digits
  - Numbers should be printed in ascending order, with two digits
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - You can only use putchar five times maximum in your code
  - You are not allowed to use any variable of type char

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 100-print_comb3.c -o 100-print_comb3
julien@ubuntu:~/0x01$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
```

### [12. The success combination in business is: Do what you do better... and: do more of what you do...](./101-print_comb4.c)

- Write a program that prints all possible different combinations of three digits.
  - Numbers must be separated by ,, followed by a space
  - The three digits must be different
  - 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
  - Print only the smallest combination of three digits
  - Numbers should be printed in ascending order, with three digits
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - You can only use putchar six times maximum in your code
    You are not allowed to use any variable of type char

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 101-print_comb4.c -o 101-print_comb4
julien@ubuntu:~/0x01$ ./101-print_comb4
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
```

### [13. Software is eating the World](./102-print_comb5.c)

- Write a program that prints all possible combinations of two two-digit numbers.
  - The numbers should range from 0 to 99
  - The two numbers should be separated by a space
  - All numbers should be printed with two digits. 1 should be printed as 01
  - The combination of numbers must be separated by comma, followed by a space
  - The combinations of numbers should be printed in ascending order
  - 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - You can only use putchar eight times maximum in your code
  - You are not allowed to use any variable of type char

```
julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x01$ gcc -Wall -pedantic -Werror -Wextra 102-print_comb5.c -o 102-print_comb5
julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x01$ ./102-print_comb5
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
```

</details>

## Author

- **Tu Vo** - [tuvo1106](https://github.com/tuvo1106)
