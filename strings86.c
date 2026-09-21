 #include <stdio.h>
 #include <string.h>
int main(void)
{
	char str[1000];
	int is_palindrome = 1;
	if (fgets(str, sizeof(str), stdin) == NULL) {
		return 0;
	}
	str[strcspn(str, "\n")] = '\0';
	for (size_t i = 0, j = strlen(str) - 1; i < j; i++, j--) {
		if (str[i] != str[j]) {
			is_palindrome = 0;
			break;
		}
	}
	printf("%s\n", is_palindrome ? "Palindrome" : "Not palindrome");
	return 0;
}
