			/*TICKET RESERVATION SYSTEM*/
#include<iostream>
//#include<conio>
//#include<dos>
//#include<process>
#include<fstream>
#include<stdio.h>
#include<iomanip>
#include<string.h>
using namespace std;
class common
{
	public:
		char name[50];
		char sex[5];
		int age; 
		char eid[100];
		char mobno[20];
		char state[100];
		char city [100],addr[50],lnd[50];
		char han;
		float f;
		int hno;
		char from[20],to[20];
		char jdate[50];
		char jtime[20];
		char ddno[10];
};
class flight : public common
{
	int d_s,c_b , t_h , c_a ,m_h ;
	int m_d ,j_c , t_b , h_c , m_a ;
	int lc,st, kc, rd, jb, bc, tm ;
	int cc, cd, sm;
	char ppno[20];
	public:
		flight()
		{
			d_s = 4500,c_b = 4500, t_h = c_a = m_h = 3000;
			m_d = j_c = 8000, t_b = 6000, h_c = 2500, m_a = 5000;
			lc=30000,st = kc=15000,rd=22000,jb = 25000,bc = 20000,tm = 21000;
			cc = 50000,cd = 60000,sm = 45000;

		}
		void fdbook();
		void fdcancel();
		void fdstat();
		void fibook();
		void ficancel();
		void fistat();
		float ffare(float);
		void aflight();
}a;
class train : public common
{
	int tno;
	int cxb ,txc, kxm ,cxd ;
	int rxv ,cxa , mxm ,dxc ,mxb ,txg ;
	public:
		train()
		{
			cxb = 500,txc = 265, kxm = 250,cxd = 700;
			rxv = 980,cxa = 700, mxm = 665,dxc = 975,mxb = 825,txg = 775;
		}
		void atrain();
		void tbook();
		void tcancel();
		void tstat();
		float tfare(float);

};
train b;
class bus : public common
{
	int ctb,mtc,ktc,ttk,cth,kktc,ctc,ttt,cbtb,htc;
	public:
		bus()
		{
		    ctb=500,mtc=350,ktc=400,ttk=445;
		    cth=700,kktc=655,ctc=800,ttt=955,cbtb=695,htc=700;
		}
		void bbook();
		void bcancel();
		void bstat();
		void abus();
		float bfare(float);
}c;
int main()
{
	int ch;
	char cho = 'f';
a:	clrscr();
	cout<<"\n\t\t ******************************";
	cout<<"\n\t\t WELCOME TO AACIN TRAVEL AGENCY";
	cout<<"\n\t\t ~~~~~~~ ~~ ~~~~~ ~~~~~~ ~~~~~~";
	cout<<"\n\t\t ******************************\n";
	cout<<"\n 0.Exit  \n\n";
	cout<<"\n 1.Flight \n\n";
	cout<<"\n 2.Train \n\n";
	cout<<"\n 3.Bus \n\n";
	cout<<"\n Enter your option :";
	cin>>ch;
	clrscr();
	switch(ch)
	{
	case 0: exit(0);
		break;
	case 1: cout<<"\n FLIGHT TICKET RESERVATION";
		a.aflight();
		break;
	case 2: cout<<"\n TRAIN TICKET RESERVATION";
		b.atrain();
		break;
	case 3: cout<<"\n BUS TICKET RESERVATION";
		c.abus();
		break;
	default: cout<<"\n OOPS! service not available";
		 cho = 't';
		 delay(3000);
		 break;
	}
	if(cho == 't')
	{
		goto a;
	}
	return 0;
}

//function to perform operations in flight
void flight::aflight()
{
clrscr();
char cho1 = 'f',cho2 = 'f',cho3 = 'f';
char opt1,opt2;
int ch1,ch2,ch3;
b:
cout<<"\n\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ";
cout<<"\n\t\t FLIGHT RESERVATION\CANCELLATION ";
cout<<"\n\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
cout<<"\n SERVICES \n";
cout<<"\n 0.Exit \n";
cout<<"\n 1.International \n";
cout<<"\n 2.Domestic     \n";
cout<<"\n Enter Choice : ";
cin>>ch1;
switch(ch1)
{
	case 1: clrscr();
		cout<<"\n\n INTERNATIONAL\n";
		cout<<"\n 1.Booking \n";
		cout<<"\n 2.Cancelling\n";
		cout<<"\n 3.Status \n";
		cout<<"\n Enter choice : ";
		cin>>ch2;
		switch(ch2)
		{
			case 0: exit(0);
				break;
			case 1: clrscr();
				a.fibook();
				break;
			case 2: clrscr();
				a.ficancel();
				break;
			case 3: clrscr();
				a.fistat();
				break;
			default: cout<<"\n Please Enter Correctly";
				 cho1 = 't';
				 delay(3000);
				 break;
		}
		if(cho1 == 't')
			goto b;
		break;
	case 2: clrscr();
		cout<<"\n\n DOMESTIC \n";
		cout<<"\n 1.Booking \n";
		cout<<"\n 2.Cancelling\n";
		cout<<"\n 3.Status\n";
		cout<<"\n 0.EXIT\n";
		cout<<"\n Enter choice : ";
		cin>>ch2;
		switch(ch2)
		{
			case 1: clrscr();
				a.fdbook();
				break;
			case 2: clrscr();
				a.fdcancel();
				break;
			case 3: clrscr();
				a.fdstat();
				break;
			case 0: exit(0);
				break;
			default: cout<<"\n Please Enter Correctly";
				 cho2 = 't';
				 delay(3000);
				 break;
		}
		if(cho2 == 't')
			goto b;
    case 0: exit(0);
	    break;
    default: cout<<"\n Please Enter Correctly";
	     cho3 = 't';
	     delay(3000);
	     break;
    }
    if(cho3 == 't')
	goto b;
}
//function to perform operations in train
void train :: atrain()
{
clrscr();
char opt3;
int ch4;
char cho3 = 'f';
c:
clrscr();
cout<<"\n\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ";
cout<<"\n\t\t TRAIN TICKET RESERVATION\CANCELLATION ";
cout<<"\n\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ";
cout<<"\n SERVICES \n";
cout<<"\n 1.Booking \n";
cout<<"\n 2.Cancelling\n";
cout<<"\n 3.Status\n";
cout<<"\n 0.Exit\n";
cout<<"\n Enter choice : ";
cin>>ch4;
switch(ch4)
{
	case 1: clrscr();
		b.tbook();
		break;
	case 2: clrscr();
		b.tcancel();
		break;
	case 3: clrscr();
		b.tstat();
		break;
	case 0: exit(0);
	default: cout<<"\n Please Enter Correctly";
		 cho3 = 't';
		 delay(3000);
		break;
	}
	if(cho3 == 't')
		goto c;
	cout<<"\n Want to do again?(y/n) : ";
	cin>>opt3;
	if(opt3 == 'y' || opt3 == 'Y')
		goto c;
	else
		exit(0);
}
//function to perform operations in bus
void bus::abus()
{
clrscr();
char opt4;
int ch5;
char cho5 = 'f';
d:
clrscr();
cout<<"\n\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"\n\t\t BUS TICKET RESERVATION\CANCELLATION";
cout<<"\n\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"\n 1.Booking   \n";
cout<<"\n 2.Cancelling\n";
cout<<"\n 3.Status    \n";
cout<<"\n 0.Exit      \n";
cout<<"\n Enter choice : ";
cin>>ch5;
switch(ch5)
{
	case 1: clrscr();
		c.bbook();
		break;
	case 2: clrscr();
		c.bcancel();
		break;
	case 3: clrscr();
		c.bstat();
		break;
	case 0: exit(0);
		break;
	default: cout<<"\n Please Enter correctly ";
		 delay(3000);
		 cho5 = 't';
		break;
}
if(cho5 == 't')
	goto d;
if(opt4 == 'y' || opt4 == 'Y')
	goto d;
else
	exit(0);
}
//function to book a ticket in flight
void flight::fdbook()
{
	int ch6;
	char cho6 = 'f';
d:      clrscr();
	cout<<"\n\t\t ---------------------";
	cout<<"\n\t\t FLIGHT BOOKING CENTRE";
	cout<<"\n\t\t ---------------------\n";
	cout<<"\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"\n Our Services \n";
	cout<<"\n 1. Delhi        -   Srinagar \n";
	cout<<"\n 2. Chennai      -   Banglore \n";
	cout<<"\n 3. Trichy       -   Hyderabad \n";
	cout<<"\n 4. Chennai      -   Ahmedabad\n";
	cout<<"\n 5. Trichy       -   Buvaneshwar\n";
	cout<<"\n 6. Jaipur       -   Chennai \n";
	cout<<"\n 7. Mumbai       -   Haryana \n";
	cout<<"\n 8. Haryana      -   Chennai \n";
	cout<<"\n 9. Mumbai       -   Ahmedabad\n";
	cout<<"\n10. Madurai      -   Delhi \n";
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"\n Please make your choice : ";
	cin>>ch6;
	clrscr();
	switch(ch6)
	{
		case 1: strcpy(a.from,"Delhi");
			strcpy(a.to,"Srinagar");
			a.f = a.ffare(d_s);
			strcpy(jtime,"10:15");
			break;
		case 2: strcpy(a.from,"Chennai");
			strcpy(a.to,"Banglore");
			a.f = a.ffare(c_b);
			strcpy(a.jtime,"10:30");
			break;
		case 3: strcpy(a.from,"Trichy");
			strcpy(a.to,"Hyderabad");
			a.f = a.ffare(t_h);
			strcpy(a.jtime,"11:00");
			break;
		case 4: strcpy(a.from,"Chennai");
			strcpy(a.to,"Ahmedabad");
			a.f = a.ffare(c_a);
			strcpy(a.jtime,"12:00");
			break;
		case 5: strcpy(a.from,"Trichy");
			strcpy(a.to,"Buvaneshwar");
			a.f = a.ffare(t_b);
			strcpy(a.jtime,"12:05");
			break;
		case 6: strcpy(a.from,"Jaipur");
			strcpy(a.to,"Chennai");
			strcpy(a.jtime,"15:25");
			a.f = a.ffare(j_c);
			break;
		case 7: strcpy(a.from,"Mumbai");
			strcpy(a.to,"Haryana");
			strcpy(a.jtime,"16:00");
			a.f = a.ffare(m_h);
			break;
		case 8: strcpy(a.from,"Haryana");
			strcpy(a.to,"Chennai");
			strcpy(a.jtime,"17:30");
			a.f = a.ffare(h_c);
			break;
		case 9: strcpy(a.from,"Mumbai");
			strcpy(a.to,"Ahmedabad");
			strcpy(a.jtime,"17:55");
			a.f = a.ffare(m_a);
			break;
		case 10:strcpy(a.from,"Madurai");
			strcpy(a.to,"Delhi");
			strcpy(a.jtime,"18:25");
			a.f = a.ffare(m_d);
			break;
	default:cout<<"\n please enter correctly ";
		cho6 = 't';
		delay(3000);
		break;
	}
	if(cho6 == 't')
		goto d;
	cout<<"\n Fare :"<<a.f;
	ofstream file2;
	file2.open("fdom.dat",ios::out|ios::app);
	cout<<"\n Enter Details \n";
	cout<<"\n Name          : ";
	gets(a.name);
	cout<<"\n Sex           : ";
	cin>>a.sex;
	cout<<"\n Email Id      : ";
	gets(a.eid);
	cout<<"\n Mobile Number : ";
	gets(a.mobno);
	cout<<"\n Journey Date  : ";
	gets(a.jdate);
	cout<<"\n House number  : ";
	cin>>a.hno;
	cout<<"\n Address       : ";
	gets(a.addr);
	cout<<"\n City          : ";
	gets(a.city);
	cout<<"\n Landmark      : ";
	gets(a.lnd);
	file2.write((char*)&a,sizeof(a));
	cout<<"\n PROCESSING...";
	delay(3000);
	cout<<"\n \a\a";
	cout<<"\n *************";
	cout<<"\n Ticket Booked";
	cout<<"\n *************";
	getch();
	clrscr();
	cout<<"\n Name  : "<<a.name<<"\n";
	cout<<"\n Age   : "<<a.age<<"\n";
	cout<<"\n Sex   : "<<a.sex<<"\n";
	cout<<"\n From  : "<<a.from<<"\n";
	cout<<"\n To    : "<<a.to<<"\n";
	cout<<"\n Date  : "<<a.jdate<<"\n";
	cout<<"\n Time  : "<<a.jtime<<"\n";
	cout<<"\n Fare  : "<<a.f<<"\n";
	cout<<"\n Payment to be made through Demand Draft in favour of 'Aacin Travels' payable at Kumbakonam";
	getch();
	file2.close();
}
//function to cancel a ticket
void flight::fdcancel()
{
	ifstream file3("fdom.dat",ios::in);
	ofstream file4("temp1.dat",ios::out);
	char mno[20];
	char found = 'f';
	char confirm = 'n';
	clrscr();
	cout<<"\n Enter your mobile number : ";
	cin>>mno;
	file3.read((char*)&a,sizeof(a));
	if(strcmp(mno,a.mobno)==0)
	{
		cout<<"\n Details : ";
		cout<<"\n Name          : "<<a.name<<"\n";
		cout<<"\n Age           : "<<a.age<<"\n";
		cout<<"\n Sex           : "<<a.sex<<"\n";
		cout<<"\n From          : "<<a.from<<"\n";
		cout<<"\n To            : "<<a.to<<"\n";
		cout<<"\n Journey Date  : "<<a.jdate<<"\n";
		cout<<"\n Mobile Number : "<<a.mobno<<"\n";
		cout<<"\n State         : "<<a.state<<"\n";
		cout<<"\n City          : "<<a.city<<"\n";
		cout<<"\n Address       : "<<a.addr<<"\n";
		cout<<"\n Land Mark     : "<<a.lnd<<"\n";
		found = 't';
		cout<<"\n Do you want to cancel ?(y/n): ";
		cin>>confirm;
		cout<<"\n PLEASE WAIT PROCESSING...";
		delay(5000);
		if(confirm == 'n')
		{
			file4.write((char*)&a,sizeof(a));
		}
		cout<<"\n Ticket Cancelled";
	}
	else
	{
		file4.write((char*)&a,sizeof(a));
	}
	if(found == 'f')
	{
		cout<<"\n Ticket not booked ";
	}
	file3.close();
	file4.close();
	remove("fdom.dat");
	rename("temp1.dat","fdom.dat");
	getch();
}
//function to check the status of a ticket
void flight::fdstat()
{
    char mno[20];
    char found='n';
    ifstream file5("fdom.dat",ios::in);
    cout<<"\n Enter Mobile Number : ";
    cin>>mno;
	file5.read((char*)&a,sizeof(a));
	if(strcmp(a.mobno,mno)==0)
	{
	    cout<<"\n Name  : "<<a.name<<"\n";
	    cout<<"\n Age   : "<<a.age<<"\n";
	    cout<<"\n Sex   : "<<a.sex<<"\n";
	    cout<<"\n From  : "<<a.from<<"\n";
	    cout<<"\n To    : "<<a.to<<"\n";
	    cout<<"\n Date  : "<<a.jdate<<"\n";
	    cout<<"\n Time  : "<<a.jtime<<"\n";
	    found='y';
	}

    if(found=='n')
    {
    cout<<"Ticket not booked";
    }
    getch();
    file5.close();
}
//function  to book a ticket (flight - international)
void flight::fibook()
{
	int ch5;
	cout<<"\n\t\t ---------------------";
	cout<<"\n\t\t FLIGHT BOOKING CENTRE";
	cout<<"\n\t\t ---------------------\n";
	cout<<"\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"\n  1. Chennai        - London \n";
	cout<<"\n  2. Singapore      - Trichy \n";
	cout<<"\n  3. Kuala Lumpur   - Kochin \n";
	cout<<"\n  4. Riyadh         - Delhi \n";
	cout<<"\n  5. Dubai          - Banglore \n";
	cout<<"\n  6. Beijing        - Calcutta \n";
	cout<<"\n  7. Tokyo          - Mumbai \n";
	cout<<"\n  8. Carribean      - Chennai \n";
	cout<<"\n  9. California     - Delhi \n";
	cout<<"\n 10. Sydney         - Mumbai \n";
	cout<<"\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"\n\n Please make your choice : ";
	cin>>ch5;
	clrscr();
	switch(ch5)
	{
		case 1: cout<<"\n Chennai To London ";
			strcpy(a.from,"Chennai");
			strcpy(a.to,"London");
			strcpy(a.jtime,"00:05");
			a.f=a.ffare(lc);
			break;
		case 2: cout<<"\n Trichy to Singapore";
			strcpy(a.from,"Trichy");
			strcpy(a.to,"Singapore");
			strcpy(a.jtime,"03:10");
			a.f=a.ffare(st);
			break;
		case 3: cout<<"\n Cochin To Kuala Lumpur ";
			strcpy(a.from,"Cochin");
			strcpy(a.to,"Kuala Lumpur");
			strcpy(a.jtime,"05:00");
			a.f=a.ffare(kc);
			break;
		case 4: cout<<"\n Delhi to Riyadh ";
			strcpy(a.from, "Delhi");
			strcpy(a.to,"Riyadh");
			strcpy(a.jtime,"06:30");
			a.f=a.ffare(rd);
			break;
		case 5: cout<<"\n Banglore to Dubai ";
			strcpy(a.from,"Banglore");
			strcpy(a.to,"Dubai");
			strcpy(a.jtime,"11:20");
			a.f=a.ffare(jb);
			break;
		case 6: cout<<"\n Calcutta to Beijing ";
			strcpy(a.from,"Calcutta");
			strcpy(a.to,"Beijing");
			strcpy(a.jtime,"08:50");
			a.f=a.ffare(bc);
			break;
		case 7: cout<<"\n Mumbai to Tokyo ";
			strcpy(a.from,"Mumbai");
			strcpy(a.to,"Tokyo");
			strcpy(a.jtime,"10:00");
			a.f=a.ffare(tm);
			break;
		case 8: cout<<"\n Chennai to Carribean";
			strcpy(a.from,"Chennai");
			strcpy(a.to,"Carribean");
			strcpy(a.jtime,"10:15");
			a.f =  a.ffare(cc);
			break;
		case 9: cout<<"\n Delhi  To California";
			strcpy(a.from,"Delhi");
			strcpy(a.to,"California");
			strcpy(a.jtime,"11:00");
			a.f = a.ffare(cd);
			break;
	       case 10: cout<<"\n Mumbai To Sydney";
			strcpy(a.from,"Mumbai");
			strcpy(a.to,"Sydney");
			strcpy(a.jtime,"13:28");
			a.f = a.ffare(sm);
			break;
	       default: cout<<"\n Service not available";

	}
	cout<<"\n Fare :"<<a.f;
	ofstream file6;
	file6.open("fint.dat",ios::out|ios::app);
	cout<<"\n Enter Details  : ";
	cout<<"\n Name           : ";
	gets(a.name);
	cout<<"\n Sex            : ";
	cin>>a.sex;
	cout<<"\n Email Id       : ";
	gets(a.eid);
	cout<<"\n Mobile Number  : ";
	cin>>a.mobno;
	cout<<"\n Pasport Number : ";
	cin>>a.ppno;
	cout<<"\n Journey Date   : ";
	cin>>a.jdate;
	cout<<"\n House number   : ";
	cin>>a.hno;
	cout<<"\n Address        : ";
	gets(a.addr);
	cout<<"\n City           : ";
	gets(a.city);
	cout<<"\n Landmark       : ";
	gets(a.lnd);
	file6.write((char*)&a,sizeof(a));
	cout<<"\n PROCESSING...";
	delay(3000);
	cout<<"\n ***************";
	cout<<"\n Ticket Booked";
	cout<<"\n ****************";
	getch();
	clrscr();
	cout<<"\n Name  : "<<a.name<<"\n";
	cout<<"\n Age   : "<<a.age<<"\n";
	cout<<"\n Sex   : "<<a.sex<<"\n";
	cout<<"\n From  : "<<a.from<<"\n";
	cout<<"\n To    : "<<a.to<<"\n";
	cout<<"\n Date  : "<<a.jdate<<"\n";
	cout<<"\n Time  : "<<a.jtime<<"\n";
	cout<<"\n Fare  : "<<a.f<<"\n";
	cout<<"\n Payment to be made through Demand Draft in favour of 'Aacin Travels' payable at Kumbakonam";
	getch();
	file6.close();
}
//function to calculate fare
float flight::ffare(float f_t)
{
	cout<<"\n Enter Details ";
	cout<<"\n Age       :";
	cin>>a.age;
	if(a.age < 6)
	{
	       a.f = f_t/5;
	}
	else if(a.age>5 && a.age<13)
	{
	a.f = f_t/2;
	}
	else if(a.age>12 && a.age <61)
	{
	a.f = f_t;
	}
	else if(a.age>60)
	{
	a.f = f_t - 1000;
	}
	cout<<"\n Handicapped (y/n): ";
	cin>>a.han;
	if(a.han == 'y' || a.han == 'Y')
	{
	a.f+= 700;
	}
	return a.f;
}
//function to cancel an international ticket
void flight::ficancel()
{       clrscr();
	ifstream file8("fint.dat",ios::in);
	ofstream file9("temp2.dat",ios::out);
	char mno[11];
	char found = 'f';
	char confirm = 'n';
	clrscr();
	cout<<"\n Enter your mobile number : ";
	cin>>mno;
	file8.read((char*)&a,sizeof(a));
	if(strcmp(a.mobno,mno)==0)
	{
		cout<<"\n Details : "<<"\n\n";
		cout<<"\n Name          : "<<a.name<<"\n";
		cout<<"\n Age           : "<<a.age<<"\n";
		cout<<"\n Sex           : "<<a.sex<<"\n";
		cout<<"\n From          : "<<a.from<<"\n";
		cout<<"\n To            : "<<a.to<<"\n";
		cout<<"\n Journey Date  : "<<a.jdate<<"\n";
		cout<<"\n Journey Time  : "<<a.jtime<<"\n";
		cout<<"\n Mobile Number : "<<a.mobno<<"\n";
		cout<<"\n State         : "<<a.state<<"\n";
		cout<<"\n City          : "<<a.city<<"\n";
		cout<<"\n Address       : "<<a.addr<<"\n";
		cout<<"\n Land Mark     : "<<a.lnd<<"\n";
		found = 't';
		cout<<"\n Are you sure you want to cancel ? (y/n) : ";
		cin>>confirm;
		if(confirm == 'n')
		{       file9.write((char*)&a,sizeof(a));
			cout<<"\n ticket Cancelled";
		}
	}
	else
	{
		file9.write((char*)&a,sizeof(a));
	}
	if (found == 'f')
		cout<<"\n Ticket not booked ";
	file8.close();
	file9.close();
	remove("fint.dat");
	rename("temp2.dat","fint.dat");
}
//function to check status of an international ticket
void flight::fistat()
{
    clrscr();
    char mno[11];
    ifstream file10("fint.dat",ios::in);
    cout<<"\n Enter Mobile Number : ";
    cin>>mno;
	file10.read((char*)&a,sizeof(a));
	if(strcmp(a.mobno,mno)==0)
	{
	    cout<<"\n Name  : "<<a.name<<"\n";
	    cout<<"\n Age   : "<<a.age<<"\n";
	    cout<<"\n Sex   : "<<a.sex<<"\n";
	    cout<<"\n From  : "<<a.from<<"\n";
	    cout<<"\n To    : "<<a.to<<"\n";
	    cout<<"\n Date  : "<<a.jdate<<"\n";
	    cout<<"\n Time  : "<<a.jtime<<"\n";
	}
	else
	{
		cout<<"\n Ticket Not Booked ";
	}
    file10.close();
}
void train::tbook()
{
    int ch1;
    char siv ='t';
b:  clrscr();
    cout<<"\n\t\t ---------------------";
    cout<<"\n\t\t TRAIN BOOKING CENTRE";
    cout<<"\n\t\t ---------------------\n";
    cout<<"\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout<<"\n  1. Chennai        To     Banglore\n";
    cout<<"\n  2. Trichy         To     Chennai\n";
    cout<<"\n  3. Kumbakonam     To     Mysore\n";
    cout<<"\n  4. Chennai        To     Delhi\n";
    cout<<"\n  5. Rameshwaram    To     Varanasi\n";
    cout<<"\n  6. Coimbatore     To     Ahmedabad\n";
    cout<<"\n  7. Manglore       To     Madurai\n";
    cout<<"\n  8. Delhi          To     Chennai\n";
    cout<<"\n  9. Mumbai         To     Buvaneshwar\n";
    cout<<"\n10. Tanjore         To     Goa\n";
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\n Your Choice : ";
    cin>>ch1;
    switch(ch1)
    {
	case 1: strcpy(b.from,"Chennai");
		strcpy(b.to,"Banglore");
		strcpy(b.jtime,"10:05");
		b.f= b.tfare(cxb);
		break;
	case 2: strcpy(b.from,"Trichy");
		strcpy(b.to,"Chennai");
		strcpy(b.jtime,"10:10");
		b.f = b.tfare(txc);
		break;
	case 3: strcpy(b.from,"Kumbakonam");
		strcpy(b.to,"Mysore");
		strcpy(b.jtime,"05:35");
		b.f = b.tfare(kxm);
		break;
	case 4: strcpy(b.from,"Chennai");
		strcpy(to,"Delhi");
		strcpy(b.jtime,"12:05");
		b.f = b.tfare(cxd);
		break;
	case 5: strcpy(b.from,"Rameshwaram");
		strcpy(b.to,"Varanasi");
		strcpy(b.jtime,"1:30");
		b.f = b.tfare(rxv);
		break;
	case 6: strcpy(b.from,"Coimbatore");
		strcpy(b.to,"Ahmedabad");
		strcpy(b.jtime,"1:35");
		b.f = b.tfare(cxa);
		break;
	case 7: strcpy(b.from,"Manglore ");
		strcpy(b.to,"Madurai");
		strcpy(b.jtime,"10:05");
		b.f = b.tfare(mxm);
		break;
	case 8: strcpy(b.from,"Delhi");
		strcpy(b.to,"Chennai");
		strcpy(b.jtime,"03:05");
		b.f = b.tfare(dxc);
		break;
	case 9: strcpy(b.from,"Mumbai");
		strcpy(b.to,"Buvaneshwar");
		strcpy(b.jtime,"15:30");
		b.f = b.tfare(mxb);
		break;
	case 10:strcpy(b.from,"Tanjore");
		strcpy(b.to,"Goa");
		strcpy(b.jtime,"12:30");
		b.f = b.tfare(txg);
		break;
	default: cout<<"\n Please enter correctly";
		 siv = 'f';
		 delay(3000);
		break;
    }
    if(siv == 'f')
	goto b;
    cout<<"\n Fare : "<<b.f;
    ofstream file11;
    file11.open("train.dat",ios::out|ios::app);
    cout<<"\n Enter Details";
    cout<<"\n Name             : ";
    gets(b.name);
    cout<<"\n Age              : ";
    cin>>b.age;
    cout<<"\n Sex              : ";
    cin>>b.sex;
    cout<<"\n Email id         : ";
    gets(b.eid);
    cout<<"\n Journey Date     : ";
    gets(b.jdate);
    cout<<"\n Mobile number    : ";
    gets(b.mobno);
    cout<<"\n State            : ";
    gets(b.state);
    cout<<"\n City             : ";
    gets(b.city);
    cout<<"\n Address          : ";
    gets(b.addr);
    file11.write((char*)&b,sizeof(b));
    cout<<"\n PROCESSING...";
    delay(3000);
    cout<<"\n";
    cout<<"\n *****************";
    cout<<"\n  Ticket Booked";
    cout<<"\n *****************";
    clrscr();
    cout<<"\n Name  : "<<b.name<<"\n";
    cout<<"\n Age   : "<<b.age<<"\n";
    cout<<"\n Sex   : "<<b.sex<<"\n";
    cout<<"\n From  : "<<b.from<<"\n";
    cout<<"\n To    : "<<b.to<<"\n";
    cout<<"\n Date  : "<<b.jdate<<"\n";
    cout<<"\n Time  : "<<b.jtime<<"\n";
    cout<<"\n Fare  : "<<b.f<<"\n";
    cout<<"\n Payment to be made through Demand Draft in favour of 'Aacin Travels' payable at Kumbakonam";
    getch();
    file11.close();
}
float train::tfare(float f_t)  //function to calculate fare train
{  float f;
	cout<<"\n Enter Details ";
	cout<<"\n Age       :";
	cin>>b.age;
	if(b.age < 6)
	{
	       b.f = f_t/3;
	}
	else if(b.age>5 && b.age<13)
	{
		b.f = f_t/2;
	}
	else if(b.age>12 && b.age <61)
	{
		b.f = f_t;
	}
	else if(age>60)
	{
		b.f = f_t - 100;
	}
	cout<<"\n Handicapped (y/n): ";
	cin>>b.han;
	if(c.han == 'y' || c.han == 'Y')
	{
		b.f-= 100;
	}
	return b.f;
}
void train::tcancel()
{
	ifstream file12("train.dat",ios::in);
	ofstream file13("temp3.dat",ios::out);
	char mno[20];
	char found = 'f';
	char confirm = 'n';
	clrscr();
	cout<<"\n Enter your mobile number : ";
	cin>>mno;
	file12.read((char*)&a,sizeof(a));
	if(strcmp(b.mobno,mno)==0)
	{
		cout<<"\n Details : ";
		cout<<"\n Name          : "<<b.name<<"\n";
		cout<<"\n Age           : "<<b.age<<"\n";
		cout<<"\n Sex           : "<<b.sex<<"\n";
		cout<<"\n From          : "<<b.from<<"\n";
		cout<<"\n To            : "<<b.to<<"\n";
		cout<<"\n Journey Date  : "<<b.jdate<<"\n";
		cout<<"\n Journey Time  : "<<b.jtime<<"\n";
		cout<<"\n Mobile Number : "<<b.mobno<<"\n";
		cout<<"\n State         : "<<b.state<<"\n";
		cout<<"\n City          : "<<b.city<<"\n";
		cout<<"\n Address       : "<<b.addr<<"\n";
		cout<<"\n Land Mark     : "<<b.lnd<<"\n";
		found = 't';
		cout<<"\n Are you sure you want to cancel ? (y/n) : ";
		cin>>confirm;
		if(confirm == 'n')
		{       file13.write((char*)&a,sizeof(a));
		}
		cout<<"\n Ticket cancelled";
	}
	else
	{
		file13.write((char*)&a,sizeof(a));
	}
	if(found == 'f')
	cout<<"\n Ticket not booked ";
	file12.close();
	file13.close();
	remove("train.dat");
	rename("temp3.dat","train.dat");
}
void train::tstat()
{
char mno[20];
ifstream file14("train.dat",ios::in);
char found = 'n';
cout<<"\n Enter Mobile Number : ";
cin>>mno;
file14.read((char*)&a,sizeof(a));
if(strcmp(mobno,mno)==0)
{
     cout<<"\n Name  : "<<b.name;
     cout<<"\n Age   : "<<b.age;
     cout<<"\n Sex   : "<<b.sex;
     cout<<"\n From  : "<<b.from;
     cout<<"\n To    : "<<b.to;
     cout<<"\n Date  : "<<b.jdate;
     cout<<"\n Time  : "<<b.jtime;
     found = 't';
}
if(found == 'n')
{
     cout<<"\n Sorry ticket not booked";
}
file14.close();
}
void bus::bbook()
{
    int ch1;
    char s = 't';
p:  clrscr();
    cout<<"\n\t\t ------------------";
    cout<<"\n\t\t BUS BOOKING CENTRE";
    cout<<"\n\t\t ------------------\n";
    cout<<"\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout<<"\n  1. Chennai        To    Banglore \n";
    cout<<"\n  2. Madurai        To    Chennai\n";
    cout<<"\n  3. Kumbakonam     To    Coimbatore\n";
    cout<<"\n  4. Trichy         To    Kanyakumari\n  ";
    cout<<"\n  5. Chennai        To    Hyderabad \n";
    cout<<"\n  6. Kanyakumari    To    Chennai \n";
    cout<<"\n  7. Cochin         To    Chennai \n";
    cout<<"\n  8. Tripathi       To    Trichy \n";
    cout<<"\n  9. Coimbatore     To    Banglore \n";
    cout<<"\n 10. Hydrabad       To    Chennai\n";
    cout<<"\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout<<"\n Enter your choice : ";
    cin>>ch1;
    switch(ch1)
    {
	case 1: strcpy(c.from,"Chennai");
		strcpy(c.to,"Banglore");
		strcpy(c.jtime,"10:25");
		c.f= c.bfare(ctb);
		break;
	case 2: strcpy(c.from,"Madurai");
		strcpy(c.to,"Chennai");
		strcpy(c.jtime,"10:25");
		c.f = c.bfare(mtc);
		break;
	case 3: strcpy(c.from,"Kumbakonam");
		strcpy(c.to,"Mysore");
		strcpy(c.jtime,"10:25");
		c.f = c.bfare(ktc);
		break;
	case 4: strcpy(c.from,"Trichy");
		strcpy(c.to,"Kanyakumari");
		strcpy(c.jtime,"11:30");
		c.f=c.bfare(ttk);
		break;
	case 5: strcpy(c.from,"Chennai");
		strcpy(c.to,"Hydrabad");
		strcpy(c.jtime,"12:25");
		c.f= c.bfare(cth);
		break;
	case 6: strcpy(c.from,"Kanyakumari");
		strcpy(c.to,"Chennai");
		strcpy(c.jtime,"13:55");
		c.f=c.bfare(kktc);
		break;
	case 7: strcpy(c.from,"Cochin");
		strcpy(c.to,"Chennai");
		strcpy(c.jtime,"15:00");
		c.f= c.bfare(ctc);
		break;
	case 8: strcpy(c.from,"Tripathy");
		strcpy(c.to,"Trichy");
		strcpy(c.jtime,"18:45");
		c.f= c.bfare(ttt);
		break;
	case 9: strcpy(c.from,"Coimbatore");
		strcpy(c.to,"Banglore");
		strcpy(c.jtime,"22:05");
		c.f=c.bfare(cbtb);
		break;
	case 10:strcpy(c.from,"Hydrabad");
		strcpy(c.to,"Chennai");
		strcpy(c.jtime,"00:00");
		c.f=c.bfare(htc);
		break;
	default: cout<<"\n Wrong choice";
		 s = 'f';
		 delay(3000);
		 break;
}
    if(s == 'f')
	goto p;
    clrscr();
    cout<<"\n Fare : "<<c.f;
    ofstream file15;
    file15.open("bus.dat",ios::out|ios::app);
    cout<<"\n Enter Details";
    cout<<"\n Name : ";
    gets(c.name);
    cout<<"\n Age : ";
    cin>>c.age;
    cout<<"\n Sex : ";
    gets(c.sex);
    cout<<"\nEmail id : ";
    gets(c.eid);
    cout<<"\n Mobile number : ";
    gets(c.mobno);
    cout<<"\n Journey date  : ";
    gets(c.jdate);
    cout<<"\n State : ";
    gets(c.state);
    cout<<"\n City : ";
    gets(c.city);
    cout<<"\n Address : ";
    gets(c.addr);
    file15.write((char*)&c,sizeof(c));
    cout<<"\n PROCESSING...";
    delay(3000);
    cout<<"\n ****************";
    cout<<"\n  Ticket Booked";
    cout<<"\n ****************";
    clrscr();
    cout<<"\n Name  : "<<c.name<<"\n";
    cout<<"\n Age   : "<<c.age<<"\n";
    cout<<"\n Sex   : "<<c.sex<<"\n";
    cout<<"\n From  : "<<c.from<<"\n";
    cout<<"\n To    : "<<c.to<<"\n";
    cout<<"\n Date  : "<<c.jdate<<"\n";
    cout<<"\n Time  : "<<c.jtime<<"\n";
    cout<<"\n Fare  : "<<c.f<<"\n";
    cout<<"\n Payment to be made through Demand Draft in favour of 'Aacin Travels' payable at Kumbakonam";
    getch();
    file15.close();
}
float bus::bfare(float f_t)  //function to calculate fare train
{
	cout<<"\n Enter Details ";
	cout<<"\n Age       :";
	cin>>c.age;
	if(c.age < 6)
	{
	       c.f = f_t/3;
	}
	else if(c.age>5 && c.age<13)
	{
	c.f = f_t/2;
	}
	else if(c.age>12 && c.age <61)
	{
	c.f = f_t;
	}
	else if(c.age>60)

	{
	c.f = f_t - 100;
	}
	cout<<"\n Handicapped (y/n): ";
	cin>>c.han;
	if(c.han == 'y' || c.han == 'Y')
	{
	c.f-= 100;
	}
	return c.f;
}
void bus::bcancel()
{
	ifstream file16("bus.dat",ios::in);
	ofstream file17("temp4.dat",ios::out);
	char mno[11];
	char found = 'f';
	char confirm = 'y';
	clrscr();
	cout<<"\n Enter your mobile number : ";
	cin>>mno;
	file16.read((char*)&c,sizeof(c));
	if(strcmp(c.mobno,mno)==0)
	{
		cout<<"\n Details : ";
		cout<<"\n Name          : "<<c.name<<"\n";
		cout<<"\n Age           : "<<c.age<<"\n";
		cout<<"\n Sex           : "<<c.sex<<"\n";
		cout<<"\n From          : "<<c.from<<"\n";
		cout<<"\n To            : "<<c.to<<"\n";
		cout<<"\n Mobile Number : "<<c.mobno<<"\n";
		cout<<"\n State         : "<<c.state<<"\n";
		cout<<"\n City          : "<<c.city<<"\n";
		cout<<"\n Address       : "<<c.addr<<"\n";
		cout<<"\n\n Are you sure you want to cancel ? (y/n) : ";
		cin>>confirm;
		found = 't';
		if(confirm == 'n')
		{       file17.write((char*)&c,sizeof(c));
		}
		cout<<"\n Please wait processing...";
		delay(3000);
		cout<<"\n ****************";
		cout<<"\n Ticket Cancelled";
		cout<<"\n ****************";
	}
	else
	{
		file17.write((char*)&c,sizeof(c));
	}
	if(found == 'f')
		cout<<"\n Ticket not booked ";
	file16.close();
	file17.close();
	remove("bus.dat");
	rename("temp4.dat","bus.dat");
}
void bus::bstat()
{
    char mno[11];
    char found = 'n';
    ifstream file18("bus.dat",ios::in);
    cout<<"\n Enter Mobile Number : ";
    cin>>mno;
    file18.read((char*)&c,sizeof(c));
    if(strcmp(c.mobno,mno)==0)
    {
	cout<<"\n Name  : "<<c.name<<"\n";
	cout<<"\n Age   : "<<c.age<<"\n";
	cout<<"\n Sex   : "<<c.sex<<"\n";
	cout<<"\n From  : "<<c.from<<"\n";
	cout<<"\n To    : "<<c.to<<"\n";
	cout<<"\n Date  : "<<c.jdate<<"\n";
	cout<<"\n Time  : "<<c.jtime<<"\n";
	found = 't';
    }
    if(found == 'n')
	cout<<"\n Ticket Not Booked";
    file18.close();
}


























































































































































































































































































































































































































































































































































































































