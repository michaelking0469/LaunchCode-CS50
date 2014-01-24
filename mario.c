#include <stdio.h>
#include <cs50.h>

/*  This program is to create a half pyramid that will be right justified and as tall as a user
    will input as a integer number between 0 and 23.
                                                                                            */
int main(void)
{
    /*  Define all variables needed to solve the problem.                                   */
    int height;
    int spaces;
    int pounds;
    int counter;
    
    /*  Loop through until you get a non-negitive up to a max value of 23.                  */
    do
    {    
    /* Request a positive number between 0 - 23                                             */
    printf("Give me a number between 0 and 23, \n");
    height = GetInt();
    spaces = height - 1;
    pounds = height + 1;
    counter = height + 1;
    
    /*  Print Try again if the value of Height is invalid                                   */          
    if (( height < 0 ) | ( height > 23 )) 
    printf("Please try again, \n");                          
    }           
    while  (( height < 0 ) | ( height > 23 ));
    
    if ( height == 0 )  
    {
    return 0;
    }
    /*  Print the value of Height                  */
    if (( height >= 0 ) && ( height <= 8 )) 
    {
    printf("Height: %d\n",height);        
    } 
    else
    do 
    {
    for ( int i = 1; i < ( height - 8 ); i++ )     
                 {
                 printf(" ");
                 }
                                                                                         
    printf("Height: %d\n",height);
    }
    while  ( height < 0 );

     
    /*  Check for a 0 height pyramid and branch around the print routines                  */   
    while ( height != 0 )   
    {
        do 
        {
    /*  You want to decrement the spaces written and increment the pounds symbals for each 
        level of the pryamid                                                               */      
        for ( int i = 1; i < height; i++ )     
                 {
                 printf(" ");
                 }
               
        for ( int i = counter; i > height ; i-- ) 
                 {
                 printf("#");
                 pounds = pounds - 1;
                 }
    /*  Print the last # char with a carriage return to produce the line of a pyramid     */   
                 printf("#\n");
                 height = height - 1 ;
    }
    /*  Loop through until you have produces a pyramid the height the user requested      */    
    while  ( height > 0 );
    }
}
