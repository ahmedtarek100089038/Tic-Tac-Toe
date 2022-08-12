#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* declaration made, two-dimensional array */
    
	char usersign, array[3][3]={ }; 
    int x,y, n=0, row, column;

    printf("\n\t************** Tic Tac Toe! ********************\n\n\n");

    /* print the initial board */
    
	for(x=0; x<3; x++)
        {
            for(y=0; y<3; y++)
            {
            printf("|      |");
            }
        printf("\n");
        }

    while(n==0)
    {
        printf("\nEnter a letter ('X' or 'O' OR 'q' to quit): ");
        scanf("%c", &usersign); 
        fflush(stdin);  /* get rid of the keyboard buffer */

        if(usersign == 'X' || usersign == 'x' || usersign == 'o' || usersign == 'O')
        {
            printf("Row: ");
            scanf("%i", &row);
            printf("Column: ");
            scanf("%i", &column);
            fflush(stdin);
            array[row-1][column-1] = usersign;  /* -1 to make the user input == to the row or column in the user input */

            system("cls");
			
            /* a for loop to made the array with results */
			
            printf("\n\t*********** Tic Tac Toe! *************\n\n");
            for(x=0; x<3; x++)
            {
                for(y=0; y<3; y++)
                {
                printf("|  %c  |",array[x][y]);
                }
            printf("\n");
            }
        }
        
		/* if user input is q or Q the loop will break */
        
		else if (usersign == 'q' || usersign == 'Q')
        {
            printf("\nThank you for playing");
            break;
        }
		
        /* else print msg below to show that the input is wrong */
        
		else
        {
            printf("\nWrong input!Please try again!\n");
        }

        }



    return 0;
}

