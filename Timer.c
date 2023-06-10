#include<stdio.h>
#include<windows.h>

int main()
{
    int h, m, s;
    int d=1000;           //d will be used to add a delay of 1000ms in the timer

    printf("Enter the starting time: \n");
    scanf("%d%d%d", &h, &m, &s);

    if (h>12||m>60||s>60)
    {
        printf("ERROR!!!\n");
        exit(0);
    }

    while(1)             //this will run an infinite loop
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }

        printf("\n\t***************\tCLOCK:\t***************\t\n");
        printf("\t********\t%02d:%02d:%02d\t*******\t", h, m, s);   //tis is for the 00:00:00 format
        printf("\n\t***************\tCLOCK:\t***************\t\n");

        Sleep(d);                              //this will slow down the timer
        system("cls");                         //this will clear the screen every second  :)
        //this return 0 should not be here. it was responsible for the clock scloding after 1 sec.
    }
}
