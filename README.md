# ft_printf

Project 42 school

Write a library that will mimic the original printf() in C

### Prototype
```bash
int ft_printf(const char *, ...);
```
### Functions autorized
* malloc and free
* write
* va_start, va_arg, va_copy, va_end
* library libft

## Run

Git clone and go to project directory :

```bash
git clone git@github.com:chrstnhu/ft_printf.git && cd ft_printf
```

Make :
```bash
make
```

Compile main with archive printf :
```bash
cc main.c libftprint.a
```
```bash
./a.out
```

## Implement
* %c Prints a single character
* %s Prints a string
* %p The void * pointer argument has to be printed in hexadecimal format
* %i Prints an integer in base 10
* %d Prints a decimal (base 10) number
* %u Prints an unsigned decimal (base 10) number
* %x Prints a number in hexadecimal (base 16) lowercase format
* %X Prints a number in hexadecimal (base 16) uppercase format
* %% Prints a percent sign

## How to

### %c or %% 
> Print charactere
```c
ssize_t write(int fd, const void *buf, size_t count);
```

### %s
> While loop of:
```c
ssize_t write(int fd, const void *buf, size_t count);
```

### %p
> Need to convert address to hex (base 16):
```c
hex = address % 16 + '0'
address /= 16;
```

### %i
> Need to convert address to hex (base 10):
```c
hex = address % 16 - 10 + 'a'
address /= 16;
```
### %d or %u
> Decimal:
```c
int number;
```
> Unsigned decimal:
```c
unsigned int number;
```
> Transform char into decimal with recursive:
```c
if (number < 10)
  print number : number + '0'
else
{
  function_recursive(number / 10)
  function_recursive(number % 10)
}
```

### %x or %X
> Lowercase format:
```c
char *symbol;

symbol = "0123456789abcdef"
```
> Uppercase format:
```c

char *symbol;

symbol = "0123456789ABCDEF"
```
> Print hex with recursive:
```c
if (number < 16)
  print : symbol[number]
else
{
  function_recursive(num / 16);
  function_recursive(num % 16);
}

```
