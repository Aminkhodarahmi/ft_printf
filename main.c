
#include <stdio.h>

int main(void)
{
	char c = 'a';
	char *str = "hello";
	int num = 42;
	unsigned int uns_num = 4294967295;
	void *ptr = &num;
	printf("Standard printf:\n");
	printf("Char: %c\nString: %s\nDecimal: %d\nUnsigned: %u\nPointer: %p\n", c, str, num, uns_num, ptr);
	printf("\nCustom ft_printf:\n");
	ft_printf("Char: %c\nString: %s\nDecimal: %d\nUnsigned: %u\nPointer: %p\n", c, str, num, uns_num, ptr);
	return 0;
}
