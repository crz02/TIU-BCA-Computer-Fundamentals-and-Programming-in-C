#include <stdio.h>
int main()
{
    printf("It's a Program to see whether hi/she is pass or fail... \n");
    printf("Minimum passing marks is 40 percent \n");

    // Seletion of the Stream
    int a;
    printf("Select your stream : ");
    printf("1.Science \n");
    printf("2.Commerce \n");
    printf("3.Humanities/Arts \n");
    printf("Enter your Choice : ");
    scanf("%d", &a);
    // Science
    if (a == 1)
    {
        printf("You choose science as your stream. \n Enter your marks.\n");
        //    For PCMB
        int b;
        printf("1. You are PCMB \n 2. You are PCM \n 3. You are PCB");
        printf("Enter your Choice : ");
        scanf("%d", &b);
        if (b == 1)
        {
            // For PCMB
            float p, c, m, b, e , avg;
            printf("Enter your marks : \n");
            printf("Physics : ");
            scanf("%f",& p);
            printf("Chemistry :");
            scanf("%f", &c);
            printf("Maths : ");
            scanf("%f", &m);
            printf("Biology :");
            scanf("%f", &b);
            printf("English : ");
            scanf("%f", &e);
            avg = ((p+c+m+b+e)/500)*100;
            printf("Your percentage is %f\n",avg);
            if (avg >= 40)
            {
                printf("Pass, Congratulations !");
            }
            else
            {
                printf("Unfortunately, You are failed");
            }
        }
        else if (b == 2)
        {
            // For PCM
            float p, c, m, e , com, avg;
            printf("Enter your marks : \n");
            printf("Physics : ");
            scanf("%f",&p);
            printf("Chemistry :");
            scanf("%f",&c);
            printf("Maths : ");
            scanf("%f",&m);
            printf("English : ");
            scanf("%f",&e);
            printf("Computer : ");
            scanf("%f",&com);
            avg = ((p+c+m+com+e)/500)*100;
            printf("Your percentage is %f\n",avg);
            if (avg >= 40)
            {
                printf("Pass, Congratulations !");
            }
            else
            {
                printf("Unfortunately, You are failed");
            }
        }
        else if (b == 3)
        {
            // For PCB
            float p, c , b, e , pa, avg;
            printf("Enter your marks : \n");
            printf("Physics : ");
            scanf("%f",& p);
            printf("Chemistry :");
            scanf("%f", &c);
            printf("Biology :");
            scanf("%f", &b);
            printf("English : ");
            scanf("%f", &e);
            printf("Painting : ");
            scanf("%f", &pa);
            avg = ((p+c+b+e+pa)/500)*100;
            printf("Your percentage is %f\n",avg);
            if (avg >= 40)
            {
                printf("Pass, Congratulations !");
            }
            else
            {
                printf("Unfortunately, You are failed");
            }
        }
        else
        {
            printf("Error");
        }
        
    }
    // Commerce
    else if(a == 2)
    {
        printf("You choose commerce as your stream. \n Enter your marks.\n");
        int b;
        printf("1. You are ABEM \n 2. You are ABEC \n 3. You are ABEO");
        printf("Enter your Choice : ");
        scanf("%d", &b);
        if(b == 1)
        {
            // For ABEM
            float a, b, e, m, c, avg;
            printf("Enter your marks : \n");
            printf("Accountancy : ");
            scanf("%f",& a);
            printf("Business Studies :");
            scanf("%f", &b);
            printf("Economics : ");
            scanf("%f", &e);
            printf("Maths :");
            scanf("%f", &m);
            printf("English : ");
            scanf("%f", &c);
            avg = ((a+b+e+m+c)/500)*100;
            printf("Your percentage is %f\n",avg);
            if (avg >= 40)
            {
                printf("Pass, Congratulations !");
            }
            else
            {
                printf("Unfortunately, You are failed");
            }
        }
        else if (b == 2)
        {
            // For ABEC
            float a, b, e, c, co, avg;
            printf("Enter your marks : \n");
            printf("Accountancy : ");
            scanf("%f",& a);
            printf("Business Studies :");
            scanf("%f", &b);
            printf("Economics : ");
            scanf("%f", &e);
            printf("English :");
            scanf("%f", &c);
            printf("Computer: ");
            scanf("%f", &co);
            avg = ((a+b+e+c+co)/500)*100;
            printf("Your percentage is %f\n",avg);
            if (avg >= 40)
            {
                printf("Pass, Congratulations !");
            }
            else
            {
                printf("Unfortunately, You are failed");
            }
        }
        else if (b == 3)
        {
            // For ABEO
            float a, b, e, o, eco, avg;
            printf("Enter your marks : \n");
            printf("Accountancy : ");
            scanf("%f",& a);
            printf("Business Studies :");
            scanf("%f", &b);
            printf("Economics : ");
            scanf("%f", &e);
            printf("entrepreneurship :");
            scanf("%f", &o);
            printf("English : ");
            scanf("%f", &eco);
            avg = ((a+b+e+o+eco)/500)*100;
            printf("Your percentage is %f\n",avg);
            if (avg >= 40)
            {
                printf("Pass, Congratulations !");
            }
            else
            {
                printf("Unfortunately, You are failed");
            }
    }
    else
    {
        printf("Error");
    }
    }
        // Humanities/Arts
    else if (a == 3)
    {
        printf("You choose Humanities/Arts as your stream. \n Enter your marks.\n");
        float h, g, s, e, p, avg;
        printf("Enter your marks : \n");
        printf("History : ");
        scanf("%f",& h);
        printf("Geography :");
        scanf("%f", &g);
        printf("Sociology : ");
        scanf("%f", &s);
        printf("English :");
        scanf("%f", &e);
        printf("Political Science : ");
        scanf("%f", &p);
        avg = ((h+g+s+e+p)/500)*100;
        printf("Your percentage is %f\n",avg);
        if (avg >= 40)
        {
            printf("Pass, Congratulations !");
        }
        else
        {
            printf("Unfortunately, You are failed");
        }
    }
    else
    {
        printf("Error\n");
    }
    return 0;
}