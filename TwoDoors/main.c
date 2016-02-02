//
//  main.c
//  TwoDoors
//
//  Created by Karlo Pagtakhan on 01/24/2016.
//  Copyright © 2016 AccessIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char play;
    int choice; //change to int
    int continueplaying = 1;
    
    printf("Welcome to Two doors.\n");
    printf("Would you like to play? (y/n): ");
    scanf("%s", &play); //change %d to %s
    
    if (play == 'y') { //change = to ==
        
        while (continueplaying == 1) {
            //change print to printf
            printf("\nYou are a prisoner in a room with 2 doors and 2 guards.\n");
            printf("One of the doors will guide you to freedom and behind the other is a hangman --you don't know which is which.\n");
            printf("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n");
            printf("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n");
            printf("What do you ask so you can pick the door to freedom?\n\n");
            printf("\t1.Ask the truth-guard to point to the door of doom.\n");
            printf("\t2.Ask the liar-guard to point to the door of doom.\n");
            printf("\t3.Doesn't matter which one you pick.\n");
            scanf("%d", &choice);//change scan to scanf,%f to %c, add & before choice
        
            char answer[150] = "No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n";//change to string
            switch (choice) {
                case 1:
                    printf("%s", answer);//change print to printf and change c to %s
                    break;
                case 2:
                    printf("%s", answer);//change print to printf and change c to %s
                    break;
                case 3:
                    printf("%s", answer);//change print to printf and change c to %s
                    break;
                default:
                    break;
            }
        
            printf("\nWould you like to play again? (y/n): ");
            scanf("%s", &play); //change %d to %s
            
            if (play == 'y'){
                continueplaying = 1;
            } else {
                continueplaying = 0;
            }
        }
    }
    return 1;
}