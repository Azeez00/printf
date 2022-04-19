_printf()
This is a project created by Azeez Abdullah and Aisha Sowemimo. The _printf() is a function that works like the printf() function in C standard library which performs formatted output conversion and prints data to the standard output. _printf() imitiates some basic features and functions of printf() as found in the man 3 printf.

The prototype of the _printf() function is:

int _printf(const char *format, ...);

_printf() is a variadic function therefore it can receive n number of arguements passed inside the formatted string.

If successful, the total number of characters passed into the string is returned. On failure, a negative number is returned.

Parameters
format - This is the string that contains the text to be written to the standout output. Format can also contain format tags which are replaced by the values in the additonal arguements passed into it.

The format tags prototype is as follows:

%[flags][length]specifier

Specifier	Output
c	Character
d or i	Signed decimal integer
s	Strings of characters
b	Binary
u	Unsigned decimal integer
o	Signed octal
x	Unsigned hexadecimal integer
X	Unsigned hexadecimal integers capital letters
S	String with special characters replaced by ASCII value
p	Pointer address
%	Character
r	Prints a string in reverse
R	Prints the rot13'ed string
Flags	Description	Specifiers
+	Forces to precede the result with a plus or minus sign	i , d
#	Used with o,x or X specifiers. It prints 0, 0x and 0X for these specifiers respectively. By default if no digit follows, no decimal point is written.	o, x, X
(space)	prints a blank space if the arguement is a positive number	
Length	Description	Specifier
l	Conversion of integer specifiers into long int and unsigned long int	d, i, o, u, x, X
h	Conversion of integer specifiers into short int and unsigned short int	d, i, o, u, x, X
Return Value
The function returns the total number of characters passed into the format (Success). Otherwise, a negative number is returned.

Examples
Using _printf() to print "Hello World":
_printf("Hello World\n"); Output: Hello World

Using _printf() to print character, string and integer:
_printf("%d + %d equals %c%s", 18, 2, 'T', "wenty\n"); Output: 18 + 2 equals Twenty

Using _printf() to print hexadecimals
_printf("255 in hexadecimal = %x\n", 255); Output: 255 in hexadecimal = ff

Files
_print()
A funtion that prints all the strings passed into it in the standard library.

main.h
This is a header file that contains all the prototypes of all the functions created.
