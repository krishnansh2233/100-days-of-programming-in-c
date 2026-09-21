 #include <stdio.h>
 #include <string.h>
 int main(void)
 {
	 char str[1000];
	 if (fgets(str, sizeof(str), stdin) == NULL)
		 return 0;
	 str[strcspn(str, "\n")] = '\0';
	 for (int i = (int)strlen(str) - 1; i >= 0; --i)
		 putchar(str[i]);
	 putchar('\n');
	 return 0;
 }
