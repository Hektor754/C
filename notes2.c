# include <stdio.h>

typedef struct 
{
	int hour;
	int minute;
	int second;
} Time;


Time readTime()
{
	Time x;
	do
	{
		printf("Doste ora ?\n");
		scanf("%d",&x.hour);
	}while(x.hour<0 || x.hour>23);
	
	do
	{
		printf("Doste lepta?\n");
		scanf("%d",&x.minute);
	}while(x.minute<0 || x.minute>59);
	
	do
	{
		printf("Doste deuterolepta?\n");
		scanf("%d",&x.second);
	}while(x.second<0 || x.second>59);
	
	return x;
}

/** pairnei seconds kai ta metatrepei se Time **/
Time seconds2time(int seconds)
{
	Time T;
	T.hour = seconds/(60 * 60);
	seconds = seconds - T. hour *60  *60;
	T.minute=seconds/60;
	seconds = seconds - T.minute * 60;
	T.second=seconds;
	return T;
}


int time2seconds(Time d)
{
	return d.hour * 60  * 60+d.minute * 60+d.second;
}


/** auti i sunartisi epistfefei poso apexoyn xronika dyo stigmes
 * px 02:31:19 **/
Time diffTime(Time a,Time b)
{
	int t1=time2seconds(a);
	int t2=time2seconds(b);
	int t3=t1-t2;
	Time diff;
	if(t3<0) t3=-t3;
	diff=seconds2time(t3);
	return diff;
}


/** Epistrefei  1 an d1>d2, 0 an d1=d2, -1 and d2>d1 **/
int compareTimes(Time d1,Time d2)
{
	int secs1=time2seconds(d1);
	int secs2=time2seconds(d2);
	if(secs1>secs2) return 1;
	else
	if(secs2>secs1) return -1;
	
	/*
	if(d1.hour > d2.hour) return 1;
	else
	if(d1.hour < d2.hour) return -1;
	else
	{
		if(d1.minute>d2.minute) return 1;
		else
		if(d1.minute<d2.minute) return -1;
		else
		{
			if(d1.second>d2.second) return 1;
			else
			if(d1.second<d2.second) return -1;
			else return 0;
		}
	}*/
	return 0;
}

void printTime(Time d)
{
	printf("%02d:%02d:%02d\n",d.hour,d.minute,d.second);
}

/** Epistrefei tin epomeni xroniki stigmi kata 1 deyterolepto **/
Time nextSecond(Time d)
{
	Time nd;
	nd.hour=d.hour;
	nd.minute=d.minute;
	nd.second=d.second;
	nd.second++;
	if(nd.second>59)
	{
		nd.second=0;
		nd.minute++;
		if(nd.minute>59)
		{
			nd.minute=0;
			nd.hour++;
			if(nd.hour>23)
			{
				nd.hour=0;
			}
		}
	}
	return nd;
}

int main()
{
	Time d1,d2,d3;

	d1=readTime();
	d2=readTime();
	d3=diffTime(d1,d2);
	printTime(d3);
	return 0;
}
