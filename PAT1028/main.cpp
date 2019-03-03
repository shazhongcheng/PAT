#include <stdio.h>
#define  N 100000

struct Population
{
	char name[6];
	int year;
	int month;
	int day;
};

int main()
{
	int number,count=0;
	scanf("%d",&number);
	Population population[N];
	Population max={"Tom",1814,9,6},min={"Steve",2014,9,6};
	for(int i=0;i<number;i++)
	{
		scanf("%s %d/%d/%d",population[i].name,&population[i].year,&population[i].month,&population[i].day);
	}
    for(int i=0;i<number;i++)   //筛选
    {
    	if(population[i].year>1814&&population[i].year<2014)
    	  count++;
    	else if(population[i].year==1814)
    	{
    		if(population[i].month>9)
    		 count++;
    		else if(population[i].month==9)
    		{
    			if(population[i].day>=6)
    			 count++;
    			else
			     population[i].year=2015;
			}
			else
			 population[i].year=2015;
		}
		else if(population[i].year==2014)
    	{
    		if(population[i].month<9)
    		 count++;
    		else if(population[i].month==9)
    		{
    			if(population[i].day<=6)
    			 count++;
    			else
			     population[i].year=2015;
			}
			else
			 population[i].year=2015;
		}
		else
		  population[i].year=2015;
	}
	for(int i=0;i<number;i++)//寻找最大年龄
	{
		if(population[i].year<2015&&population[i].year<min.year)
		  min=population[i];
		else if(population[i].year<2015&&population[i].year==min.year)
		{
			if(population[i].month<min.month)
			min=population[i];
			else if(population[i].month==min.month)
			if(population[i].day<min.day)
			min=population[i];
		}
	}
	for(int i=0;i<number;i++)//寻找最小年龄
	{
		if(population[i].year<2015&&population[i].year>max.year)
		  max=population[i];
		else if(population[i].year<2015&&population[i].year==max.year)
		{
			if(population[i].month>max.month)
			max=population[i];
			else if(population[i].month==max.month)
			if(population[i].day>max.day)
			max=population[i];
		}
	}
	//解决节点3错误
    printf("%d",count);
    if(count!=0){
        printf(" %s %s",min.name,max.name);
    }

	return 0;
}
