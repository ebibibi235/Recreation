#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define AORI_NUM	4
#define AORI_STRING	0x00010203

int main(void)
{
	char * aoriList[AORI_NUM] = {"進捗", "どう", "です", "か？"};
	unsigned int aori = 0xFFFFFFFF;
	int count = 0;
	
	srand((unsigned)time(NULL));
	
	while (aori != AORI_STRING)
	{
		int i;
		i = rand() % AORI_NUM;
		aori = (aori << 8) | i;
		printf("%s", aoriList[i]);
		count += 2;
	}
	
	printf("\n");	
	printf("%d文字で煽られました。\n", count);
	
	return 1;
}