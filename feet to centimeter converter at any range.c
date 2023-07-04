#include <stdio.h>

main()
{
    int feet,n;
    float centimeters,length;
    printf("Enter feet:");
    scanf("%d",&feet);
    printf("Enter the range till which you want:\n");
    scanf("%d",&n);
    for(feet=0;feet<n;++feet)
    {
        length=feet*30.48;
        printf("%dFeet -> %f Centimeter\n",feet,length);
    }
    
}