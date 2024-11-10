#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
void	test_is_functions(void);
void	test_strlen(void);
void	test_mem_functions(void);
void	test_str_functions(void);
void	test_atoi_calloc_strdup(void);

int	main(void)
{
	test_is_functions();
	test_strlen();
	test_mem_functions();
	test_str_functions();
	test_atoi_calloc_strdup();
	return (0);
}

void	test_is_functions(void)
{
	printf("isalpha('A'): %d\n", isalpha('A'));
	printf("isdigit('9'): %d\n", isdigit('9'));
	printf("isalnum('A'): %d\n", isalnum('A'));
	printf("isascii(128): %d\n", isascii(128));
	printf("isprint(' '): %d\n", isprint(' '));
}

void	test_strlen(void)
{
	printf("strlen(\"hello\"): %zu\n", strlen("hello"));
}

void	test_mem_functions(void)
{
	char	buffer[50];
	char	src[] = "memcpy test";
	char	dest[50];

	memset(buffer, 'A', sizeof(buffer));
	printf("memset: %s\n", buffer);
	bzero(buffer, sizeof(buffer));
	printf("bzero: %s\n", buffer);
	memcpy(buffer, src, sizeof(src));
	printf("memcpy: %s\n", buffer);
	memmove(buffer + 5, buffer, 5);
	printf("memmove: %s\n", buffer);
	strlcpy(dest, "strlcpy test", sizeof(dest));
	printf("strlcpy: %s\n", dest);
	strlcat(dest, " append", sizeof(dest));
	printf("strlcat: %s\n", dest);
}

void	test_str_functions(void)
{
	char	*s;

	printf("toupper('a'): %c\n", toupper('a'));
	printf("tolower('A'): %c\n", tolower('A'));
	s = "hello";
	printf("strchr: %s\n", strchr(s, 'e'));
	printf("strrchr: %s\n", strrchr(s, 'l'));
	printf("strncmp(\"hello\", \"world\", 3): %d\n", strncmp("hello", "world",
			3));
	printf("memchr(\"hello\", 'e', 5): %s\n", (char *)memchr("hello", 'e', 5));
	printf("memcmp(\"hello\", \"hello\", 5): %d\n", memcmp("hello", "hello",
			5));
	printf("strnstr(\"hello world\", \"world\", 11): %s\n",
		strnstr("hello world", "world", 11));
}

void	test_atoi_calloc_strdup(void)
{
	int		*arr;
	char	*dup;

	printf("atoi(\"123\"): %d\n", atoi("123"));
	arr = (int *)calloc(5, sizeof(int));
	if (arr)
	{
		printf("calloc: ");
		for (int i = 0; i < 5; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
		free(arr);
	}
	dup = strdup("strdup test");
	if (dup)
	{
		printf("strdup: %s\n", dup);
		free(dup);
	}
}
