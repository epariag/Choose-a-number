//Emily Pariag
//14-02-2023
//This program will prompt the user for a number from 1 to 6 and output a pickup line to the screen.

#include <stdio.h>
#include <string.h>

//Begin Main Program
int main (void) {

  //Declaration of Variables
  char Answer[15];
  int Num;
  char *Pickup[] = {
        "Did you fart?",
        "Are you http?",
        "Are you my phone screen?",
        "I just wanna cddle, but I can't",
        "Can you help me with this equation?",
        "ALbert Einstein said that nothing is faster than light",
        "I'm just a zero, but together we'll be a ten.",
        "If Jesus could turn water into wine",
        "If gravity didn't exist...",
        "Guess what I'm wearing!",
        "I've discovered the recipe for happiness and the final ingredient is you.",
        "If I had a dollar for every time I thought of you",
        "If I had a choice between breathing or loving you",
        "You may fall from the sky. You may from a tree.",
        "Hey! Did you know you would have saved the titanic from sinking?"
  };
  char *Line[] = {
        "Cause you blew me away!",
        "Because without you I'm just ://",
        "Cause I wanna touch you every second.",
        "Cause I'm missing u.",
        "U + 15 = 25, nevermind I got it. U is definitely a 10!",
        "Well he clearly hasn't seen how fast I've fallen for you.",
        "Cause you're the only one I need by my side",
        "Could I turn you into mine ;))",
        "I would still find myself falling for you",
        "The smile you gave me :)",
        "Will you help me complete the recipe?",
        "I would have a dollar cause you never leave my mind.",
      "I'd say I love you with my last breath.",
      "But the best way to fall...is in love with me.",
      "Cause the iceberg would have melted just looking at you."
  };

  printf("To my beloved: Happy Valentine's Day, Boba!\n"); //prints a message to the screen, greeting
  printf("To stop the program, enter 0 as your chosen number."); //prints a message to the screen, provides further guidance to user

  printf("\n");//prints a blank line to the screen
  
  do{ //Beginning of Do...While Loop
    printf("\n"); //prints a blank line to the screen
  printf("Please choose a number from 1 to 15: "); //prints a message to the screen, prompting user to enter a number
  scanf("%d", &Num); //requests a number

  printf("\n");//prints a blank line to the screen

  switch (Num){ //Beginning of Switch
    
    case 1: 
        printf("%s", Pickup[0]);
        printf("\n");
        
        printf("Your Response: ");
        scanf(" %[^\n]s", Answer);
        printf("\n");
        
        printf("%s", Line[0]);
        printf("\n");
    break;

    case 2:
      printf("%s", Pickup[1]);
      printf("\n");

      printf("Your Response: ");
      scanf(" %[^\n]s", Answer);
      printf("\n");
      
      printf("%s", Line[1]);
      printf("\n");
    break;

    case 3:
      printf("%s", Pickup[2]);
      printf("\n");

      printf("Your Response: ");
      scanf(" %[^\n]s", Answer);
      printf("\n");
      
      printf("%s", Line[2]);
      printf("\n");
    break;    

    case 4: 
        printf("%s", Pickup[3]);
        printf("\n");
        
      	printf("Your Response: ");        
        scanf(" %[^\n]s", Answer);
        printf("\n");
        
        printf("%s", Line[3]);
        printf("\n");  
    break;

    case 5: 
        printf("%s", Pickup[4]);
        printf("\n");
        
        printf("Your Response: ");
	    scanf(" %[^\n]s", Answer);
        printf("\n");
        
        printf("%s", Line[4]);
        printf("\n");  
    break;    

    case 6: 
        printf("%s", Pickup[5]);
        printf("\n");
      
        printf("Your Response: ");
        scanf(" %[^\n]s", Answer);
        printf("\n");
      
        printf("%s", Line[5]);
        printf("\n");   
    break;   

    case 7: 
        printf("%s", Pickup[6]);
        printf("\n");
        
        printf("Your Response: ");        
        scanf(" %[^\n]s", Answer);
        printf("\n");
        
        printf("%s", Line[6]);
        printf("\n");
    break;

    case 8: 
        printf("%s", Pickup[7]);
        printf("\n");

        printf("Your Response: ");       	    
        scanf(" %[^\n]s", Answer);
        printf("\n");
        
        printf("%s", Line[7]);
        printf("\n");
    break;

    case 9: 
        printf("%s", Pickup[8]);
        printf("\n");
        
        printf("Your Response: ");        
        scanf(" %[^\n]s", Answer);
        printf("\n");
        
        printf("%s", Line[8]);
        printf("\n");
    break;

    case 10: 
        printf("%s", Pickup[9]);
        printf("\n");
        
        printf("Your Response: ");        
        scanf(" %[^\n]s", Answer);
        printf("\n");
        
        printf("%s", Line[9]);
        printf("\n");
    break;

    case 11: 
        printf("%s", Pickup[10]);
        printf("\n");
        
        printf("Your Response: ");        
        scanf(" %[^\n]s", Answer);
        printf("\n");
        
        printf("%s", Line[10]);
        printf("\n");
    break;

    case 12: 
        printf("%s", Pickup[11]);
        printf("\n");
        
        printf("Your Response: ");        
        scanf(" %[^\n]s", Answer);
        printf("\n");
        
        printf("%s", Line[11]);
        printf("\n");
    break;

    case 13: 
        printf("%s", Pickup[12]);
        printf("\n");
        
        printf("Your Response: ");        
        scanf(" %[^\n]s", Answer);
        printf("\n");
        
        printf("%s", Line[12]);
        printf("\n");
    break;

    case 14: 
        printf("%s", Pickup[13]);
        printf("\n");
        
        printf("Your Response: ");        
        scanf(" %[^\n]s", Answer);
        printf("\n");
        
        printf("%s", Line[13]);
        printf("\n");
    break;

    case 15: 
        printf("%s", Pickup[14]);
        printf("\n");
        
        printf("Your Response: ");        
        scanf(" %[^\n]s", Answer);
        printf("\n");
        
        printf("%s", Line[14]);
        printf("\n");
    break;
    
    default: printf("You have entered a number outside of the range.");//prints a message to the screen, notifying the user that they enter a number outside of the given range.
    printf("\n");//prints a blank line to the screen
    } //End of Switch

  }while(Num!=0);//End of Do...While, condition to be tested

  printf("\n");//prints a blank line to the screen

  printf("I love you<3\nMy adorable, precious boba ~mwah~"); //prints message to the screen when condition is true
  return 0;
  
}//End Program