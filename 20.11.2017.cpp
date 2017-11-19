#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define sucet 20

typedef struct {
   char city[20];
   int pc;
}address_detail;

typedef struct{
   char name[20];
   int age;
   float salary;
   address_detail address;
} person;

int main()
{
   srand(time(NULL));
    
   person student[20];
   strcpy(student[0].name,"Sebastian"); student[0].age=35; student[0].salary=1452; 
   strcpy(student[0].address.city,"Kosice"); student[0].address.pc=92512;
   strcpy(student[1].name,"David"); student[1].age=45; student[1].salary=1471; 
   strcpy(student[1].address.city,"Kosice"); student[1].address.pc=04001;
   strcpy(student[2].name,"Filip"); student[2].age=30; student[2].salary=987; 
   strcpy(student[2].address.city,"Bardejov"); student[2].address.pc=82356;
   strcpy(student[3].name,"Janka"); student[3].age=19; student[3].salary=1203; 
   strcpy(student[3].address.city,"Levoca"); student[3].address.pc=14780;
   strcpy(student[4].name,"Denisa"); student[4].age=35; student[4].salary=859; 
   strcpy(student[4].address.city,"Kosice"); student[4].address.pc=90845;

   strcpy(student[5].name,"Dominik"); student[5].age=28; student[5].salary=1452; 
   strcpy(student[5].address.city,"Kosice"); student[5].address.pc=84652;
   strcpy(student[6].name,"Jan"); student[6].age=31; student[6].salary=1020; 
   strcpy(student[6].address.city,"Senica"); student[6].address.pc=71254;
   strcpy(student[7].name,"Tobias"); student[7].age=32; student[7].salary=456; 
   strcpy(student[7].address.city,"Senec"); student[7].address.pc=12387;
   strcpy(student[8].name,"Tereza"); student[8].age=41; student[8].salary=785; 
   strcpy(student[8].address.city,"Poprad"); student[8].address.pc=12874;
   strcpy(student[9].name,"Slavka"); student[9].age=20; student[9].salary=1025; 
   strcpy(student[9].address.city,"Kosice"); student[9].address.pc=68787;
   
   strcpy(student[10].name,"Samuel"); student[10].age=24; student[10].salary=1332; 
   strcpy(student[10].address.city,"Kosice"); student[10].address.pc=87458;
   strcpy(student[11].name,"Xenia"); student[11].age=22; student[11].salary=800; 
   strcpy(student[11].address.city,"Presov"); student[11].address.pc=8001;
   strcpy(student[12].name,"Daniel"); student[12].age=44; student[12].salary=1701; 
   strcpy(student[12].address.city,"Michalovce"); student[12].address.pc=07101;
   strcpy(student[13].name,"Branislav"); student[13].age=25; student[13].salary=1101; 
   strcpy(student[13].address.city,"Martin"); student[13].address.pc=41444;
   strcpy(student[14].name,"Simona"); student[14].age=32; student[14].salary=1045; 
   strcpy(student[14].address.city,"Kosice"); student[14].address.pc=04022;
   
   strcpy(student[15].name,"Dusan"); student[15].age=18; student[15].salary=697; 
   strcpy(student[15].address.city,"Michalovce"); student[15].address.pc=55654;
   strcpy(student[16].name,"Kamil"); student[16].age=28; student[16].salary=1500; 
   strcpy(student[16].address.city,"Kosice"); student[16].address.pc=04011;
   strcpy(student[17].name,"Michaela"); student[17].age=27; student[17].salary=1300; 
   strcpy(student[17].address.city,"Senec"); student[17].address.pc=92545;
   strcpy(student[18].name,"Roman"); student[18].age=18; student[18].salary=1005; 
   strcpy(student[18].address.city,"Presov"); student[18].address.pc=04001;
   strcpy(student[19].name,"Oliver"); student[19].age=30; student[19].salary=1206; 
   strcpy(student[19].address.city,"Kosice"); student[19].address.pc=04012;
   
   int i;
   int j;

   // 1.... mena a mesta
   	printf("\nCities of all: ");
   	for(i=0;i<20;i++)
		printf("\n*%s* is from *%s*", student[i].name, student[i].address.city);
	
		// 2...name a plat	
	printf("\n\n");
	float topsalary;
	topsalary=student[0].salary;
	char topstudent[20];
	strcpy(topstudent, student[0].name);

	for(i=0;i<20;i++)
	{
		if(topsalary<student[i].salary)
		{
			topsalary=student[i].salary;
			strcpy(topstudent, student[i].name);
		}
	}
	printf("\nMost paid student is: %s with %1.3f", topstudent, topsalary);
	

	// 3... Students = Kosice/Presov
	
	printf("\n Students from KE/PO");
	for(i=0;i<20;i++)
	{
		int z;
		int x;
		z=strcmp(student[i].address.city, "Ko�ice");
		x=strcmp(student[i].address.city, "Pre�ov");
		
		if(z==0 || x==0)
			printf("\n %s", student[i].name);
		
	}
   
   // 4... students 1000 < 1300
	printf("\nstudents between 1000 <> 1300 salary:\n");
	for(i=0;i<20;i++)
	{
		if(student[i].salary>=1000 && student[i].salary<=1300)
		printf("%s ", student[i].name);
	}
	
	// 5... Average?
	int average;
	int sum;
printf("\n");
	for(i=0;i<20;i++)
	{
		sum+=student[i].age;
	}
	average=sum/20;	
	printf("\nAverage age is: %f1.2", average);
	
	// 6... students under 30 with salary average
	float sumsalary=0;
	float averageSalary;
	int countSalary=0;
	for(i=0;i<20;i++)
	{
		if(student[i].age<30)
		{
			sumsalary+=student[i].salary;
			countSalary++;
		}
	}
	averageSalary=sumsalary/countSalary;
	printf("\n students under 30age + salary %1.2f\n", averageSalary);
	
	// 7... Not Kosice
	int e;
	for(i=0;i<20;i++)
	{
		e=strcmp(student[i].address.city,"Ko�ice");
		if(e!=0)
		printf("\n students not from Kosice %s", student[i].name);
	}
	//8... oldest guy
	int oldestage;
	oldestage=student[i].age;
	for(i=0;i<20;i++)
	{
		student[0].age<student[i].age;
	}
	printf("\noldest student is %s", student[i].name);
	
	// 8... longer name than 7
printf("\nStudent their name is longer than 7 characters: ");
for(i=0;i<20;i++)
{

int len=strlen(student[i].name);
if(len>7)
printf("%s,",student[i].name);
}


// 9... ascending:
int p;
putchar('\n');
printf("\nSort salary ascending: ");
 for(i=0;i<20-1;i++){
      for(p=i+1;p<20;p++){
          if( student[i].salary>student[p].salary){
             
             float temps=student[i].salary;
             student[i].salary=student[p].salary;
             student[p].salary=temps;
		  }
	  }
   }  
   
   for(i=0;i<20;i++)
   printf("\n%s",student[i].name);
}

