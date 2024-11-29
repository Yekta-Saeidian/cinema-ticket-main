#include <stdio.h>
void main()
{
    int cost , age , member;
    printf("how old is he/she? is he/she a member of club?\nenter 1 if he/she is a member");
    scanf("%d %d", &age , &member);

    if(age<12 || age>=60)
    cost=10000;

    else if(age>=12 && age<18)
    {
        cost=15000;

        if(member==1)
        cost=12000;
    }

    else if(age>=18 && age<60)
    {
        cost=25000;

        if(member==1)
        cost=20000;
    }

    printf("the cost is: %d", cost);
}