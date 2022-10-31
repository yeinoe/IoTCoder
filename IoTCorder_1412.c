#include <stdio.h>

int main() {
	char str[97];
	int alphaStack[26] = { 0 };
	gets(str);

	for (int i = 0; str[i] != '\0'; i++) {
		//소문자일 경우
		if ((int)str[i] >= 97 && (int)str[i] <= 122) {
			alphaStack[(int)str[i] - 97]++;
		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%c:%d\n", (char)(97 + i), alphaStack[i]);

	}
	return 0;
}