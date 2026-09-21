 #include <ctype.h>
 #include <stdio.h>
int main(void)
{
	char str[1000];
	int vowels = 0, consonants = 0;
	if (fgets(str, sizeof(str), stdin) == NULL)
		return 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (isalpha((unsigned char)str[i])) {
			char ch = (char)tolower((unsigned char)str[i]);
			if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
				vowels++;
			else
				consonants++;
		}
	}
	printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
	return 0;
}
