#include "includes/ft_printf.h"

int         main (void) 
{
	ft_printf("==== c (int > char) ====\n\n");
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %c\n", 'z'), ft_printf("ftprintf : %c\n", 'z'));
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %c\n", ' '), ft_printf("ftprintf : %c\n", ' '));
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %c\n", '9'), ft_printf("ftprintf : %c\n", '9'));
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %c\n", '-'), ft_printf("ftprintf : %c\n", '-'));
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %c\n", '*'), ft_printf("ftprintf : %c\n", '*'));
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %c%c%c\n", '\0', '1' , 1), ft_printf("ftprintf : %c%c%c\n", '\0', '1' , 1));

    char *null = NULL;
	ft_printf("==== s (char > char *) ====\n\n");
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %s\n", "Hello World"), ft_printf("ftprintf : %s\n", "Hello World"));
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %s\n", "123456"), ft_printf("ftprintf : %s\n", "123456"));
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %s\n", "-/*=+ @!#$^&(){}[]|:,./<>"), ft_printf("ftprintf : %s\n", "-/*=+ @!#$^&(){}[]|:,./<>"));
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %s, %s\n", "-/a*=+g,./r<>c1 5", "Hello"), ft_printf("ftprintf : %s, %s\n", "-/a*=+g,./r<>c1 5", "Hello"));
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %s\n", null), ft_printf("ftprintf : %s\n", null));

    int test1 = 42;
	int *ptr = &test1;
	ft_printf("==== p (void * > hex) ====\n\n");
	ft_printf("     Int : %d\n", &test1);
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %p \n", &test1), ft_printf("ftprintf : %p \n", &test1));
	ft_printf("     Int : %d\n", &ptr);
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %p \n", &ptr), ft_printf("ftprintf : %p \n", &ptr));
	ft_printf("  String : 'Hello  World'\n");
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %p \n", "Hello World"), ft_printf("ftprintf : %p \n", "Hello World"));
	ft_printf("  String : %s\n", NULL);
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %p \n", NULL), ft_printf("ftprintf : %p \n", NULL));
	ft_printf("(void*)main : %d'\n", (void*)main);
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %p \n", (void*)main), ft_printf("ftprintf : %p \n", (void*)main));
	ft_printf("(void*)main : %d'\n", (void*)0x1234567890ABCDEF);
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %p \n", (void*)0x1234567890ABCDEF), ft_printf("ftprintf : %p \n", (void*)0x1234567890ABCDEF));

	ft_printf("==== d || i (int > dec) ====\n\n");
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %d\n", 'z'), ft_printf("ftprintf : %d\n", 'z'));
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %d\n", '8'), ft_printf("ftprintf : %d\n", '8'));
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %d\n", '-'), ft_printf("ftprintf : %d\n", '-'));
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %d\n", ' '), ft_printf("ftprintf : %d\n", ' '));

	ft_printf("==== u (uns > uns) ====\n\n");
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %u\n", '1'), ft_printf("ftprintf : %u\n", '1'));
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %u\n", 'a'), ft_printf("ftprintf : %u\n", 'a'));
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %u\n", '+'), ft_printf("ftprintf : %u\n", '+'));
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %u\n", ' '), ft_printf("ftprintf : %u\n", ' '));

	ft_printf("==== x (hex) & X (hex) ====\n\n");
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %x, %X\n", 48, 48), ft_printf("ftprintf : %x, %X\n", 48, 48));
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %x, %X\n", -2556, -2556), ft_printf("ftprintf : %x, %X\n", -2556, -2556));
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %x, %X\n", 0, 0), ft_printf("ftprintf : %x, %X\n", 0, 0));
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %x, %X\n", 125789, 125789), ft_printf("ftprintf : %x, %X\n", 125789, 125789));

	ft_printf("==== print percentage ====\n\n");
	printf("Return ft_printf: %d  |  Return printf: %d \n\n", printf("  printf : %%\n"), ft_printf("ftprintf : %%\n"));

	printf("=========================\n");
	printf("%10s", "HA");
}
