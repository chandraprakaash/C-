#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<time.h>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
char f[10]="f";
char s[10]="s";
char rac1[10]="RAC";
int addr,ad,flag,f1,d,m,i,amt;
float tamt;

class login
{
public:
    char id[100];
    char pass[100];
    char *password;
    void getid()
    {
        cout<<"Enter your User-id : ";
        cin>>id;
        cout<<"Enter the Password : ";
        cin>>pass;
    }
    void displayid()
    {
        cout<<endl<<"User-Id : ";
        cout<<(id);
        cout<<endl<<"Password : ";
        cout<<(pass);
    }
};
class detail
{
public:
    int tno;
    char tname[100],bp[100],dest[100];
    int c1,c1fare,c2,c2fare,rac,racfare;
    int d,m,y;
    void getdetail()
    {
        cout<<endl<<"Enter the details :"<<endl;
        cout<<endl<<"Enter the Train no : ";
        cin>>tno;
        fflush(stdin);
        cout<<endl<<"Enter the Train name : ";
        fflush(stdin);
        cin>>tname;
        cout<<endl<<"Enter the Boarding point:";
        fflush(stdin);
        cin>>bp;
        cout<<endl<<"Enter the Destination pt:";
        fflush(stdin);
        cin>>dest;
        cout<<endl<<"Enter the No. of seats in first class & fare per ticket:";
        fflush(stdin);
        cin>>c1>>c1fare;
        cout<<endl<<"Enter the No. of seats in second class & fare per ticket:";
        cin>>c2>>c2fare;
        fflush(stdin);
        cout<<endl<<"Enter the No. of seats to be Allocated for RAC & fare per Ticket:";
        cin>>rac;
        cin>>racfare;
        fflush(stdin);
        cout<<endl<<"Enter the Date of travel:"; fflush(stdin);
        cin>>d>>m>>y;
    }
    void displaydetail()
    {
        cout<<endl<<left<<setw(10)<<tno<<setw(25)<<tname<<setw(20)<<bp<<setw(20)<<dest<<setw(10)<<c1<<setw(10)<<c1fare<<setw(10)<<c2<<setw(10)<<c2fare<<setw(10)<<rac<<setw(10)<<racfare<<"\t";
        cout<<d<<"-"<<m<<"-"<<y<<endl;
    }
};
class reser
{
public:
    int pnr,tno;
    char tname[100],bp[10],dest[100],pname[10][100],clas[10];
    int age[20],nosr,i,con;
    int d,m,y;
    float amc;

    void getresdet()
    {
        cout<<endl<<"Enter the details "<<endl;
        cout<<endl<<"Enter the Train no:";
        cin>>tno;
        fflush(stdin);
        cout<<endl<<"Enter the Train name:";
        cin>>tname;
        fflush(stdin);
        cout<<endl<<"Enter the Boarding point:";
        cin>>bp;
        fflush(stdin);
        cout<<endl<<"Enter the Destination pt:";
        cin>>dest;
        fflush(stdin);
        cout<<endl<<"Enter the No of seats required:";
        cin>>nosr;
        for(i=0; i<nosr ; i++)
        {
            cout<<endl<<"Enter the Passenger name:";
            cin>>pname[i];
            fflush(stdin);
            cout<<endl<<"Enter the Passenger age:";
            cin>>age[i];
        }
        cout<<endl<<"Enter the class (f) - first class or (s) - second class:"; fflush(stdin);
        cin>>clas;
        cout<<endl<<"Enter the Date of travel:"; fflush(stdin);
        cin>>d>>m>>y;
        cout<<endl<<"Enter the concession category\n";
        cout<<endl<<"1.Military\n2.Senior citizen\n3.Children below 5 yrs\n4.None"<<endl;
        cin>>con;
        fflush(stdin);
        cout<<endl<<"............END OF GETTING DETAILS............\n";
    }
    void displayresdet()
    {
        cout<<"------------------------------------------------------\n";
        cout<<endl<<"PNR no : "<<pnr;
        cout<<endl<<"Train no : "<<tno;
        cout<<endl<<"Train name : ";
        cout<<tname;
        cout<<endl<<"Boarding point : ";
        cout<<bp;
        cout<<endl<<"Destination pt : ";
        cout<<dest;
        cout<<endl<<"No of seats reserved : "<<nosr;
        for(i=0; i<nosr; i++)
        {
            cout<<endl<<"Passenger name : "<<pname[i];
            cout<<endl<<"Passenger age : "<<age[i];
        }

        cout<<endl<<"\nYour class : ";
        cout<<clas;
        cout<<endl<<"Date of reservation : "<<d<<"-"<<m<<"-"<<y;
        cout<<endl<<"Your concession category : "<<con;
        cout<<endl<<"You must pay : "<<amc<<endl;
        cout<<endl<<"***********************************************\n";
        cout<<endl<<setw(100)<<"\t\t\t\tEND OF RESERVATION\n";
        cout<<endl<<"***********************************************\n";
    }
};
class canc
{
public:
    int pnr,tno;
    char tname[100],bp[10],dest[100],pname[10][100],clas[10];;
    int age[20],i,nosc;
    int d,m,y;
    float amr;
    void getcancdet()
    {
        cout<<endl<<"Enter the details : ";
        cout<<"Enter the PNR no:";
        cin>>pnr;
        cout<<endl<<"Enter the Date of cancellation:";
        cin>>d>>m>>y;
        cout<<endl<<"...........END OF GETTING DETAILS...........\n";
    }
    void displaycancdet()
    {
        cout<<endl<<"...........................................\n";
        cout<<endl<<"PNR no : "<<pnr;
        cout<<endl<<"Train no : "<<tno;
        cout<<endl<<"Train name : "<<tname;
        cout<<endl<<"Boarding point : "<<bp;
        cout<<endl<<"Destination pt : "<<dest;
        cout<<endl<<"Your class : "<<clas;
        cout<<endl<<"no of seats to be canceled : "<<nosc;
        for(i=0; i<nosc; i++)
        {
            cout<<endl<<"Passenger name : "<<(pname[i]);
            cout<<endl<<"passenger age : "<<age[i];
        }
        cout<<endl<<"Date of cancellation : "<<d<<"-"<<m<<"-"<<y;
        cout<<endl<<"You can collect : "<<amr<<"rs"<<endl;
        cout<<"*****************************************\n";
        cout<<".........END OF CANCELLATION.............\n";
        cout<<"*****************************************\n";
    }
};
void create(int,int,int);
void manage();
void manage1();
void can();
void user();
void database();
void res();
void reserve();
void displaypassdetail();
void cancell();
void enquiry();
void display2();
int main()
{
    int ch;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"....... WELCOME TO RAILWAY RESERVATION SYSTEM ..........\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    do
    {
        cout<<endl<<" -------------------------- MAIN MENU --------------------------";
        cout<<endl<<"1.Administrator mode\n2.User mode\n3.User Sign_up\n4.Exit\n";
        cout<<endl<<"Enter your choice:";
        cin>>ch;
        cout<<endl;
        switch(ch)
        {
            case 1: database();
                    break;
            case 2: user();
                    break;
            case 3: manage1();
                    break;
            case 4: exit(0);
        }
    }
    while(ch<=3);
}

void display2()
{
     detail a;
        fstream f;
        f.open("t.txt",ios::in|ios::out|ios::binary|ios::app);
        f.seekg(0);
        while(f.read((char *) & a,sizeof(a)))
        {
            cout<<a.tno<<"\t\t"<<a.c1<<"\t\t"<<a.c2<<"\t\t"<<a.rac<<endl;
        }
        f.close();
}

void database()
{
    char *password;
    char *pass="admin";
    cout<<endl<<"Enter the Administrator Password :";
    fflush(stdin);
    cin>>password;
    detail a;
    fstream f;
    int ch;
    char c;
    if(strcmp(pass,password)!=0)
    {
        cout<<endl<<"Enter the password correctly \n";
        cout<<endl<<"You are not permitted to log-on this mode\n";
        goto h;
    }
    if(strcmp(pass,password)==0)
    {
        char c;
        do
        {
            cout<<endl<<"...........ADMINISTRATOR MENU...........\n";
            cout<<endl<<"1.Create detail data base\n2.Add details\n";
            cout<<endl<<"3.Display details\n4.User management\n";
            cout<<endl<<"5.Display passenger details\n6.Return to main menu\n";
            cout<<endl<<"Enter your choice:";
            cin>>ch;
            cout<<endl;
            switch(ch)
            {
                case 1: f.open("t.txt",ios::out|ios::binary);
                        do
                        {
                            a.getdetail();
                            f.write((char *) & a,sizeof(a));
                            cout<<endl<<"Do you want to add one more record?\n";
                            cout<<endl<<"y - for Yes\n n - for No\n";
                            cin>>c;
                        }
                        while(c=='y');
                        f.close();
                        break;
                case 2: f.open("t.txt",ios::in|ios::out|ios::binary|ios::app);
                        a.getdetail();
                        f.write((char *) & a,sizeof(a));
                        f.close();
                        break;
                case 3: f.open("t.txt",ios::in|ios::out|ios::binary|ios::app);
                        f.seekg(0);
                        cout<<endl<<"-------------------------------------------------------------------------------------------------------------------------------------------------";
                        cout<<endl<<left<<setw(10)<<"Train_no"<<setw(25)<<"Train_name"<<setw(20)<<"boarding_Point"<<setw(15)<<"Destination"<<setw(10)<<"frst_c"<<setw(10)<<"fC_fr"<<setw(10)<<"Scnd_C"<<setw(10)<<"    SC_fr"<<setw(10)<<"RAC"<<setw(10)<<"RAC_f"<<setw(15)<<"Date"<<"\t";
                        cout<<endl<<"-------------------------------------------------------------------------------------------------------------------------------------------------";
                        while(f.read((char *) & a,sizeof(a)))
                        {
                            a.displaydetail();
                        }
                        cout<<endl<<"-------------------------------------------------------------------------------------------------------------------------------------------------";
                        f.close();
                        break;
                case 4: manage();
                        break;
                case 5: displaypassdetail();
                        break;
            }
        }
        while(ch<=5);
        f.close();
    }
h:;
}
void reserve()
{
    int ch;
    do
    {
        cout<<endl<<"1.Reserve\n2.Return to the main menu\n";
        cout<<endl<<"Enter your choice : ";
        cin>>ch;
        cout<<endl;
        switch(ch)
        {
        case 1:
            res();
            break;
        }
    }
    while(ch==1);
}
void res()
{
    detail a;
    reser b;
    fstream f1,f2;
    time_t t;
    f1.open("t.txt",ios::in|ios::out|ios::binary);
    f2.open("p.txt",ios::in|ios::out|ios::binary|ios::app);
    int ch;
    b.getresdet();
    while(f1.read((char *) &a,sizeof(a)))
    {
        if(a.tno==b.tno)
        {
            if(strcmp(b.clas,f)==0)
            {
                if(a.c1>=b.nosr)
                {
                    amt=a.c1fare;
                    addr=f1.tellg();
                    ad=sizeof(a.c1);
                    f1.seekp(addr-(9*ad));
                    a.c1=a.c1-b.nosr;
                    f1.write((char *) & a.c1,sizeof(a.c1));
                    if(b.con==1)
                    {
                        cout<<endl<<"Concession category : MILITARY PERSONNEL";
                        b.amc=b.nosr*((amt*50)/100);
                    }
                    else if(b.con==2)
                    {
                        cout<<endl<<"Concession category : SENIOR CITIZEN";
                        b.amc=b.nosr*((amt*60)/100);
                    }
                    else if(b.con==3)
                    {
                        cout<<endl<<"Concession category : CHILDERN BELOW FIVE";
                        b.amc=0.0;
                    }
                    else if(b.con==4)
                    {
                        cout<<endl<<"You cannot get any concession";
                        b.amc=b.nosr*amt;
                    }
                    srand((unsigned) time(&t));
                    b.pnr=rand();
                    f2.write((char *) & b,sizeof(b));
                    b.displayresdet();
                    cout<<endl<<"------------------------------------------------------";
                    cout<<endl<<"-------------- Your ticket is reserved -----------";
                    cout<<endl<<"----------------- End of reservation menu -------";
                }
                else
                {
                    cout<<" -------------------- Sorry No more Tickets available ------------------- \n";
                }
            }
            else if(strcmp(b.clas,s)==0)
            {
                if(a.c2>=b.nosr)
                {
                    amt=a.c2fare;
                    addr=f1.tellg();
                    ad=sizeof(a.c2);
                    f1.seekp(addr-(7*ad));
                    a.c2=a.c2-b.nosr;
                    f1.write((char *) & a.c2,sizeof(a.c2));
                    if(b.con==1)
                    {
                        cout<<endl<<"Concession category : MILITARY PRESONNEL";
                        b.amc=b.nosr*((amt*50)/100);
                    }
                    else if(b.con==2)
                    {
                        cout<<endl<<"Concession category : SENIOR CITIZEN";
                        b.amc=b.nosr*((amt*60)/100);
                    }
                    else if(b.con==3)
                    {
                        cout<<endl<<"Concession category : CHILDERN BELOW FIVE";
                        b.amc=0.0;
                    }
                    else if(b.con==4)
                    {
                        cout<<endl<<"You cannot get any concession";
                        b.amc=b.nosr*amt;
                    }
                    f2.write((char *) & b,sizeof(b));
                    b.displayresdet();
                    cout<<endl<<"---------------------------------------";
                    cout<<endl<<"-------- Your ticket is reserved --------";
                    cout<<endl<<"------------ End of reservation ---------";
                }
                else if(a.rac>=b.nosr)
                {
                    strncpy(b.clas,"RAC",sizeof(b.clas));
                    amt=a.racfare;
                    addr=f1.tellg();
                    ad=sizeof(a.rac);
                    f1.seekp(addr-(5*ad));
                    a.rac=a.rac-b.nosr;
                    f1.write((char *) & a.rac,sizeof(a.rac));
                    if(b.con==1)
                    {
                        cout<<endl<<"Concession category : MILITARY PERSONNEL";
                        b.amc=b.nosr*((amt*50)/100);
                    }
                    else if(b.con==2)
                    {
                        cout<<endl<<"Concession category : SENIOR CITIZEN";
                        b.amc=b.nosr*((amt*60)/100);
                    }
                    else if(b.con==3)
                    {
                        cout<<endl<<"Concession category : CHILDERN BELOW FIVE";
                        b.amc=0.0;
                    }
                    else if(b.con==4)
                    {
                        cout<<endl<<"You cannot get any concession";
                        b.amc=b.nosr*amt;
                    }
                    srand((unsigned) time(&t));
                    b.pnr=rand();
                    f2.write((char *) & b,sizeof(b));
                    b.displayresdet();
                    cout<<endl<<"------------------------------------------------------";
                    cout<<endl<<"-------------- Your ticket is reserved -----------";
                    cout<<endl<<"----------------- End of reservation menu ---------";
                }
                else
                {
                    cout<<endl<<"-------------------- Sorry,no more tickets available -----------------------";
                }
            }
            goto h;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==0)
    {
        cout<<endl<<"............ Wrong train number ......................";
        cout<<endl<<"...... Enter the train no from the data base ...........";
    }
    f1.close();
    f2.close();
    getch();
h:;
}
void displaypassdetail()
{
    fstream f;
    reser b;
    f.open("p.txt",ios::in|ios::out|ios::binary);
    f.seekg(0);
    while(f.read((char *) & b,sizeof(b)))
    {
        b.displayresdet();
    }
    f.close();
}
void enquiry()
{

    fstream f;
    f.open("t.txt",ios::in|ios::out|ios::binary);
    detail a;
    while(f.read((char *) & a,sizeof(a)))
    {
        a.displaydetail();
    }
}
void cancell()
{
    detail a;
    reser b;
    canc c;
    fstream f1,f2,f3;
    f1.open("t.txt",ios::in|ios::out|ios::binary);
    f2.open("p.txt",ios::in|ios::out|ios::binary);
    f3.open("cn.txt",ios::in|ios::out|ios::binary);
    cout<<endl<<"------------------- CANCELLATION MENU ----------------------\n";
    c.getcancdet();
    while(f2.read((char *) & b,sizeof(b)))
    {
        if(b.pnr==c.pnr)
        {
            c.tno=b.tno;
            strcpy(c.tname,b.tname);
            strcpy(c.bp,b.bp);
            strcpy(c.dest,b.dest);
            c.nosc=b.nosr;
            for(int j=0; j<c.nosc; j++)
            {
                strcpy(c.pname[j],b.pname[j]);
                c.age[j]=b.age[j];
            }
            strcpy(c.clas,b.clas);
            if(strcmp(c.clas,f)==0)
            {
                while(f1.read((char *) & a,sizeof(a)))
                {

                    if(a.tno==c.tno)
                    {
                        a.c1=a.c1+c.nosc;
                        d=a.d;
                        m=a.m;
                        addr=f1.tellg();
                        ad=sizeof(a.c1);
                        f1.seekp(addr-(9*ad));
                        f1.write((char *) & a.c1,sizeof(a.c1));
                        tamt=b.amc;
                        if((c.d==d)&&(c.m==m))
                        {
                            cout<<endl<<"You are canceling at the date of departure";
                            c.amr=tamt-((tamt*60)/100);
                        }
                        else if(c.m==m)
                        {
                            cout<<endl<<"You are canceling at the month of departure";
                            c.amr=tamt-((tamt*50)/100);
                        }
                        else if(m>c.m)
                        {
                            cout<<endl<<"You are canceling one month before the date of departure";
                            c.amr=tamt-((tamt*20)/100);
                        }
                        else
                        {
                            cout<<endl<<"Canceling after the departure";
                            cout<<endl<<"Your request cannot be completed";
                        }
                        goto h;
                        c.displaycancdet();
                    }
                }
            }
            else if(strcmp(c.clas,s)==0)
            {
                while(f1.read((char *) & a,sizeof(a)))
                {

                    if(a.tno==c.tno)
                    {
                        a.c2=a.c2+c.nosc;
                        d=a.d;
                        m=a.m;
                        addr=f1.tellg();
                        ad=sizeof(a.c2);
                        f1.seekp(addr-(7*ad));
                        f1.write((char *) & a.c2,sizeof(a.c2));
                        tamt=b.amc;
                        if((c.d==d)&&(c.m==m))
                        {
                            cout<<endl<<"You are canceling at the date of departure";
                            c.amr=tamt-((tamt*60)/100);
                        }
                        else if(c.m==m)
                        {
                            cout<<endl<<"You are canceling at the month of departure";
                            c.amr=tamt-((tamt*50)/100);
                        }
                        else if(m>c.m)
                        {
                            cout<<endl<<"You are canceling one month before the date of departure";
                            c.amr=tamt-((tamt*20)/100);
                        }
                        else
                        {
                            cout<<endl<<"Canceling after the departure";
                            cout<<endl<<"Your request cannot be completed";
                        }
                        goto h;
                        c.displaycancdet();
                    }
                }
            }
            else if(strcmp(c.clas,rac1)==0)
            {
                while(f1.read((char *) & a,sizeof(a)))
                {

                    if(a.tno==c.tno)
                    {
                        a.rac=a.rac+c.nosc;
                        d=a.d;
                        m=a.m;
                        addr=f1.tellg();
                        ad=sizeof(a.rac);
                        f1.seekp(addr-(5*ad));
                        f1.write((char *) & a.rac,sizeof(a.rac));
                        tamt=b.amc;
                        if((c.d==d)&&(c.m==m))
                        {
                            cout<<endl<<"You are canceling at the date of departure";
                            c.amr=tamt-((tamt*60)/100);
                        }
                        else if(c.m==m)
                        {
                            cout<<endl<<"You are canceling at the month of departure";
                            c.amr=tamt-((tamt*50)/100);
                        }
                        else if(m>c.m)
                        {
                            cout<<endl<<"You are canceling one month before the date of departure";
                            c.amr=tamt-((tamt*20)/100);
                        }
                        else
                        {
                            cout<<endl<<"Canceling after the departure";
                            cout<<endl<<"Your request cannot be completed";
                        }
                        goto h;
                        c.displaycancdet();
                    }
                }
            }
        }
        else
        {
            flag=0;
        }
    }
h:;
    f1.close();
    f2.close();
    f3.close();
}
void can()
{
    int ch;
    do
    {
        cout<<endl<<"................. CANCELLATION MENU ...............";
        cout<<endl<<"1.Cancel\n2.Return to the main menu\n";
        cout<<endl<<"Enter your choice:";
        cin>>ch;
        cout<<endl<<endl;
        switch(ch)
        {
        case 1:
            cancell();
            break;
        }
    }
    while(ch==1);
}
void user()
{
    login a;
    detail b;
    int ch;
    cout<<endl<<"-----------------------------------------------------";
    cout<<endl<<"---------------------  WELCOME TO THE USER MENU ----------------------------\n";
    cout<<endl<<"-----------------------------------------------------";
    char password[20];
    fstream f,f1;
    f.open("id.txt",ios::in|ios::out|ios::binary);
    char id[100];
    cout<<endl<<"Enter your user_id : ";
    cin>>id;
    cout<<endl<<"Enter the Password : ";
    cin>>password;
    while(f.read((char *) & a,sizeof(a)))
    {
        if((strcmp(a.id,id)==0)&&(strcmp(a.pass,password)==0))
        {
            do
            {
                cout<<endl<<"1.Reserve\n2.Cancel\n3.Enquiry\n4.Available Tickets\n5.Return to the main menu\n ";
                cout<<endl<<"Enter your choice:";
                cin>>ch;
                cout<<endl;
                switch(ch)
                {
                case 1: reserve();
                        break;
                case 2: cancell();
                        break;
                case 3: cout<<endl<<"-------------------------------------------------------------------------------------------------------------------------------------------------";
                        cout<<endl<<left<<setw(10)<<"Train_no"<<setw(25)<<"Train_name"<<setw(20)<<"boarding_Point"<<setw(15)<<"Destination"<<setw(10)<<"frst_c"<<setw(10)<<"fC_fr"<<setw(10)<<"Scnd_C"<<setw(10)<<"    SC_fr"<<setw(10)<<"RAC"<<setw(10)<<"RAC_f"<<setw(15)<<"Date"<<"\t";
                        cout<<endl<<"-------------------------------------------------------------------------------------------------------------------------------------------------";
                        enquiry();
                        break;
                case 4: cout<<endl<<"TRAIN NO   FIRST CLASS   SECOND CLASS          RAC "<<endl;
                        cout<<endl<<"_______________________________________________________"<<endl;
                        display2();
                        break;
                }
            }
            while(ch<=4);
            goto j;
        }
        else
        {
            d=1;
        }
    }
    if(d==1)
    {
        cout<<endl<<"Enter your user id and password correctly\n";
    }
j:;
}

void manage()
{
    int ch;
    fstream f;
    char c;
    login a;
    cout<<endl<<"......... WELCOME TO THE USER MANAGEMENT MENU ........";
    do
    {
        cout<<endl<<"1.Create id data base\n2.Add details\n";
        cout<<endl<<"3.Display details\n4.Return to the main menu\n";
        cout<<endl<<"Enter your choice:";
        cin>>ch;
        cout<<endl;
        switch(ch)
        {
            case 1: f.open("id.txt",ios::out|ios::binary);
                    do
                    {
                        a.getid();
                        f.write((char *) & a,sizeof(a));
                        cout<<endl<<"Do you want to add one more record";
                        cout<<endl<<"y-Yes\nn-No";
                        cin>>c;
                    }
                    while(c=='y');
                    f.close();
                    break;
            case 2: f.open("id.txt",ios::in|ios::out|ios::binary|ios::app);
                    a.getid();
                    f.write((char *) & a,sizeof(a));
                    f.close();
                    break;
            case 3: f.open("id.txt",ios::in|ios::out|ios::binary);
                    f.seekg(0);
                    while(f.read((char *) & a,sizeof(a)))
                    {
                        a.displayid();
                    }
                    f.close();
                    break;
        }
    }
    while(ch<=3);
}
void manage1()
{
    fstream f;
    login a;
    f.open("id.txt",ios::in|ios::out|ios::binary|ios::app);
    a.getid();
    f.write((char *) & a,sizeof(a));
    f.close();
}
