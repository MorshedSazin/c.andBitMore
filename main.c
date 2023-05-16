
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int  main(){
	// int num1; int num2;
	// scanf("%d", &age);
	// int favNum = 90;

	// char color[20];
	// char pluralNoun[20];
	// char celebrityF[20],celebrityL[20];

	char name[20];

	// printf("Enter a color: ");
	// scanf("%s", color);
	// printf("Enter a pluralNoun :");
	// scanf("%s", pluralNoun);
	// printf("Enter a celebrity name :");
	// scanf("%s%s", celebrityF,celebrityL);
	///--------------------------------
	printf("enter something for fgets: ");
	fgets(name, 20, stdin);


	// printf("rose are %s\n",color);
	// printf("%s are blue\n",pluralNoun);
	// printf("I love %s %s\n",celebrityF,celebrityL );

	printf("Your name is %s abcdefg\n", name);
			
 return 0;
}
 