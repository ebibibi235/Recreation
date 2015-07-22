#include <stdio.h>

int main(void)
{
    int lst[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result;
    
    result = forLoop(lst, sizeof(lst)/sizeof(int));
    printf("forLoop   : %d¥n", result);

    result = whileLoop(lst, sizeof(lst)/sizeof(int));
    printf("whileLoop : %d¥n", result);

    result = recursive(lst, sizeof(lst)/sizeof(int));
    printf("recursive : %d¥n", result);
    
    return 1;
}

int forLoop(int lst[], int size)
{
    int ret = 0;
    int i;
    
    for (i = 0; i < size; i++)
    {
        ret += lst[i];
    }
    
    return ret;
}

int whileLoop(int lst[], int size)
{
    int ret = 0;
    int i = 0;
    
    while (i < size)
    {
        ret += lst[i];
    }
    
    return ret;
}

int recursive(int lst[], int size)
{
    if (size == 1)
    {
        return lst[size - 1];
    }
    else
    {
        return lst[size - 1] + recursive(lst[], size - 1);
    }
}