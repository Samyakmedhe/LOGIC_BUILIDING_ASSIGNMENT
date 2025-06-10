#include<stdio.h>
#include<stdlib.h>



void DisplayExam(char ch)
{
    if((ch == 'A' )||(ch == 'a'))
    {
        printf("Division %c : Your Exam timing at 7 AM \n",ch);
    }
    else if((ch == 'B' )||(ch == 'b'))
    {
        printf("Division %c : Your Exam timing at 8.30 AM \n",ch);
    }
    else if((ch == 'C' )||(ch == 'c'))
    {
        printf("Division %c : Your Exam timing at 9.20 AM \n",ch);
    }
    else if((ch == 'D' )||(ch == 'd'))
    {
        printf("Division %c : Your Exam timing at 10.30 AM \n",ch);
    }
    else
    {
        printf("Invaild Division ");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter Your Devision : ");
    scanf("%c",&cValue);
    DisplayExam(cValue);

    return 0 ;
}