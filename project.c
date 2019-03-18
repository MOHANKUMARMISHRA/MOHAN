#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int take;
    char c;
    z:
    printf("\t\t\t\t\t\twelcome in my modi khana\n");
    printf("\n\nMENU\n");
    printf("\n\n1 . vegetable\t\t\t2. medicine\n\n3. fruit\t\t\t4. clothes\n");
    printf("\nenter your choice\n");
    scanf("%d",&take);
    if(take==1)
    {
        vegetable();
    }
    else if(take==2)
    {
        medicine();

    }
    else if(take==3)
    {
        fruit();
    }
    else if(take==4)
    {
        clothes();
    }
    else
    {
        printf("SEVICE IS NOT AVAILABLE");
    }
    printf("\n\ndo you want to continue shopping Y/N\n");
            c=getch();
        if (c=='y'||c=='Y')
        {
            system("cls");
            goto z;
        }
        else
            exit(0);
}
int mobile()
    {
         unsigned long long mob;
         printf("enter your mobile number:-->");
         scanf("%llu",&mob);
         printf("your mobile is %llu\n:-->",mob);
    }

void vegetable()
{
    int take,want;
    printf("welcome in vegetable department\n");
    printf("1. potato\t\t2. tomato\t\t3.capsicum\t\t4.cucumber\n5. onion\n ");
    printf("enter the number of goods\n");
    scanf("%d",&take);
    if(take==1)
    {
        int rate=35,total;
        printf("the price of potato is 35/kg\n");
        printf("HOW MUCH KG DO YOU WANT TO BUY");
        scanf("%d",&want);
        total=rate*want;
        printf("you have to pay %d\n",total,"\n");
        printf("PRESS 1:--> if you want to receipt\nPRESS 2:-->if you do not want to receipt\n");
        int press;
        scanf("%d",&press);
        if(press==1)
        {
            mobile();
            printf("%d x %d =%d\n",rate, want,total);
        }
        else
            printf("thank you for using my modi khana");
    }
    else if(take==2)
    {
        int rate=123,total;
        printf("the price of tomato is 123/kg\n");
        printf("HOW MUCH KG DO YOU WANT TO BUY");
        scanf("%d",&want);
        total=rate*want;
        printf("you have to pay %d\n",total,"\n");
        printf("PRESS 1:--> if you want to receipt\nPRESS 2:-->if you do not want to receipt\n");
        int press;
        scanf("%d",&press);
        if(press==1)
        {
            mobile();
         printf("%d x %d =%d\n",rate, want,total);
        }
        else
            printf("thank you for using my modi khana");
    }
    else if(take==3)
    {
        int rate=52,total;
        printf("the price of capsicum is 52/kg\n");
        printf("HOW MUCH KG DO YOU WANT TO BUY");
        scanf("%d",&want);
        total=rate*want;
        printf("you have to pay %d\n",total,"\n");
        printf("PRESS 1:--> if you want to receipt\nPRESS 2:-->if you do not want to receipt\n");
        int press;
        scanf("%d",&press);
        if(press==1)
            {
            mobile();
            printf("%d x %d =%d\n",rate, want,total);
            }
    else
            printf("thank you for using my modi khana");
    }
    else if(take==4)
    {
        int rate=78,total;
        printf("the price of cucumber is 78/kg\n");
        printf("HOW MUCH KG DO YOU WANT TO BUY");
        scanf("%d",&want);
        total=rate*want;
        printf("you have to pay %d\n",total,"\n");
        printf("PRESS 1:--> if you want to receipt\nPRESS 2:-->if you do not want to receipt\n");
        int press;
        scanf("%d",&press);
        if(press==1)
           {
               mobile();
                printf("%d x %d =%d\n",rate, want,total);
           }
        else
            printf("thank you for using my modi khana");
    }
      else if (take==5)
        {
            int rate=76,total;
            printf("the price of onion is 76/kg\n");
            printf("HOW MUCH KG DO YOU WANT TO BUY");
            scanf("%d",&want);
            total=rate*want;
            printf("you have to pay %d\n",total,"\n");
            printf("PRESS 1:--> if you want to receipt\nPRESS 2:-->if you do not want to receipt\n");
            int press;
            scanf("%d",&press);
            if(press==1)
            {
                mobile();
                printf("%d x %d =%d\n",rate, want,total);
            }
            else
                printf("thank you for using my modi khana");
        }
    else
    {

        printf("sorry sir..!!!please select number between 1 to 5\n");
        printf("thanks");
    }
}
void medicine()
{
    printf("one and two pieces aren't avaiable\n");
    int take;
    float want;
    printf("welcome in medicine department\n");
    printf("1. ADDERALL\t\t2. LEXAPRO\t\t3.LYRICA\t\t4. ACTIVAN\n5. CODELINE\n ");
    printf("enter the number of medicine\n");
    scanf("%d",&take);
    if(take==1)
    {
        int rate=112;
        float total;
        printf("\nthe price of one medicine is 112\n");
        printf("HOW MUCH MEDICINE DO YOU WANT TO BUY:-");
        scanf("%f",&want);
        total=rate*want;
        printf("you have to pay %0.2f\n",total,"\n");
        printf("PRESS 1:--> if  you want to take receipt\nPRESS 2:--> if you don't want to take receipt\n");
        int press;
        scanf("%d",&press);
        if(press==1)
        {
            mobile();
            printf("%d x %0.2f = %0.2f\n",rate,want,total);
            printf("THANKS\n");
        }
        else
             printf("thank you for buying");
    }
    else if(take==2)
    {
        int rate=200;
        float total;
        printf("\nthe price of one medicine is 200\n");
        printf("HOW MUCH MEDICINE DO YOU WANT TO BUY\n");
        scanf("%f",&want);
        total=rate*want;
        printf("you have to pay %0.2f\n",total,"\n");
        printf("PRESS 1:--> if  you want to take receipt\nPRESS 2:--> if you don't want to take receipt\n");
        int press;
        scanf("%d",&press);

        if(press==1)
        {
            mobile();
            printf("%d x %0.2f = %0.2f\n",rate,want,total);
            printf("THANKS\n");
        }
        else
             printf("thank you for buying");
    }
    else if(take==3)
    {
        int rate=300;
        float total;
        printf("\nthe price of one medicine is 300\n");
        printf("HOW MUCH MEDICINE DO YOU WANT TO BUY:-\n");
        scanf("%f",&want);
        total=rate*want;
        printf("you have to pay %0.2f\n",total,"\n");
        printf("PRESS 1:--> if  you want to take receipt\nPRESS 2:--> if you don't want to take receipt\n");
        int press;
        scanf("%d",&press);

        if(press==1)
        {
            mobile();
            printf("%d x %0.2f = %0.2f\n",rate,want,total);
            printf("THANKS\n");
        }
        else
             printf("thank you for buying");
    }

    else if(take==4)
    {
        int rate=1200;
        float total;
        printf("\nthe price of one medicine is 1200\n");
        printf("HOW MUCH MEDICINE DO YOU WANT TO BUY:-\n");
        scanf("%f",&want);
        total=rate*want;
        printf("you have to pay %0.2f\n",total,"\n");
        printf(" PRESS 1 if  you want to take receipt\nPRESS 2 if you don't want to take receipt\n");
        int press;
        scanf("%d",&press);

        if(press==1)
        {
            mobile();
            printf("%d x %0.2f = %0.2f\n",rate,want,total);
            printf("THANKS\n");
        }
        else
             printf("thank you for buying");
    }

      else
        {
            int rate=200;
        float total;
        printf("\nthe price of one medicine is 200\n");
        printf("HOW MUCH MEDICINE DO YOU WANT TO BUY\n");
        scanf("%f",&want);
        total=rate*want;
        printf("you have to pay %0.2f\n",total,"\n");
        printf("PRESS 1:--> if  you want to take receipt\nPRESS 2:--> if you don't want to take receipt\n");
        int press;
        scanf("%d",&press);

        if(press==1)
        {
            mobile();
            printf("%d x %0.2f = %0.2f\n",rate,want,total);
            printf("THANKS\n");
        }
        else
             printf("thank you for buying");
    }
}

void fruit()
{
    printf("one and two pieces aren't avaiable\n");
    int take;
    float want;
    printf("welcome in fruit department\n");
    printf("1. APPLE\t\t2. ORANGE\t\t3.PINEAPPLE\t\t4. BANANA\n5. BLACK CURRANT\n ");
    printf("enter the number of fruit\n");
    scanf("%d",&take);
    if(take==1)
    {
        int rate=76;
        float total;
        printf("\nthe price of rate is 76/kg\n");
        printf("HOW MUCH KG DO YOU WANT TO BUY:-");
        scanf("%f",&want);
        total=rate*want;
        printf("you have to pay %f\n",total,"\n");
        printf("PRESS 1:--> if  you want to take receipt\nPRESS 2:--> if you don't want to take receipt\n");
        int press;
        scanf("%d",&press);
        if(press==1)
        {
            mobile();
            printf("%d x %f = %f\n",rate,want,total);
            printf("THANKS\n");
        }
        else
             printf("thank you for buying");
    }
    else if(take==2)
    {
        int rate=80;
        float total;
        printf("\nthe price of orange is 80/kg\n");
        printf("HOW MUCH KG DO YOU WANT TO BUY\n");
        scanf("%f",&want);
        total=rate*want;
        printf("you have to pay %f\n",total,"\n");
        printf("PRESS 1:--> if  you want to take receipt\nPRESS 2:--> if you don't want to take receipt\n");
        int press;
        scanf("%d",&press);
        if(press==1)
        {
            mobile();
            printf("%d x %f = %f\n",rate,want,total);
            printf("THANKS\n");
        }
        else
             printf("thank you for buying");
    }
    else if(take==3)
    {
        int rate=150;
        float total;
        printf("\nthe price of pineapple is 150/kg\n");
        printf("HOW MUCH MEDICINE DO YOU WANT TO BUY:-\n");
        scanf("%f",&want);
        total=rate*want;
        printf("you have to pay %f\n",total,"\n");
        printf("PRESS 1;--> if  you want to take receipt\nPRESS 2:--> if you don't want to take receipt\n");
        int press;
        scanf("%d",&press);
        if(press==1)
        {
            mobile();
            printf("%d x %f = %f\n",rate,want,total);
            printf("THANKS\n");
        }
        else
             printf("thank you for buying");
    }

    else if(take==4)
    {
        int rate=25;
        float total;
        printf("\nthe price of banana is 10/piece\n");
        printf("HOW MUCH MEDICINE DO YOU WANT TO BUY:-\n");
        scanf("%f",&want);
        total=rate*want;
        printf("you have to pay %f\n",total,"\n");
        printf("PRESS 1:--> if  you want to take receipt\nPRESS 2:--> if you don't want to take receipt\n");
        int press;
        scanf("%d",&press);

        if(press==1)
        {
            mobile();
            printf("%d x %f = %f\n",rate,want,total);
            printf("THANKS\n");
        }
        else
             printf("thank you for buying");
    }

      else
        {
            int rate=78;
        float total;
        printf("\nthe price of black currant is 78/kg\n");
        printf("HOW MUCH MEDICINE DO YOU WANT TO BUY\n");
        scanf("%f",&want);
        total=rate*want;
        printf("you have to pay %f\n",total,"\n");
        printf("PRESS 1:--> if  you want to take receipt\nPRESS 2:--> if you don't want to take receipt\n");
        int press;
        scanf("%d",&press);

        if(press==1)
        {
            mobile();
            printf("%d x %f = %f\n",rate,want,total);
            printf("THANKS\n");
        }
        else
             printf("thank you for buying");
    }
}
void clothes()
{
    int take;
    float want;
    printf("welcome in cloths department\n");
    printf("1. SHIRT\t\t2. JEANS\t\t3.T-SHIRT\n ");
    printf("enter the number of  clothes\n");
    scanf("%d",&take);
    if(take==1)
    {
        int rate=2500;
        float total;
        printf("\nthe price of a shirt is 2500\n");
        printf("HOW MUCH SHIRT DO YOU WANT TO BUY:-");
        scanf("%f",&want);
        total=rate*want;
        printf("you have to pay %f\n",total,"\n");
        printf("PRESS 1:--> if  you want to take receipt\nPRESS 2:--> if you don't want to take receipt\n");
        int press;
        scanf("%d",&press);
        if(press==1)
        {
            mobile();
            printf("%d x %f = %f\n",rate,want,total);
            printf("THANKS\n");
        }
        else
             printf("thank you for buying");
    }
    else if(take==2)
    {
        int rate=2000;
        float total;
        printf("\nthe price of a jeans is 2000\n");
        printf("HOW MUCH JEANS DO YOU WANT TO BUY\n");
        scanf("%f",&want);
        total=rate*want;
        printf("you have to pay %f\n",total,"\n");
        printf("PRESS 1:--> if  you want to take receipt\nPRESS 2:--> if you don't want to take receipt\n");
        int press;
        scanf("%d",&press);

        if(press==1)
        {
            mobile();
            printf("%d x %f = %f\n",rate,want,total);
            printf("THANKS\n");
        }
        else
             printf("thank you for buying\n");
    }
    else if(take==3)
    {
        int rate=300;
        float total;
        printf("\nthe price of a t-shirt is 300\n");
        printf("HOW MUCH t-shirt DO YOU WANT TO BUY:-\n");
        scanf("%f",&want);
        total=rate*want;
        printf("you have to pay %f\n",total,"\n");
        printf("PRESS 1:--> if  you want to take receipt\nPRESS 2:--> if you don't want to take receipt\n");
        int press;
        scanf("%d",&press);

        if(press==1)
        {
            mobile();
            printf("%d x %f = %f\n",rate,want,total);
            printf("THANKS\n");
        }
        else
             printf("thank you for buying");
    }
     else
        printf("this stuff is not available");
}
