#include<stdio.h>
#include<conio.h>
main()
{
   int m, n, c, d, matrix[10][10], maximum;
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d",&m,&n);
   printf("Enter the elements of matrix\n");
   for( c = 0 ; c < m ; c++ )
   {
      for( d = 0 ; d < n ; d++ )
      {
         scanf("%d",&matrix[c][d]);
      }
   }

   maximum = matrix[0][0];

   for( c = 0 ; c < m ; c++ )
   {
      for( d = 0 ; d < n ; d++ )
      {
         if ( matrix[c][d] > maximum )
            maximum = matrix[c][d];
      }
   }
   printf("Maximum element in matrix is %d\n", maximum);
   getch();
   return 0;
}
