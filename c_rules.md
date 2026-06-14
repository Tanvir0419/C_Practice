# C Programming Rules

## 1. Comments & New Lines
* For single line comment: `//`
* For multiple line comment: `/*` for starting and `*/` for ending
* `\n` for new line

## 2. Character Types
* `char (%c)` - (1 byte) - a, b, 1, 2
* `int (%d)` - (4 byte) - 1234
* `float (%f)` - (4 byte) - 1.2345
* `double (%lf)` - (8 byte) - 1.23456789
* For exact 4 digits after decimal, we have to point out like this: `%.4f`

## 3. Variables
* Keyword/function must be small letter and can't be used as variable name
* For `char` data type, variable should be inside single quotes ` ' ' `
* Variable name can't start from a digit (1number - X)
* For variable name, only `$` and `_` is valid to use
* No gap space is allowed in a variable name

## 4. Input & Output Functions
To ask a question or input an integer:
```c
int num;
printf("Enter a number: ");
scanf("%d", &num);
printf("You've pressed %d", num);

Input for multiple words using gets:
char name[50];
printf("Enter your name:");
gets(name);
printf("Hello,%s",name);

Using puts:
char name[50];
printf("Enter your name:");
gets(name);
printf("Hello,");
puts(name);

Using fgets for defining exactly how many characters:
char name[50];
printf("Enter your name:");
fgets(name, sizeof(name), stdin);
printf("Hello,%s", name);

getchar for single response by a word:
char word;
printf("Enter a word:");
word = getchar();
printf("You've entered:%c", word);

putchar:
char word;
printf("Enter a word:");
word = getchar();
printf("You've entered:");
putchar(word);
```

## 5. Arithmetic & Math Operators
ASCII value of A is 65 and a is 97. Difference is 32.

Use %x for hex and %o for octal.

% is for leftover (modulus).

Absolute: abs

Square root: sqrt

Log: log

Exponential: exp

X raised to the power Y: pow(5,2) which is mainly 5^2

Round figure: round

Remove decimal part: trunc

Upper integer: ceil

Lower integer: floor

## 6. Assignment & Unary Operators
x+=5 is the same as x=x+5 (same logic for -, *, /, %)

++x to increment x by one BEFORE it is used

x++ to increment x by one AFTER it is used (same for decrement)

## 7. Relational & Conditional Operators
>,>=,<,<=,==,!=
if, else statement should be inside{} for not rechecking below if condition is already met.

## 8. Logical Operator
&& = Logical AND
|| = Logical OR
!  = Logical NOT


