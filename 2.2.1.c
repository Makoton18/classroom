#include <stdio.h>

int main(void)
{
	char str[] = "abcdefgabcdefghij", *p;
	char search[21];

	printf("�����Q����͂��Ȃ����B\n");
	scanf("%20s", search);

	p = strpbrk(str, search);
	if (p != NULL) {
		printf("�����Q%s�͕�����%s��%d�Ԗڂɂ���܂��B\n", search, str, p-str);
		printf("�ȍ~�̕������%s�ł��B\n", p);
	}
	else
		printf("�����Q%s�͕�����%s�Ɍ�����܂���ł����B\n", search, str);

	return 0;
}
