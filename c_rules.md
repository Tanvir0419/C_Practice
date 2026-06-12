**Comment**
1. for single line comment //
2. for multiple line comment, /* for starting and */ for ending
**new line**
1. \n for new line
**character type**
1. char(%c)-(1byte)- a,b,1,2 | int(%d)-(4byte)- 1234 | float(%f)-(4byte)-1.2345 | double(%lf)-(8byte)-1.23456789
2. for exact 4 digit after decimal we have to point out like this %.4f
3. keyword/function must be small letter and can't be used as variable name
4. for char data type variable should be inside ' '
**variable**
1. variable name can't start from digit (1number - X)
2. for variable name only $ and _ is valid to use
3.  no gap space is allowed in variable name
4.  to ask question or a input
`int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You've pressed %d", num);`
**input**
*for multiple word*
gets
    `char name[50];
    printf("Enter your name:"):
    gets(name);
    printf("Hello,%s",name);`
    or
puts
    `char name[50];
    printf("Enter your name:");
    gets(name);
    printf("Hello,");
    puts(name);`
fgets for defining how many character
    `char name[50];
    printf("Enter your name:");
    fgets(name, sizeof(name), stdin);
    printf("Hello,%s", name);`
getchar for single response by a word
    `char word;
    printf("Enter a word:");
    word = getchar();
    printf("You've entered:%c", word);`
putchar
    `char word;
    printf("Enter a word:");
    word = getchar();
    printf("You've entered:");
    putchar(word);`
1.  ASCII value of A is 65 and a is 97. Difference is 32
2.  for hex (%x) and for oct (%o)
**arithmetic operator**
1.  % for leftover
2.  X=Y -----X==Y    √(b² - 4ac)/2a -----sqrt(b*b-4*a*c)/2*a
**math**
1.  absolute : abs
    square root : sqrt
    log : log
    exponential : exp
    x raised to the power y : pow(5,2) which is mainly 5^2
    round figure : round
    remove decimal part : trunc
    upper integer : ceil
    lower integer : floor
**assignment operator**
1.  x+=5 ----- x=x+5 ( same for -, *, /, %)
**unary operator**
1. ++x to increment x by one before it is used
2. x++ to increment x by one after it is used
(same for decrement)
**relation operator**
1. >, >=, <, <=, ==, !=
**conditional control statement- if else**
start from 5.67


