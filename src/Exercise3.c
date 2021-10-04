/*
3.	Write a program to find all prime number less than a given integer N 
(optional: provide an optimal solution)
Ex:
 ____________________________________
| Input: 10                          |
| Output: 2 3 5 7                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	int i,t,m;
	//Your codes here
    for(t=2;t<testcase;t++) {
		m=0;
	for(i=2;i<t;i++){
		if (t%i==0){
			m=1;
		}
	}
	if (m==0){
		printf("%d ",t);
	}
    }
	return 0;
	}
