#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* code */
    int input;
    int row,col,val;
    scanf("%d",&input);            // getting input value
    val = input;
    
    for(row=0;row<input;row++){    // for printing rows
        for(col=0;col<input;col++) // for printing columns
        {
            printf("%d ",val);
            if(col<row){          
                val--;
            }
        }
        val = input;
        printf("\n");
    }
    return 0;
}
