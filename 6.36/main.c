#include<stdio.h>
#include<stdlib.h>

void invert(char,int);

int main(void)
{
	char s[20] = {0};

	printf("Please enter the strings\n");
	for (int i = 0; i < 20; i++) {
		scanf_s("%c", &s[i]);
		if (s[i] == '\n') {
			printf("the inverted strings order is\n");

			for (int k = i; k >= 0; k--) {
				invert(s, k);
			}
			break;
		}
	}
	printf("\n");
	system("pause");
	return 0;
}

void invert(char sss[20], int y)
{
	printf("%c", sss[y]);

}
