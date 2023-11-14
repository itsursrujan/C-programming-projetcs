#include<stdio.h>

main()
{
    int feet,m,n;
    float length;
    printf("Enter the Range:\n");
    scanf("%d%d",&m,&n);
    printf("_________________________________________________\n");
    printf("The Feet -> Centimeter Conversion from %d to %d\n",m,n);
    printf("_________________________________________________\n");
    for(feet=m;feet<=n;feet++){
        length=feet*30.48;
        printf("%d -> %f\n",feet,length);
    }
    printf("_________________________________________________");
}
