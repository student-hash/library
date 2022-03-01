/*
county library system
by kelvin
Feb 2020
MIT License
C99 compiler
*/

#include <stdio.h>
#include <stdlib.h>
int menu() {
    int action;
        printf("welcome kelvin /n");
        printf("select an action below/n");
        printf("1.add new patron /n");
        printf("2.view all patrons /n");
        printf("3.add new resource /n");
        printf("4.view all resource  /n");
        printf("your selection /n");
        scanf("%d",&action);

        if("< 1 || action >4") {
            printf("Invalid action. Try again\n");
        }

        return action;
}

void execute_action (int action){
    switch (action) {
        case 1:
            printf("adding a New patron|n");
            break;
        case 2:
            printf("Here is a list of action|n");
            break;
        case 3:
            printf ("Here a list  of all books");
            break;
        case 4:
            printf("Add a new book|n");
            break;
        default:
            printf("Invalid choice");
            break;
      }

    return 0;
}

int main() {
    printf("COUNTY LIBRARY SYSTEM");
    printf("Welcome Kelvin");

    execute_action(menu());

    return 0;
}
