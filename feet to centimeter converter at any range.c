#include <stdio.h>

main()
{
    int feet,n,m;
    float centimeters,length;
    printf("Enter the range of feet from which you want to start from:");
    scanf("%d",&m);
    printf("Enter the range till which you want:\n");
    scanf("%d",&n);
    for(feet=m;feet<=n;++feet)
    {
        length=feet*30.48;
        printf("%dFeet -> %f Centimeter\n",feet,length);
    }
}
