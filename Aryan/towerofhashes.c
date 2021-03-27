// printing pyramid of hashes 


#include <stdio.h>


int main()
{
    int n;
    do
    {
        
        printf("Height : "); // inputing the value
        scanf("%d",&n);
    }
    while(n<=0 || n>8);
    // printf("Stored : %d\n", n); // storing the value
    
    //printing the hashes
    //rows 
    for(int rows=1 ; rows<=n ; rows++)
    {
        //spaces before 1st #
        for(int i=1 ; i<=n-rows ; i++)
        {
            printf(" ");
        }
        //right aligned # pyramid
        for(int j=1 ; j<=rows ; j++)
        {
            printf("#");
        }
        //spaces in the centre
        printf("  ");
        //left aligned # pyramid
        for(int k=1 ; k<=rows ; k++)
        {
            printf("#");
        }
        //changing to next row
        printf("\n");
    }
    
    return 0;
}

// output
// Height : 5
//     #  #
//    ##  ##
//   ###  ###
//  ####  ####
// #####  #####