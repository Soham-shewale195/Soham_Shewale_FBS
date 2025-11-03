#include<stdio.h>

void calculatesellp(float, float);

void main()
{
    float costp, dis;
    printf("Enter cost price of book: ");
    scanf("%f", &costp);
    printf("Enter discount percentage: ");
    scanf("%f", &dis);

    calculatesellp(costp, dis);
}

void calculatesellp(float costp, float dis)
{
    float sellp, GST, discountAmount;
    discountAmount = (costp * dis) / 100;

    if(dis >= 0 && dis <= 100)
    {
        if(dis >= 50)
        {
            sellp = costp - discountAmount;
            GST = (sellp * 18) / 100;
            sellp = sellp + GST;
            printf("Selling price is: %.2f , GST applied: %.2f\n", sellp, GST);
        }
        else
        {
            sellp = costp - discountAmount;
            printf("Selling price is: %.2f\n", sellp);
        }
    }
    else
    {
        printf("Warning: Invalid discount entered!\n");
    }
}

