// KON BANEGA CARODPATI 
// ABUJAR 
// C PROGRAMMING SMALL PROJECT IN 1st SEM 
int winPrize = 1;
// header files
#include <stdio.h>
#include <conio.h>
// function 
void dash();
void thanks();
void newline();
void dash(void)
{
    for (int w = 0; w <= 10; w++)
    {
        printf("--");
    }
}
void newline(void)
// Print new line function
{
    printf("\n");
}
void thanks(void)
{
    // THANKS NOTE
    printf(" THANK YOU FOR PLAY KON BANEGA KORDAPATI ");
}

void main()
{

    int i, a[10], n = 0;
    printf("\n\n");
    printf("\t*********************************************************************************");
    printf("\n\t\t\t\t\tWELCOME TO THE GAME\n\n");
    printf("\t\t\t\t\tKON BANEGA COREPATI\n");
    printf("\t*********************************************************************************\n");
    printf("\t\t\t\t\tYou have 10 Questions\n\n");
    printf("\t\t\t\t   Reward is per question 10 lakhs");
    printf("\n\t*********************************************************************************\n");
    for (i = 1; i < 10; i++)
    {
        n = 0;
        switch (i)
            ;
        {
        case1:
        // if you are give correct answer you can win prize else you can give worng answer you exit on kbc 
        // in this switch case use nased if else statemnt and also add function for new line dash line thanks note etc.


            printf("\t1).In what direction musllim pray?\n\t1].East    2].South   3].Near by Mosque's direction   4].Mecca's Direction\n\t Your Answer plzz ");
            scanf("%d", &n);
            if (n == 4)
            {
                printf("\tYou have Enterd CORRECT answer won Rs.100000. ", winPrize);
                newline();
                dash();
                printf(" Your next question is ");
            }
            else
            {

                printf("\tYou have enter the wrong answer Better luck for next time You have earned Rs.%d00000", winPrize);
                i = 11;
                break;
            }
            dash();

        case2:
            printf("\n\t*********************************************************************************\n");
            printf("\t2).Who is the mother of RAMA in RAMAYANA?\n\t1].Kausalya    2].Kaikai    3].Siumitra    4].Mantra\n\t Your Answer plzz ");
            scanf("%d", &n);
            winPrize = winPrize + winPrize;
            if (n == 4)
            {

                printf("\tYou have Enterd CORRECT answer won Rs.%d00000\n\tYour next question is", winPrize);
                newline();
                dash();
                printf(" Your next question is ");
            }
            else
            {
                winPrize = winPrize - 1;
                printf("\tYou have enter the wrong answer Better luck for next time You have earned Rs.%d00000", winPrize);
                i = 11;
                break;
            }
            dash();

        case3:
            printf("\n\t*********************************************************************************\n");
            printf("\t3).What is the symboll of Nazis(Army of great hitler)?\n\t1].Cross    2].Skull and Bones   3].Owl   4].Swastika\n\t Your Answer plzz ");
            scanf("%d", &n);
            winPrize = winPrize + 1;
            if (n == 4)
            {

                printf("\tYou have Enterd CORRECT answer won Rs.%d00000\n\tYour next question is", winPrize);
                newline();
                dash();
                printf(" Your next question is ");
            }
            else
            {
                winPrize = winPrize - 1;

                printf("\tYou have enter the wrong answer Better luck for next time You have earned Rs.%d00000", winPrize - 1);
                i = 11;
                break;
            }

        case4:
            printf("\n\t*********************************************************************************\n");
            printf("\t4).Who among these is not an Railway Minister?\n\t1].Mamtha Banerjee    2].Lal Bahadur Shastri    3].Geetha Mukerjee    4].George Fernandis\n\t Your Answer plzz ");
            scanf("%d", &n);
            winPrize = winPrize + 1;
                        if (n == 4)
            {
                printf("\tYou have Enterd CORRECT answer won Rs.%d00000\n\tYour next question is", winPrize);
                newline();
                dash();
                printf(" Your next question is ");
            }
            else
            {
                printf("\tYou have enter the wrong answer Better luck for next time You have earned Rs.%d00000", winPrize - 1);
                i = 11;
                break;
            }

        case5:
            printf("\n\t*********************************************************************************\n");
            printf("\t5].Who Correctly Answered to Yaksha's Questions?\n\t1].Drona    2].Abimanyu    3].Yudishtira    4].Arjuna\n\t Your Answer plzz ");
            scanf("%d", &n);
            winPrize = winPrize + 1;
            if (n == 3)
            {
                printf("\tYou have entered the correct answer Now you have won Rs.%d00000\n\tYour Next Question is", winPrize);
                newline();
                dash();
                printf(" Your next question is ");
            }
            else
            {
                printf("\tYou have entered the wrong answer Better Luck Next Time You have earned Rs.%d00000", winPrize - 1);
                i = 11;
                break;
            }

        case6:
            printf("\n\t*********************************************************************************\n");
            printf("\t6].Who Heads Reserve Bank of India?\n\t1].FinanceMinister    2].Commissioner    3].Chief Bank Manager    4].Governor\n\t Your Answer plzz ");
            scanf("%d", &n);
            winPrize = winPrize + 1;
            if (n == 4)
            {
                printf("\tYou have entered the correct answer Now you have won Rs.%d00000\n\tYour Next Question is", winPrize);
                newline();
                dash();
                printf(" Your next question is ");
            }
            else
            {
                printf("\tYou have entered the wrong answer Better Luck Next Time You have earned Rs.%d00000", winPrize - 1);
                i = 11;
                break;
            }

        case7:
            printf("\n\t*********************************************************************************\n");
            printf("\t7].Which of these AnimalsLaughs1?\n\t1].Monkey    2].Tiger    3].Giraffe    4].Hyna\n\t Your Answer plzz ");

            scanf("%d", &n);
            winPrize = winPrize + 1;
            if (n == 4)
            {
                printf("\tYou have entered the correct answer Now you have won Rs.%d00000\n\tYour Next Question is", winPrize);
                newline();
                dash();
                printf(" Your next question is ");
            }
            else
            {
                printf("\tYou have entered the wrong answer Better Luck Next Time You have earned Rs.%d00000", winPrize - 1);

                i = 11;
                break;
            }

        case8:
            printf("\n\t*********************************************************************************\n");
            printf("\t8].Which is the system of Governance in China?\n\t1].communism    2].communalism    3].Monarchy    4].Democratic\n\t Your Answer plzz ");
            scanf("%d", &n);
            winPrize = winPrize + 1;
            if (n == 1)
            {
                printf("\tYou have entered the correct answer Now you have won Rs.%d00000\n\tYour Next Question is", winPrize);
                newline();
                dash();
                printf(" Your next question is ");
            }
            else
            {
                printf("\tYou have entered the wrong answer Better Luck Next Time You have earned Rs.%d00000", winPrize - 1);
                i = 11;
                break;
            }

        case9:
            printf("\n\t*********************************************************************************\n");
            printf("\t9].How many Rings does Olympic Symbolhave?\n\t1].3    2].2    3].6    4].5\n\t Your Answer plzz ");
            scanf("%d", &n);
            winPrize = winPrize + 1;
            if (n == 4)
            {
                printf("\tYou have entered the correct answer Now you have won Rs.%d00000\n\tYour Next Question is", winPrize);
                newline();
                dash();
                printf(" Your next question is ");
            }
            else
            {
                printf("\tYou have entered the wrong answer Better Luck Next Time You have earned Rs.%d00000", winPrize - 1);
                i = 11;
                break;
            }

        case10:
            printf("\n\t*********************************************************************************\n");
            printf("\t10].Who patronised Kalidas?\n\t1].Akbar    2].Chandra Guptha    3].VikramaAditya    4].Krishna Devaraya\n\t Your Answer plzz ");
            scanf("%d", &n);
            winPrize = winPrize + 1;
            if (n == 3)
            {
                printf("\tYou have entered the correct answer Now you have won Rs.%d00000\n\t*YOU HAVE BECOME CROREPATHI OF THIS WEEK*", winPrize);
                newline();
                dash();
                printf(" Your next question is ");
            }
            else
            {
                printf("\tYou have entered the wrong answer Better Luck Next Time You have earned Rs.%d00000", winPrize - 1);
                i = 11;
            }
            break;
            break;
        }
        dash();
        thanks();
        dash();
    }
    getch();
}
