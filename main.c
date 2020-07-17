
//Listing 18.9 Seaching for a set of characters with strcspn() function; page 470


//** NOTE: THIS PROGRAM IS NOT LOOKING FOR A STRING WITHIN A STRING EXACTLY (LIKE SEARCHING FOR "CATS" IN
//    "ALL CATS ARE AWESOME".  IT WOULD NOT LOCATE CATS AT POSITION 4.  RATHER IT WOULD LOCATE IT AT POSITION 0
//    BECAUSE "CATS" HAS AN "A" IN IT AND "ALL CATS ARE AWESOME, STARTS WITH AN "A". SO, BASICALLY IT LOOKS FOR
//    ANY OF THE LETTERS FROM THE SECOND STRING TO SEE IF/WHERE THEY ARE IN THE FIRST STRING


#include <stdio.h>
#include <string.h>


//The strcspn() function scans the main string for the given string and returns the number of characters
//  in the main string from beginning till the first matched character is found.

int main(void)
{
    char buf1[80], buf2[80];
    size_t loc;

    //reset both string arrays to blanks - ie \0 is the null char
    memset(buf1, '\0', sizeof buf1);
    memset(buf2, '\0', sizeof buf2);

    //input the strings

    printf("Enter the string to be searched...\n");
    gets(buf1);
    printf("Echo string1 -> %s\n", buf1);
    printf("Enter the string containing target characters (what you're searching for)...");
    gets(buf2);
    printf("Echo string2 -> %s\n", buf2);

    //perform the search
    loc = strcspn(buf1, buf2);

    if(loc == strlen(buf1))
    {
        printf("\nNo match was found...\n");
    }
    else
    {
        printf("\nThe first match was found at position %lu.\n", loc);
    }

    return 0;

}
