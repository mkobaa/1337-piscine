
int ft_iterative_power(int nb, int power)
{
    int pow;

    pow = 1;
    if (power < 0)
        return 0;
    if (power == 0)
        return 1;
    while (power > 0)
    {
        pow = pow * nb;
        power--;
    }
    return pow;
}
/*
int main()
{
    ft_iterative_power(3, 3);
}
*/