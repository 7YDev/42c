#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define RESET "\033[0m"

void test_char_functions(void)
{
    printf("\n=== Testing Character Functions ===\n");
    
    // Test isalpha
    
    printf("\nTesting ft_isalpha:\n");
    if (ft_isalpha('a') == isalpha('a') && 
        ft_isalpha('Z') == isalpha('Z') && 
        ft_isalpha('5') == isalpha('5') && 
        ft_isalpha(' ') == isalpha(' ') &&
        ft_isalpha(-1) == isalpha(-1) &&
        ft_isalpha(128) == isalpha(128))
        printf("ft_isalpha: %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_isalpha: %sNOT PASSED%s\n", RED, RESET);

    // Test isdigit
    printf("\nTesting ft_isdigit:\n");
    if (ft_isdigit('0') == isdigit('0') && 
        ft_isdigit('9') == isdigit('9') && 
        ft_isdigit('a') == isdigit('a') &&
        ft_isdigit(-1) == isdigit(-1) &&
        ft_isdigit(128) == isdigit(128))
        printf("ft_isdigit: %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_isdigit: %sNOT PASSED%s\n", RED, RESET);

    // Test isalnum
    printf("\nTesting ft_isalnum:\n");
    if (ft_isalnum('a') == isalnum('a') && 
        ft_isalnum('5') == isalnum('5') && 
        ft_isalnum(' ') == isalnum(' ') &&
        ft_isalnum(-1) == isalnum(-1) &&
        ft_isalnum(128) == isalnum(128))
        printf("ft_isalnum: %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_isalnum: %sNOT PASSED%s\n", RED, RESET);

    // Test isascii
    printf("\nTesting ft_isascii:\n");
    if (ft_isascii(127) == isascii(127) && 
        ft_isascii(0) == isascii(0) && 
        ft_isascii(128) == isascii(128) &&
        ft_isascii(-1) == isascii(-1))
        printf("ft_isascii: %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_isascii: %sNOT PASSED%s\n", RED, RESET);

    // Test isprint
    printf("\nTesting ft_isprint:\n");
    if (ft_isprint(' ') == isprint(' ') && 
        ft_isprint('~') == isprint('~') && 
        ft_isprint('\n') == isprint('\n') &&
        ft_isprint(-1) == isprint(-1) &&
        ft_isprint(128) == isprint(128))
        printf("ft_isprint: %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_isprint: %sNOT PASSED%s\n", RED, RESET);

    // Test toupper
    printf("\nTesting ft_toupper:\n");
    if (ft_toupper('a') == toupper('a') && 
        ft_toupper('Z') == toupper('Z') && 
        ft_toupper('5') == toupper('5') &&
        ft_toupper(-1) == toupper(-1) &&
        ft_toupper(128) == toupper(128))
        printf("ft_toupper: %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_toupper: %sNOT PASSED%s\n", RED, RESET);

    // Test tolower
    printf("\nTesting ft_tolower:\n");
    if (ft_tolower('A') == tolower('A') && 
        ft_tolower('z') == tolower('z') && 
        ft_tolower('5') == tolower('5') &&
        ft_tolower(-1) == tolower(-1) &&
        ft_tolower(128) == tolower(128))
        printf("ft_tolower: %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_tolower: %sNOT PASSED%s\n", RED, RESET);
}

void test_string_functions(void)
{
    printf("\n=== Testing String Functions ===\n");
    
    // Test strlen
    printf("\nTesting ft_strlen:\n");
    if (ft_strlen("Hello") == strlen("Hello") &&
        ft_strlen("") == strlen("") &&
        ft_strlen("A") == strlen("A") &&
        ft_strlen("\n\t\v\f\r") == strlen("\n\t\v\f\r"))
        printf("ft_strlen: %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_strlen: %sNOT PASSED%s\n", RED, RESET);

    // Test strchr
    printf("\nTesting ft_strchr:\n");
    char str[] = "Hello World!";
    if (ft_strchr(str, 'W') == strchr(str, 'W') &&
        ft_strchr(str, 'z') == strchr(str, 'z') &&
        ft_strchr(str, '\0') == strchr(str, '\0') &&
        ft_strchr("", 'x') == strchr("", 'x'))
        printf("ft_strchr: %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_strchr: %sNOT PASSED%s\n", RED, RESET);

    // Test strrchr
    printf("\nTesting ft_strrchr:\n");
    char str2[] = "Hello World!";
    if (ft_strrchr(str2, 'o') == strrchr(str2, 'o') &&
        ft_strrchr(str2, 'z') == strrchr(str2, 'z') &&
        ft_strrchr(str2, '\0') == strrchr(str2, '\0') &&
        ft_strrchr("", 'x') == strrchr("", 'x'))
        printf("ft_strrchr: %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_strrchr: %sNOT PASSED%s\n", RED, RESET);

    // Test strncmp
    printf("\nTesting ft_strncmp:\n");
    if ((ft_strncmp("Hello", "Hello", 5) == strncmp("Hello", "Hello", 5)) &&
        (ft_strncmp("Hello", "Hell", 5) == strncmp("Hello", "Hell", 5)) &&
        (ft_strncmp("Hell", "Hello", 5) == strncmp("Hell", "Hello", 5)) &&
        (ft_strncmp("Hello", "Hello", 0) == strncmp("Hello", "Hello", 0)) &&
        (ft_strncmp("", "", 1) == strncmp("", "", 1)))
        printf("ft_strncmp: %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_strncmp: %sNOT PASSED%s\n", RED, RESET);

    // Test strlcpy
    printf("\nTesting ft_strlcpy:\n");
    char dst1[10];
    char dst2[10];
    const char *src = "Hello";
    if (ft_strlcpy(dst1, src, sizeof(dst1)) == strlcpy(dst2, src, sizeof(dst2)) &&
        strcmp(dst1, dst2) == 0)
        printf("ft_strlcpy: %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_strlcpy: %sNOT PASSED%s\n", RED, RESET);

    // Test strlcat
    printf("\nTesting ft_strlcat:\n");
    char dst3[20] = "Hello";
    char dst4[20] = "Hello";
    const char *src2 = " World";
    if (ft_strlcat(dst3, src2, sizeof(dst3)) == strlcat(dst4, src2, sizeof(dst4)) &&
        strcmp(dst3, dst4) == 0)
        printf("ft_strlcat: %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_strlcat: %sNOT PASSED%s\n", RED, RESET);
}

void test_memory_functions(void)
{
    printf("\n=== Testing Memory Functions ===\n");

    // Test memset
    printf("\nTesting ft_memset:\n");
    char str1[10];
    char str2[10];
    if (memcmp(ft_memset(str1, 'A', 9), memset(str2, 'A', 9), 9) == 0) {
        str1[9] = str2[9] = '\0';
        if (strcmp(str1, str2) == 0)
            printf("ft_memset: %sPASSED%s\n", GREEN, RESET);
        else
            printf("ft_memset: %sNOT PASSED%s\n", RED, RESET);
    } else
        printf("ft_memset: %sNOT PASSED%s\n", RED, RESET);

    // Test bzero
    printf("\nTesting ft_bzero:\n");
    char str3[10] = "ABCDEFGHI";
    char str4[10] = "ABCDEFGHI";
    ft_bzero(str3, 5);
    bzero(str4, 5);
    if (memcmp(str3, str4, 10) == 0)
        printf("ft_bzero: %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_bzero: %sNOT PASSED%s\n", RED, RESET);

    // Test memcpy
    printf("\nTesting ft_memcpy:\n");
    char src1[] = "Source string";
    char dest1[20];
    char dest2[20];
    if (memcmp(ft_memcpy(dest1, src1, strlen(src1) + 1),
               memcpy(dest2, src1, strlen(src1) + 1),
               strlen(src1) + 1) == 0)
        printf("ft_memcpy: %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_memcpy: %sNOT PASSED%s\n", RED, RESET);

    // Test memmove
    printf("\nTesting ft_memmove:\n");
    char str5[] = "memmove can be very useful......";
    char str6[] = "memmove can be very useful......";
    if (memcmp(ft_memmove(str5 + 10, str5 + 5, 10),
               memmove(str6 + 10, str6 + 5, 10), 10) == 0)
        printf("ft_memmove: %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_memmove: %sNOT PASSED%s\n", RED, RESET);

    // Test memchr
    printf("\nTesting ft_memchr:\n");
    if (ft_memchr("Hello World", 'W', 11) == memchr("Hello World", 'W', 11) &&
        ft_memchr("Hello World", 'Z', 11) == memchr("Hello World", 'Z', 11) &&
        ft_memchr("", 'x', 0) == memchr("", 'x', 0))
        printf("ft_memchr: %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_memchr: %sNOT PASSED%s\n", RED, RESET);

    // Test memcmp
    printf("\nTesting ft_memcmp:\n");
    if ((ft_memcmp("Hello", "Hello", 5) == memcmp("Hello", "Hello", 5)) &&
        (ft_memcmp("Hello", "Hell", 5) == memcmp("Hello", "Hell", 5)) &&
        (ft_memcmp("Hell", "Hello", 5) == memcmp("Hell", "Hello", 5)) &&
        (ft_memcmp("", "", 0) == memcmp("", "", 0)))
        printf("ft_memcmp: %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_memcmp: %sNOT PASSED%s\n", RED, RESET);
}

void test_strnstr(void)
{
    printf("\n=== Testing ft_strnstr ===\n");
    
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    const char *empty = "";
    
    // Test normal case
    if (ft_strnstr(largestring, smallstring, 7) == strstr(largestring, smallstring))
        printf("ft_strnstr (normal case): %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_strnstr (normal case): %sNOT PASSED%s\n", RED, RESET);

    // Test with empty needle
    if (ft_strnstr(largestring, empty, 7) == largestring)
        printf("ft_strnstr (empty needle): %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_strnstr (empty needle): %sNOT PASSED%s\n", RED, RESET);

    // Test with len = 0
    if (ft_strnstr(largestring, smallstring, 0) == NULL)
        printf("ft_strnstr (len = 0): %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_strnstr (len = 0): %sNOT PASSED%s\n", RED, RESET);

    // Test with needle not found
    if (ft_strnstr(largestring, "xyz", 10) == NULL)
        printf("ft_strnstr (needle not found): %sPASSED%s\n", GREEN, RESET);
    else
        printf("ft_strnstr (needle not found): %sNOT PASSED%s\n", RED, RESET);
}
void test_atoi(void)
{
char *test_cases[] = {
        "0", "1", "-1", "+1", "42", "-42", "+42",
        "2147483647", "-2147483648",
        "   123", "\t456", "\n789",
        "   +123", "   -123",
        "   +-123", "   -+123",
        "abc123", "123abc",
        "", "  ", "\0"
    };

    int passed = 0;
    int total = 0;

    for (int i = 0; test_cases[i][0] != '\0'; i++) {
        total++;
        if (ft_atoi(test_cases[i]) == atoi(test_cases[i])) {
            passed++;
        } else {
            printf("Failed case: \"%s\"\n", test_cases[i]);
            printf("Expected: %d, Got: %d\n", atoi(test_cases[i]), ft_atoi(test_cases[i]));
        }
    }

    if (passed == total)
        printf("ft_atoi: %sPASSED%s (%d/%d cases)\n", GREEN, RESET, passed, total);
    else
        printf("ft_atoi: %sNOT PASSED%s (%d/%d cases)\n", RED, RESET, passed, total);
}

int main(void)
{
    printf("=== Starting LibFT Tests ===\n");
    printf("Note: These tests include edge cases and normal usage\n\n");

    test_char_functions();
    test_string_functions();
    test_memory_functions();
    test_strnstr();
    test_atoi();

    printf("\n=== Tests Complete ===\n");
    return (0);
}