#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char ch[10][130]={"rajadhani Express  ---->  kurnool to hyderabad  ---->  3:00 PM","Abhi bus  ---->  warangal to khammam  ---->  7:00 AM","Red bus  ---->  vizag to vijayawada  ---->  12:00PM","Volvo  ---->  hyderabad to karimnagar  ---->  4:30PM","Garuda Express  ---->  nizamabad to mancherial  ---->  8:30AM"};
char name[32][100]={'\0'};
char number[32][2]={'\0'};
int num1[32]={0};
int trno;
void bus();
void name_number(int booking,char numstr[100]);
void booking();
int read_number(int trno);
void read_name(int trno);
void status();
void status_1(int trno);
void cancle();

int main()
{
    int num,i;
    do{
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t    BUS RESERVATION");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  MAIN MENU  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("   [1] View Bus List\n\n");
    printf("   [2] Book Tickets\n\n");
    printf("   [3] Cancel Booking\n\n");
    printf("   [4] Bus Status Board\n\n");
    printf("   [5] Exit\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   ENTER YOUR CHOICE: ");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        bus();
        break;
    case 2:
        booking();
        break;
    case 3:
        cancle();
        break;
    case 4:
        status();
        break;
    }
getch();
    }while(num != 5);
    system("CLS");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   THANK YOU FOR USING THIS BUS RESERVATION SYSTEM");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    getch();
    return 0;
}


void bus()
{
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t    BUS RESERVATION");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  BUS LIST  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n\n");
    printf("   [1]  =>  %s\n\n",ch[0]);
    printf("   [2]  =>  %s\n\n",ch[1]);
	printf("   [3]  =>  %s\n\n",ch[2]);
	printf("   [4]  =>  %s\n\n",ch[3]);
	printf("   [5]  =>  %s\n\n",ch[4]);
}
void booking() {
    int i = 0;
    char numstr[100];
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t    BUS RESERVATION");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    bus();
    printf("   ENTER THE BUS NUMBER: ");
    scanf("%d", &trno);
    if (trno < 1 || trno > 5) {
        printf("   Enter correct bus number.\n");
        return; // Return to the main menu
    }
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t    BUS RESERVATION");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("Your Bus Number is %d ********** %s", trno, ch[trno - 1]);
    status_1(trno);
    FILE *f1, *fopen();
    char str1[80] = "32", str2[4], str3[4];
    int seat1, seat2, booking = 0;
    if (trno == 1) {
        f1 = fopen("tr1.txt", "r+");
        fgets(str1, 80, f1);
        fclose(f1);
    } else if (trno == 2) {
        f1 = fopen("tr2.txt", "r+");
        fgets(str1, 80, f1);
        fclose(f1);
    } else if (trno == 3) {
        f1 = fopen("tr3.txt", "r+");
        fgets(str1, 80, f1);
        fclose(f1);
    } else if (trno == 4) {
        f1 = fopen("tr4.txt", "r+");
        fgets(str1, 80, f1);
        fclose(f1);
    } else if (trno == 5) {
        f1 = fopen("tr5.txt", "r+");
        fgets(str1, 80, f1);
        fclose(f1);
    }
    seat1 = atoi(str1);
    if (seat1 <= 0) {
        printf("There is no blank seat in this bus ");
    } else {
        //printf("\n   AVAILABLE SEATS: %d\n", seat1);
        printf("\n   NUMBER OF TICKETS: ");
        scanf("%d", &booking);
        printf("\n");
        if (booking > seat1) {
            printf("   Insufficient seats available.\n");
            return; // Return to the main menu
        }
        // Check if the selected seats are available
        int selected_seat;
        for (i = 0; i < booking; i++) {
            printf("   Enter the seat number for ticket %d: ", i + 1);
            scanf("%d", &selected_seat);
            // Check if the selected seat is already booked
            if (num1[selected_seat - 1] != 0) {
                printf("   Seat %d is already booked. Please select another one.\n", selected_seat);
                return; // Return to the main menu
            }
            // Mark the selected seat as booked
            num1[selected_seat - 1] = selected_seat;
        }
        // Update the available seats count
        seat1 -= booking;
        itoa(trno, numstr, 10);
        name_number(booking, numstr);
        itoa(seat1, str1, 10);
        // Update the available seats count in the file
        if (trno == 1) {
            f1 = fopen("tr1.txt", "w");
            fputs(str1, f1);
            fclose(f1);
        } else if (trno == 2) {
            f1 = fopen("tr2.txt", "w");
            fputs(str1, f1);
            fclose(f1);
        } else if (trno == 3) {
            f1 = fopen("tr3.txt", "w");
            fputs(str1, f1);
            fclose(f1);
        } else if (trno == 4) {
            f1 = fopen("tr4.txt", "w");
            fputs(str1, f1);
            fclose(f1);
        } else if (trno == 5) {
            f1 = fopen("tr5.txt", "w");
            fputs(str1, f1);
            fclose(f1);
        }
        printf("\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("\n");
        status_1(trno); //Display updated bus status after booking
        printf("\n\n   The total booking amount is %d", 200 * booking);
    }
}

void name_number(int booking,char numstr[100])
{
char tempstr[100],tempstr1[12]="status",tempstr2[12]="number";
int number;
    FILE *a,*b;
    int i=0;
   strcat(numstr,".txt");
   strcat(tempstr1,numstr);
   strcat(tempstr2,numstr);
   a = fopen(tempstr1,"a");
   b = fopen(tempstr2,"a");
for(i=0; i<booking; i++)
{
      printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd Enter the details for ticket no %d \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n",i+1);
      printf("   ENTER THE SEAT NUMBER: ");
      scanf("%d",&number);
      printf("\n   ENTER THE PERSON NAME: ");
      scanf("%s",name[number-1]);
      printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
      printf("\n");
      itoa(number, tempstr, 10);
      fprintf(a,"%s ",name[number-1]);
      fprintf(b,"%s ",tempstr);

}
fclose(a);
fclose(b);
}



int read_number(int trno)
{
char tempstr[100],tempstr2[12]="number";
FILE *a,*b;
char numstr[100];
int i=0,j=0,k;
itoa(trno,numstr,10);
strcat(numstr,".txt");
strcat(tempstr2,numstr);
a = fopen(tempstr2,"a+");
   while(!feof(a))
   {
      number[i][j] = fgetc(a);

      if(number[i][j] == ' ')
      {
          j=0;
          i++;
      }
      else
      {
      j++;
      }
   }
   k=i;
   for(i=0; i<k; i++)
   {
       num1[i] = atoi(number[i]);
   }
   fclose(a);
   return k;
}


void read_name(int trno)
{
char tempstr1[12]="status";
FILE *b;
char numstr[100];
int i=0,j=0,k=0;
itoa(trno,numstr,10);
strcat(numstr,".txt");
strcat(tempstr1,numstr);
b = fopen(tempstr1,"a+");
   while(!feof(b))
   {
      name[i][j] = fgetc(b);

      if(name[i][j] == ' ')
      {
          j=0;
          i++;
      }
      else
      {
        j++;
      }

   }
   name[i][j]='\0';
   k=i;
   fclose(b);
}

void status()
{
system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t      BUS RESERVATION");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    int i,trno,index=0,j;
    printf("   ENTER THE BUS NUMBER: ");
    scanf("%d",&trno);
    j=read_number(trno);
    read_name(trno);
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t   Bus No.%d: %s\n",trno,ch[trno-1]);
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
    for(i=0; i<j; i++)
    {
        strcpy(tempname[num1[i]],name[i]);
    }
    for(i=0; i<8; i++)
    {
        printf("   ");
        for(j=0; j<4; j++)
            {
        printf("%d.%s\t",index+1,tempname[index+1]);
        index++;
            }
            printf("\n");
    }
}

void status_1(int trno)
{
    printf("Your Bus Number is %d ********** %s", trno, ch[trno - 1]);
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t      BUS RESERVATION");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    int i, index = 0, j;
    j = read_number(trno);
    read_name(trno);
    char tempname[33][10]; // Modify the size to 33 to accommodate 32 seats
    // Initialize all seats as "Empty"
    for (i = 0; i < 33; i++) {
        strcpy(tempname[i], "Empty");
    }
    // Overwrite with booked seats
    for (i = 0; i < j; i++) {
        strcpy(tempname[num1[i]], name[i]);
    }
    for (i = 0; i < 8; i++) {
        printf("   ");
        for (j = 0; j < 4; j++) {
            printf("%d.%s\t", index + 1, tempname[index + 1]);
            index++;
        }
        printf("\n");
    }
}


void cancle() {
    int seat_no, i, j;
    char numstr[100], tempstr2[15] = "number", tempstr1[15] = "status";
    printf("\n   ENTER THE BUS NUMBER: ");
    scanf("%d", &trno);
    if (trno < 1 || trno > 5) {
        printf("   Enter correct bus number.\n");
        return; // Return to the main menu
    }
    itoa(trno, numstr, 10);
    strcat(numstr, ".txt");
    strcat(tempstr1, numstr);
    strcat(tempstr2, numstr);
    read_number(trno);
    read_name(trno);
    status_1(trno);
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   ENTER THE SEAT NUMBER: ");
    scanf("%d", &seat_no);
    if (seat_no < 1 || seat_no > 32) {
        printf("   Invalid seat number.\n");
        return; // Return to the main menu
    }
    // Check if the selected seat was booked
    int seat_found = 0;
    for (i = 0; i < 32; i++) {
        if (num1[i] == seat_no) {
            seat_found = 1;
            break;
        }
    }
    if (!seat_found) {
        printf("   This seat was not even booked. Cannot cancel.\n");
        return; // Return to the main menu
    }
    FILE *a, *b;
    a = fopen(tempstr1, "w+");
    b = fopen(tempstr2, "w+");
    for (i = 0; i < 32; i++) {
        if (num1[i] == seat_no) {
            for (j = 0; j < 32; j++) {
                if (num1[j] != seat_no && num1[j] != 0) {
                    fprintf(b, "%d ", num1[j]);
                    fprintf(a, "%s", name[j]);
                } else if (num1[j] == seat_no && num1[j] != 0) {
                    strcpy(name[j], "Empty ");
                }
            }
        }
    }
    fclose(a);
    fclose(b);
    printf("\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("   Your 200 rupees has been returned.\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
}

