/**
ID  : 212902042
Name: Md. Asaddozjaman
Project no  : 01
Project name: Simple Election System in c.
*/

//Library Function call
#include<stdio.h>


#define CANDIDATE_COUNT
#define CANDIDATE1 "Hasibul Hasan Khan"
#define CANDIDATE2 "Asaddozjaman"
#define CANDIDATE3 "Puja Bharman"
#define CANDIDATE4 "Anik Hasan"

// Function Prototype
int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0;

//main function
int main()
{
    // variable declear
    int i;
    int choice;

    do      // using do loop
    {
        printf("\n Welcome to Election 2022 \n");

        printf("\n 1. Cast the Vote");
        printf("\n 2. Find Vote Count");
        printf("\n 3. Find leading Candidate");
        printf("\n 0. Exit");

        printf("\n\n Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)      // use switch statment
        {
            case  1: castVote();break;
            case  2: votesCount();break;
            case  3: getLeadingCandidate();break;
            case  0: end();break;


            default: printf("\n Error: Invalid Choice");
        }
    }

    while(choice!=0);

    return 0;
}

// function for displaying the CastVote
void castVote()
{
int choice;

    printf("\n\n Choose your Candidate \n");

    printf("\n 1. %s", CANDIDATE1);
    printf("\n 2. %s", CANDIDATE2);
    printf("\n 3. %s", CANDIDATE3);
    printf("\n 4. %s", CANDIDATE4);

    printf("\n\n Enter your choice:");
    scanf("%d",&choice);

    printf("\n\n");

switch(choice) // use switch statement
    {
        case 1: votesCount1++;
        break;

        case 2: votesCount2++;
        break;

        case 3: votesCount3++;
        break;

        case 4: votesCount4++;
        break;

        default: printf("\n Error: Wrong Choice !! Please retry \n");
    }
    printf("Thank you for vote \n");
}

// function for displaying the VotesCount
void votesCount()
{
    printf("\n\n Voting Statics ");

    printf("\n %s - %d ", CANDIDATE1, votesCount1);
    printf("\n %s - %d ", CANDIDATE2, votesCount2);
    printf("\n %s - %d ", CANDIDATE3, votesCount3);
    printf("\n %s - %d ", CANDIDATE4, votesCount4);

    printf("\n\n");
}

// function for displaying the Leading Candidate
void getLeadingCandidate()
{
    printf("\n\n Leading Candidate \n\n");

    if
        (votesCount1> votesCount2 && votesCount1> votesCount3 && votesCount1> votesCount4)
        printf("[%s]",CANDIDATE1);

    else if
        (votesCount2> votesCount3 && votesCount2> votesCount4 && votesCount2> votesCount1)
        printf("[%s]",CANDIDATE2);

    else if
        (votesCount3> votesCount4 && votesCount3> votesCount2 && votesCount3> votesCount1)
        printf("[%s]",CANDIDATE3);

    else if
        (votesCount4> votesCount1 && votesCount4> votesCount2 && votesCount4> votesCount3)
        printf("[%s]",CANDIDATE4);

    else
        printf("Warning !!! No-win situation");

    printf("\n\n");

}

