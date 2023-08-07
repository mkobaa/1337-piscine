
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int fact;

    fact = 1;
    if (nb < 0){
        return (0);
    }
    while (nb > 1 )
    {
        fact = fact * nb ;
        nb--;
    }
    return (fact);
}
/*
int main()
{
    printf("%d", ft_iterative_factorial(3));
}
*/