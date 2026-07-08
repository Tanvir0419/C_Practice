# C Programming Rules

## 1. Comments & New Lines
- For single line comment: `//`
- For multiple line comment: `/*` for starting and `*/` for ending
- `\n` for new line
- `\t` for space
- Quote inside double quotation= '("Hello \"World\");'

## 2. Character Types
- `char (%c)` - (1 byte) - a, b, 1, 2
- `int (%d)` - (4 byte) - 1234
- `float (%f)` - (4 byte) - 1.2345 (upto 6 digit after decimal point)
- `double (%lf)` - (8 byte) - 1.23456789 (upto 15 digit after decimal point)
- For exact 4 digits after decimal, we have to point out like this: `%.4f`

## 3. Variables
- Keyword/function must be small letter and can't be used as variable name
- For `char` data type, variable should be inside single quotes ` ' ' `
- Variable name can't start from a digit (1number - X)
- For variable name, only `_` is valid to use
- No gap space is allowed in a variable name
- [TRAP] Always initialize variables (e.g., int sum = 0;). If you leave it blank, C assigns random "garbage" memory values and ruins your math

## 4. Input & Output Functions
- [TRAP] Always use the address-of operator (&) inside scanf for standard variables. Forgetting it causes a silent runtime crash

```c
- To ask a question or input an integer:
int num;
    printf("Enter a number: ");
scanf("%d", &num);
    printf("You've pressed %d", num);

- Input for multiple words using gets (unsafe):
char name[50];
    printf("Enter your name:");
gets(name);
    printf("Hello,%s",name);

- Using puts (unsafe):
char name[50];
    printf("Enter your name:");
gets(name);
    printf("Hello,");
puts(name);

- Using fgets(safe) for defining character limitation:
char name[50];
    printf("Enter your name:");
fgets(name, sizeof(name), stdin);
    printf("Hello,%s", name);

- getchar for single response by a character (input):
char character;
    printf("Enter a character:");
character = getchar();
    printf("You've entered:%c", character);

- putchar (output):
char character;
    printf("Enter a character:");
character = getchar();
    printf("You've entered:");
putchar(character);
```

## 5. Arithmetic Operator
- ASCII value of A is 65 and a is 97. Difference is 32. [TRAP] Do not use library functions for case conversion
- [TRAP] Integer Division: If you divide int by int (5/2), C drops the decimal and gives 2. Make one a float (5.0/2) to get 2.5
- Use %x for hex and %o for octal
- % is for leftover (modulus)

- Absolute: fabs
- Square root: sqrt
- Log: log
- Exponential: exp
- X raised to the power Y: pow(5,2) which is mainly 5^2

- Round figure: round
- Remove decimal part: trunc
- Upper integer: ceil
- Lower integer: floor

## 6. Assignment & Unary Operators
[TRAP]
- x+=5 is the same as x=x+5 (same logic for -, *, /, %)
- ++x to increment x by one BEFORE it is used
- x++ to increment x by one AFTER it is used (same for decrement)

## 7. Relational & Conditional Operators
- '>', '>=', '<', '<'=, '==', '!='
- ?(if true), :(else)
- if, else statement should be inside{} for not rechecking below if condition is already met.

## 8. Switch
- switch, case(else if), break, default(else)
- Expression used in switch must be inegral type
- [TRAP] Until a break statement is reached all the case will be execute
- Default block can be placed anywhere
- the statement written above cases are never executed

## 9. Logical Operator
- '&&' = Logical AND (Both side must be true)
- '||' = Logical OR (Atleast one side must be true)
- '!'  = Logical NOT
- [TRAP] Short-Circuiting: In (A && B), if A is False, C skips B entirely. In (A || B), if A is True, C skips B entirely

## 10.Bitwise Operator
- '&'= Bitwise AND
- '|' = Bitwise OR
- '^' = Bitwise ExOR
- '~' = Bitwise NOT
- '<<' = Left shift
- '>>' = Right shift

## 11.Loop
- [Trap] dont confuse between ; and ' inside loop function. always use ;
- Palindrome number= result same as main number
- Armstrong number = result each digit^3 same as main number
- for continuous lopp use while(1). 1 means true.
```c
- for
int i;
for(i=1;i<=5;i++)
{
    printf("%d",i);
}

- while
int i=1;
while(i<=5)
{
    printf("%d",i);
    i++;
}

- do while
int i=1;
do
{
    printf("%d",i);
    i++;
}
while(i<=5);
```
## 12.Statement
```c
- break and continue statement
int i;
for(i=1;i<20;i++)
{
if(i%3==0)
    continue;
    printf("%d",i);
if(i==10)
break;
}

- goto statement
int i=1;
starting:
    printf("%d",i);
    i++;
if(i<5)
    goto starting;
```






