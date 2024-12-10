#include <stdio.h>
int bonus(int sal){
	int bonus=(sal*10)/100;
	return sal+bonus;
}
int main(){
struct employee{
	char name[20];
	int id;
	int sal;
	int noe;
	int year;
};
struct employee e;
printf("Enter number of employee\n");
scanf("%d",&e.noe);
printf("enter the year\n");
scanf("%d",&e.year);
for(int i=0;i<e.noe;i++){
	if(e.year>5){
		printf("Enter the name\n ");
		scanf("%s",e.name);
		printf("Enter the id\n");
		scanf("%d",&e.id);
		printf("Enter the salary\n");
		scanf("%d",&e.sal);
		printf("%d",bonus(e.sal));
	}
	else{
		printf("you are not eligible for bonus");
	}
}
for(int i=0;i<e.noe;i++){
	printf("Name is : %s",e.name);
	printf("id is : %d ",e.id);
	printf("salary is %d:",e.sal);
	printf("total salary is %d :",bonus(e.sal));
}

}
