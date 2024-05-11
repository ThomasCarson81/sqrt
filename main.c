#include <stdio.h>
#include <stdlib.h>

double Sqrt(double x)
{
    if (x < 0)
        return -1;
    double low = 0;
    double high = x;
    double mid = low / 2 + high / 2;
    while (mid * mid != x)
    {
        if (mid * mid < x)
            low = mid;
        else
            high = mid;
        mid = low / 2 + high / 2;
    }
    return mid;
}

int main()
{
    double num;
    double ans;
    printf("Enter the number to find the square root of: ");
    scanf("%lf", &num);
    ans = Sqrt(num);
    printf("The square root of %0lf is %0lf", num, ans);
    return 0;
}