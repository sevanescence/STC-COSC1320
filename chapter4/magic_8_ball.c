#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Total number of messages in 8-Ball
#define MSGSIZE 20

int main() {
    srand(time(0));
    //Array of possible messages: MSGSIZE in total
    char* message[] = {"It is certain.\n", "It is decidedly so.\n", "Without a doubt.\n", "Yes definitely.\n", "You may rely on it.\n", "As I see it, yes.\n", "Most likely.\n", "Outlook good.\n", "Yes.\n", "Signs point to yes.\n", "Reply hazy, try again.\n", "Ask again later.\n", "Better not tell you now.\n", "Cannot predict now.\n", "Concentrate and ask again.\n", "Don't count on it.\n", "My reply is no.\n", "My sources say no.\n", "Outlook not so good.\n", "Very doubtful.\n"};
    //User's choice to continue
    char choice;
    //User's question. A dummy variable
    char question[256];

    do {
        printf("Ask your question, MORTAL: ");
        scanf("%255[^\n]s", question);
        fflush(stdin);

        //Random number between 1 and MSGSIZE
        int randInt = rand() % MSGSIZE;

        printf("%s", message[randInt]);

        printf("Would you like to try again, MORTAL? (Y/N): ");
        scanf("%c", &choice);
        fflush(stdin);
    } while (choice != 'N');

    return 0;
}
