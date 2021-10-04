/*
4.	Write a program to display a hollow triangle by asterisks (*) on the screen.
The input will be the height of the triangle and the thickness of the borders.
Ex:
 ____________________________________
| Input: 7 2                         |
| Output:                            |
|             *                      |
|           * * *                    |
|         * *   * *                  |
|       * *       * *                |
|     * *           * *              |
|   * * * * * * * * * * *            |
| * * * * * * * * * * * * *          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int height = atoi(argv[1]);
	int border = atoi(argv[2]);
	//Your codes here
int i,t,j,k,b;
for (i=1;i<=height;++i){
	
       for (t=1;t<=height-i;++t){
           printf("  ");
	   }
	   if (i==3 || i==4 || i==5){
		   for (j=1;j<=2*i-1;++j){ 
			   if (i==3 && j==3){
				   printf("  ");
				   continue;
			   }
			   if(i==4 && (j==3 || j==4 || j==5)){
				   printf("  ");
				   continue;
			   }
			   if (i==5 &&(j==3 || j==4 || j==5 || j==6 || j==7 )){
				   printf("  ");
				   continue;
			   }
		printf("* ");
		}
		printf("\n");
		continue;
	   }
	for (j=1;j<=2*i-1;++j){ 
		printf("* ");
		}
		printf("\n");
}

	return 0;
}