/* Accept number of rows and columns from user and display below pattern.
 Input : iRow = 4     iCol = 4
 OUTPUT :
            A   B   C   D
            a   b   c   d
            A   B   C   D
            a   b   c   d
*/

////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////


#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Description     :   Used to print pattern
//  Input           :   Integer
//  Output          :   Pattern
//  Author          :   Omkar Sachin Narlawar
//  Date            :   22/11/2025
//
////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
        char ch1 = '\0';
        char ch2 = '\0';

        for(i = 1; i <= iRow; i++)
        {
            ch1 = 'A';
            ch2 = 'a';

            for(j = 1; j <= iCol; j++)
            {
                if((i % 2) == 0)
                {
                    printf("%c\t",ch2);
                    ch2++;
                }
                else
                {
                    printf("%c\t",ch1);
                    ch1++;
                }
            }
            printf("\n");
        }
}// End of Class

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of Columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}// End of Main
