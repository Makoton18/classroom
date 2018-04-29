#include <stdio.h>

int main(void)
{
	char str[] = "abcdefgabcdefghij", *p;
	char search[21];

	printf("•¶šŒQ‚ğ“ü—Í‚µ‚È‚³‚¢B\n");
	scanf("%20s", search);

	p = strpbrk(str, search);
	if (p != NULL) {
		printf("•¶šŒQ%s‚Í•¶š—ñ%s‚Ì%d”Ô–Ú‚É‚ ‚è‚Ü‚·B\n", search, str, p-str);
		printf("ˆÈ~‚Ì•¶š—ñ‚Í%s‚Å‚·B\n", p);
	}
	else
		printf("•¶šŒQ%s‚Í•¶š—ñ%s‚ÉŒ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½B\n", search, str);

	return 0;
}
