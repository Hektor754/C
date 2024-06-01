# include <stdio.h>
# include <stdlib.h>
typedef struct
{
	int home;
	int visitor;
}Game;

int main()
{
	Game **myGame;

	int i;
	int countOnes = 0;
	int bestMatch  =0;
	int bestMatchGoal =0;
	FILE *fp=fopen("goals.txt","r");
	int countGames;
	int a,b;
	while(fscanf(fp,"%d %d",&a,&b)>0)
	{
		countGames++;
	}
	myGame = (Game **)malloc( countGames * sizeof(Game *));
	for(i=0;i<countGames;i++)
	 myGame[i] = (Game *)malloc(sizeof(Game));
	fclose(fp);
	fp = fopen("goals.txt","r");
	for(i=0;i<countGames;i++)
	{
		 fscanf(fp,"%d %d",&myGame[i]->home,&myGame[i]->visitor);
	}
	
	
	for(i=0;i<6;i++)
	{
		int sum = myGame[i]->home+myGame[i]->visitor;
		if(sum>bestMatchGoal)
		{
			bestMatchGoal = sum;
			bestMatch =i;
		}
		printf("%d - % d \n",myGame[i]->home,myGame[i]->visitor);
		if(myGame[i]->home > myGame[i]->visitor)
		   countOnes++;
	
	}
	
	printf("Ones: %d \n",countOnes);
	printf("Ta pio  pola goal ston agona %d \n",bestMatch);
	for(i=0;i<countGames;i++) 
	   free(myGame[i]);
	free(myGame);
	fclose(fp);
 return 0;
}
