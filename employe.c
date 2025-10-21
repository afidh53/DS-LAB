    #include <stdio.h>

    struct employee{
        int emp_id;
        char name[20];
        float salary;
    };

    int main() {
        struct employee e[3];
        int i;
        printf("****Employee Details**** \n");
        for(i = 0;i < 3;i++)
        {
            printf("-> Employee %d \n",i+1);
            printf("Enter the employee_id : ");
            scanf("%d",&e[i].emp_id);
            printf("Enter the name of the employee : ");
            scanf("%s",e[i].name);
            printf("Enter the salary : ");
            scanf("%f",&e[i].salary);
        }
        printf("****Final Report**** \n");
        for(i = 0;i < 3;i++)
        {
            printf("-> Details of employee %d \n",i+1);
            printf("Emp_ID : %d \n",e[i].emp_id);
            printf("Name : %s \n",e[i].name);
            printf("Salary : %.2f \n",e[i].salary);
        }
        return 0;
    }


