#include <stdio.h>

int main() {
	char ch1 = 'a', ch2 = 'A';
	// a = 97, A = 65

	printf("=====TOUPPERCASE E TOLOWERCASE=====\n");
	printf("Digite dois caracteres separados:\n");

	scanf("%c %c", &ch1, &ch2);

	printf("%c: ", ch1);

	if ((int) ch1 >= 97) printf("%c %c", ch1, ch1-32);
	else printf("%c %c", ch1+32, ch1);

	printf("; %c: ", ch2);
	if ((int) ch2 >= 97) printf("%c %c", ch2, ch2-32);
	else printf("%c %c", ch2+32, ch2);	

	return 0;
}
