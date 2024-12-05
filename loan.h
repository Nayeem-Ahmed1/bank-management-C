// loan.h
#ifndef LOAN_H
#define LOAN_H




void loan_apply(void){

    system("cls");
    int choice,income_num,main_exit;
    system("cls");
    printf("\n\n\t\t\t##### LOAN REQUIRENTS #####\n\n\n");
    printf("\t\t-Valid Govt. Approved any Document(NID preferable)\n\t\t-Annual Income Data(atleast 10k)\n\t\t-Age Confirmation\n\n\t\t1.Continue\n\t\t2.Return\n\n\t\tChoose : ");
    scanf("%d",&choice);

    if(choice==1)
    {
        system("cls");
        printf("\n\n\t\t\t##### LOAN #####\n\n\n");
        printf("\n\n\t\tEnter NID no. : ");
        scanf("%s",&check.citizenship);

        FILE *ptr,*old;
        old=fopen("record.dat","r");
        ptr=fopen("new.dat","a+");
        printf("\n\t\tEnter Annual Income : ");
        scanf("%d",&income_num);

        if(income_num < 10000 )
            {printf("\n\t\tsorry!! You are not eligible for a loan-\n");
            fordelay(100000000000);
            menu();
            }
        else
        {

        while (fscanf(old,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %d %d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year,&add.loan_status,&add.loan_req)!=EOF)
   {
            if(strcmp(check.citizenship,add.citizenship)==0)
                {
                add.loan_req = 1;
                fprintf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %d %d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year,add.loan_status,add.loan_req);
                printf("\n\nSent Loan Request Successfully--\n\n");
                }
            else
            {
                fprintf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %d %d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year,add.loan_status,add.loan_req);

            }
            }




   fclose(ptr);
   fclose(old);
   remove("record.dat");
   rename("new.dat","record.dat");

        }
   }

    else if(choice==2)
    {
        system("cls");
        menu();
    }

    printf("\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        if (main_exit==1)
        {
            system("cls");
            menu();
        }

        else
           {

             system("cls");
            close();
            }
};  // Declaration of loan_apply function

#endif

