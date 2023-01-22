#include <stdio.h>
void	*ft_memcpy(void *dst)
{
    //int *number = (int *)dst;
    char    *number = (char *)dst;
    printf("%s\n",number);
}
int main()
{
    char *number = "harun";
    ft_memcpy(number);
   
    //int number = 56;
   //ft_memcpy(&number);

    return 0;
}
