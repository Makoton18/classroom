#include <stdio.h>

int main(void)
{
	char str[] = "abcdefgabcdefghij", *p;
	char search[21];

	printf("文字群を入力しなさい。\n");
	scanf("%20s", search);

	p = strpbrk(str, search);
	if (p != NULL) {
		printf("文字群%sは文字列%sの%d番目にあります。\n", search, str, p-str);
		printf("以降の文字列は%sです。\n", p);
	}
	else
		printf("文字群%sは文字列%sに見つかりませんでした。\n", search, str);

	return 0;
}
