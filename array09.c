#include <stdio.h>
main()
{
      int i,j;
      float x[3][4] =
			{
            1.00, 2.00, 3.00, 4.00,
            5.00, 6.00, 7.00, 8.00,
            9.00, 10.0, 11.0, 12.0,
			};
            for (i=0;i<3;i++)
			{
                for (j=0;j<4;j++)
				{
                    printf ("%8.2f",x[i][j]);
				}                 
					printf("\n");
                    printf ("\n");
				}
                    return 0;
            }
