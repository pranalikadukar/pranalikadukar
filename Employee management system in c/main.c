#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int ch=0,lp=1,i=0,n,a=0;
struct employ
{
    int ID;
    char name[20];
    char dpart[10];
    float salary;
};

 struct employ EMP[500];
void menu()
{
   printf(":: MENU ::\n");
   printf("1. Add Emp\n");
   printf("2. Show\n");
   printf("3. Update \n");
   printf("4. Delete \n");
   printf("0. Exit \n");
   printf("\nEnter your choice:") ;
   scanf("%d",&ch);
}
void addemp()
{
    printf("\n\nEnter the number of Emp:");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
            printf("\nEmp:%d\n",i+1);
            printf("EmpID:");
            scanf("%d",&EMP[i].ID);
            printf("Name:");
            scanf("%s",&EMP[i].name);
            printf("Department:");
            scanf("%s",&EMP[i].dpart);
            printf("Salary:");
            scanf("%f",&EMP[i].salary);
            }
            printf("\n");

}
void show()
{
    printf("All Emp Record\n");
            printf("sr\t|\tEmpid\t|\tName\t|\tDpart\t|\tSalary\t|\t\t\n");
           for(i=0;i<n;i++)
            {
                printf("%d\t|\t%d\t|\t%s\t|\t%s\t|\t%f\t|\t\n",i+1,EMP[i].ID,EMP[i].name,EMP[i].dpart,EMP[i].salary);
            }
}
void update()
{    int b=0,E=0;
 char upname[10],updpart[10];
    printf("Enter your Employee ID:");
             scanf("%d",&a);
             for(i=0;i<n;i++)
            { if(a==EMP[i].ID)
             {
                printf("Do you want to update your name?\n1.yes\n 2.No\n");
                 scanf("%d",&b);
                switch(b)
              {
                case 1: printf("your old name is %s\n",&EMP[i].name);
                        printf("What is your correct name:\n");
                        scanf("%s",&upname);
                        printf("ok your old name is %s and Updated Name is %s\n",EMP[i].name,upname);
                        printf("Do you want to update\n1.yes\t2.no\n");
                        printf("choice:");
                        scanf("%d",&b);
                        if(b==1)
                        {   strcpy(EMP[i].name,upname);
                            printf("ok Data Update\n");
                        }
                        else if(b==0||b>2)

                        {
                            printf("wrong input\n");
                        }
                        break;
                case 2: break;
                default:printf("please enter correct input\n");
              }
                        printf("Do you want to update your department?\n1.yes\n 2.No\n");
                        scanf("%d",&b);
                        switch(b)
                        {
                            case 1 :printf("your old dpart is%s\n",EMP[i].dpart);
                                    printf("What is your correct dpart:\n");
                                     scanf("%s",&updpart);

                        printf("ok your old dpart is %s  and  Updated dpart is  %s\n",EMP[i].dpart,updpart);
                        printf("Do you want to update\n1.yes\t2.no\n");
                        printf("choice:");
                        scanf("%d",&b);
                        if(b==1)
                        {   strcpy(EMP[i].dpart,updpart);
                            printf("ok Data Update\n");
                        }
                        else if(b==0 || b>2)
                        {
                            printf("wrong input\n");
                        }
                    break;
                case 2: break;
                default:printf("please enter correct input\n");
             }
              }
             }

}
int main()
{ int temp=0;
    struct employ EMP[500];
    FILE *fp;
    while(lp)
 {
     menu();
    switch(ch)
    {
    case 1:
           addemp();
        break;
    case 2:
          show();

        break;
    case 3:  update();

      break;
    case 4:
        printf("Enter your Employee ID:");
             scanf("%d",&a);
             if(a==EMP[i].ID)

        break;
    case 0: lp=0;
        break;
    default:printf("please enter correct input\n");
        break;
    }
 }
  /*  fp=fopen("Employee data.txt","a""w");
    fprintf(fp,"All Emp Record\n");
            fprintf(fp,"sr\t|\tEmpid\t|\tName\t|\tDpart\t|\tSalary\t|\t\t\n");
           for(i=0;i<n;i++)
            {
                 fprintf(fp,"%d\t|\t%d\t|\t%s\t|\t%s\t|\t%f\t|\t\n",i+1,EMP[i].ID,EMP[i].name,EMP[i].dpart,EMP[i].salary);
            }*/

    return 0;
}
