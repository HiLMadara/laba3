#include <stdio.h>

int proverka(char* a) {
	int rf = 0;
	for (int i = 0; a[i] != 0; i++) {
		if (a[i] < '0' || a[i] > '9' || a[i] == '-') rf = 1;
		else continue;
	}
	return rf;
}
int myAtoi(char* str)
{
	int sign = 1, result = 0;

	if (*str == '-')
		sign = -1, str++;

	for (; *str >= '0' && *str <= '9' && *str; str++)
		result = result * 10 + *str - '0';

	return result * sign;
}


int main() {
	char str1[1000] = "",str2[1000] = "" ;
	printf("Vvedite razmer massiva ");
		fgets(str1, 1000, stdin);
		if (proverka(str1) == 1)
		{
			printf("ERROR!Insert correct value:\n");
		}
		int i;
		int x = myAtoi(str1);
		for (i = 0; x - 1; i++) {
			int a[]={0};
			fgets(str2, 1000, stdin);
			if (proverka(str2) == 1)
			{
				printf("ERROR!Insert correct value:\n");
				break;
			}
			a[i] = myAtoi(str2);
			printf("%d\n", a[i]);
		}
		return 0;
}