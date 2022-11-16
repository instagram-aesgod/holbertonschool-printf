# **`_printf project`**


>Write your own `printf` function.

![enter image description here](https://www.google.com/url?sa=i&url=https%3A%2F%2Fgithub.com%2FJuanLopezS%2Fprintf&psig=AOvVaw1VGupqemdaKwFOM4r2JnK_&ust=1668680511105000&source=images&cd=vfe&ved=0CBAQjRxqFwoTCKCx57i9svsCFQAAAAAdAAAAABAE)


## Welcome
A rebuild of the standard `printf` function in C. Our project required a function capable of printing with the `%c`, `%s`, and `%%` specifiers to standard output. `printf` returns the number of characters printed. We were not asked to handle flag characters, field width, precision, or length. As you can see, this prototype is an implementation of the **printf standard function** and **variadic function** .  ## What is printf? "Writes the C string pointed by _format_ to the standard output ([stdout](http://www.cplusplus.com/stdout))"

## The Beast that is `printf`
It was really hard to imagine of reinventing a function in only 2 months of programmers, which took a decades to imagine.


### Examples

Character: printf("%c", 'A'); Output:: A

String: printf("%s", 'This is a string.'); Output: This is a string.


## Flowcharts


These 3 functions are the bases for this project:

 1. Printf: Is the frontend of all the algorithm, so is the prototype, and just receive the variables
 2. Handler: Is the controller for the string and the formats, and also does the counter for the numbers of bytes that are printing
 3. Percent handler: Compare a list of possible specifiers with the current pattern, and return the corresponding function

![enter image description](https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.javatpoint.com%2Fflowchart-in-c-programming-language&psig=AOvVaw2HPN45FgkhvsW9NFIYdrzZ&ust=1668680658641000&source=images&cd=vfe&ved=0CBAQjRxqFwoTCODV7v69svsCFQAAAAAdAAAAABAE)
![enter image description here](https://i.imgur.com/ouUh2G4.png) ![enter image description here](https://i.imgur.com/90TRtGH.png)

## Deployment

This project was basically in group of 2 but at the last minute my duo and I get seperated.

## Built With

* [GitHub](https://github.com/)
* [Draw.io](https://app.diagrams.net/)

# Project Requirements

-Allowed editors: vi, vim, emacs
-All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
-All your files should end with a new line
-A README.md file, at the root of the folder of the project is mandatory
-Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
-You are not allowed to use global variables
-No more than 5 functions per file
-In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we -won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
-The prototypes of all your functions should be included in your header file called main.h
-Don’t forget to push your header file
-All your header files should be include guarded
-Note that we will not provide the _putchar function for this project

### Prototype

#include "main.h"
```bash
int _printf(const char *format, ...);
```
### Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic *.c
```
### Return Value
* The number of characters printed.

## Contributor
[@kylian Vallier - Github](https://github.com/instagram-aesgod)

## License

This project is licensed under the Holberton School Software Engineering Program.

## Acknowledgments

* The Framework
* Cohort 19
