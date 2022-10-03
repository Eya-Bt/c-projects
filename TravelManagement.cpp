#include<iostream>
#include<fstream>
#include<iomanip>
#include<windows.h>

using namespace std;

class customers
{
 public: string name, gender, address;
         int age , mobile; 
         static int cusID;
         char all[999];

         void getDetails()
         {  
            ofstream out ("old.customer.txt", ios::app);
            {
                cout << "enter customer id: ";
                cin >> cusID;
                cout << "enter name: ";
                cin >> name;
                cout << "enter age: ";
                cin >> age;
                cout << "enter mobile number: ";
                cin >> mobile;
                cout << "enter address: ";
                cin >> address;
                cout << "enter gender: ";
                cin >> gender;
            }
            out << "\nCustomer ID:" << cusID << "\nname: " << name <<"\nage: " << age << "\nmobile number: " << mobile << "\naddress: " << address <<"\ngender: " << gender << endl;
            out.close();  
            cout << "\nSAVED \nNOTE: we save your  details for future purposes\n" << endl;
         
         }
    
        void showDetails()
        {
                ifstream in ("old-customer.txt");
                {
                    cout << "file error" << endl;
                }
                while(!(in.eof()))
                {
                    in.getline(all ,999);
                    cout << all << endl;
                }
                in.close();
        }
};
int customers::cusID;
class cabs
{
 public:
    int cabChoice;
    int kilometers;
    float cabcost;
    static float lastcabcoast;
    void cabDetails()
        {
            cout << "we collaborate with fastest, safest, and smartest cab service around the country" << endl;
            cout <<"------ABC Cabs-------\n"<< endl;
            cout << "1. Rent a standrad cab -2dt for 1km" << endl;
            cout << "2. Rent a luxury cab - 6dt per 1km" << endl;
            cout <<"\n To calculate the cost of your jurney:" << endl;
            cout << "Enter wich cab you need";
            cin >> cabChoice;
            cout  << "Enterkilometers you haveto travel:" ;
            cin >> kilometers;

            int hireCab;
            if(cabChoice==1)
            {
                cabcost = kilometers * 2;
                cout << "\n Your tour cost " << cabcost << "dinars for a standard choice";
                cout << "press 1 to hire this cab or";
                cout << "press 2 to select another cab";
                cin >> hireCab;

                system("CLS");

                if (hireCab==1){
                    lastcabcoast=cabcost;
                    cout <<"\nyou have seccessfullu hired this cab" << endl;
                    cout <<"go to menue and get receipt" << endl;
                }
                else if (hireCab==2){
                    cabDetails();
                }
                else{
                    cout << "invaid input!" << endl;
                    Sleep(999);
                    system("CLS");
                    cabDetails();

                }
            }
            else if (cabChoice==2){
                cabcost = kilometers * 6;
                cout << "\n Your tour cost " << cabcost << "dinars for a luxury choice";
                cout << "press 1 to hire this cab or";
                cout << "press 2 to select another cab";
                cin >> hireCab;

                system("CLS");

                if (hireCab==1){
                    lastcabcoast=cabcost;
                    cout <<"\nyou have seccessfullu hired this cab" << endl;
                    cout <<"go to menue and get receipt" << endl;
                }
                else if (hireCab==2){
                    cabDetails();
                }
                else{
                    cout << "invaid input!" << endl;
                    Sleep(999);
                    system("CLS");
                    menu();

                }  
                cout << "\n press 1 to redirect main menu";
                cin >> hireCab;
                system("CLS");
                if(hireCab == 1) {
                    menu();
                }      
                else{
                    menu();
                }
            
            }
        }
    
};
float cabs :: lastcabcoast;
class Booking
{
 public:
    int choiceHotel;
    int packChoice;
    float hotelCoast;

    void hotels(){
        string hotelNo[]={"joyce, tropicbreez, sunstar"};
        for(int a=0; a<3; a++) {
            cout << (a+1) << ".Hotel" << hotelNo[a] << endl;
        }
        cout << "\n currently we collaborated with above hotels!" << endl;
        cout << "press any key to back ot\nenter number of the hotel you want to book" ;
        cin >> choiceHotel;

        system("CLS");
        if (choiceHotel == 1){
            cout << "------------welcome to hotel joyce--------\n"<< endl;
            cout << "the garden, food and beverage rnjoy all you can drink and stay cool under the summer sun" << endl;
            cout <<"packages offered by joyce: \n" << endl;
            cout << "1. standard pack" << endl;
            cout <<"\t all basic facilities you need just for 150dt" << endl;
            cout <<"2. premium pack" << endl;
            cout <<"\t enjoy premium for 220dt" << endl;
            cout <<"3. luxury pack" << endl;
            cout << "\t live a luxury experience for 350dt" << endl;

            cout << "\n choose a package number or press any key to go back";
            cin >> packChoice;
            if (packChoice==1){
                hotelCoast=150;
                cout << "\nYou have seccessfuly booked standard pack at joyce" << endl;
                cout << "go to menu and take the receipt" << endl;
            }
            else if (packChoice==2){
                hotelCoast=220;
                cout << "\nYou have seccessfuly booked premium pack at joyce" << endl;
                cout << "go to menu and take the receipt" << endl;
            }
            else if (packChoice==3){
                hotelCoast=350;
                cout << "\nYou have seccessfuly booked luxury pack at joyce" << endl;
                cout << "go to menu and take the receipt" << endl;
            }
            else {
                cout << "invalid choice redirecting to previous menu \please wait" << endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
            int gotomenu;
            cout << "\n press 1 to redirect main menu";
            cin >> gotomenu;
            if (gotomenu==1){
                menu();
            }
            else{
                menu();
            }
        }
        else if (choiceHotel == 2){
            cout << "------------welcome to hotel tropicbreez--------\n"<< endl;
            cout << "the garden, food and beverage rnjoy all you can drink and stay cool under the summer sun" << endl;
            cout <<"packages offered by tropicbreez: \n" << endl;
            cout << "1. standard pack" << endl;
            cout <<"\t all basic facilities you need just for 150dt" << endl;
            cout <<"2. premium pack" << endl;
            cout <<"\t enjoy premium for 280dt" << endl;
            cout <<"3. luxury pack" << endl;
            cout << "\t live a luxury experience for 500dt" << endl;

            cout << "\n choose a package number or press any key to go back";
            cin >> packChoice;
            if (packChoice==1){
                hotelCoast=150;
                cout << "\nYou have seccessfuly booked standard pack at joyce" << endl;
                cout << "go to menu and take the receipt" << endl;
            }
            else if (packChoice==2){
                hotelCoast=280;
                cout << "\nYou have seccessfuly booked premium pack at joyce" << endl;
                cout << "go to menu and take the receipt" << endl;
            }
            else if (packChoice==3){
                hotelCoast=500;
                cout << "\nYou have seccessfuly booked luxury pack at joyce" << endl;
                cout << "go to menu and take the receipt" << endl;
            }
            else {
                cout << "invalid choice redirecting to previous menu \please wait" << endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
            int gotomenu;
            cout << "\n press 1 to redirect main menu";
            cin >> gotomenu;
            if (gotomenu==1){
                menu();
            }
            else{
                menu();
            }
        } 
        else if (choiceHotel == 3){
            cout << "------------welcome to hotel sunstar--------\n"<< endl;
            cout << "the garden, food and beverage rnjoy all you can drink and stay cool under the summer sun" << endl;
            cout <<"packages offered by sunstar: \n" << endl;
            cout << "1. standard pack" << endl;
            cout <<"\t all basic facilities you need just for 200dt" << endl;
            cout <<"2. premium pack" << endl;
            cout <<"\t enjoy premium for 420dt" << endl;
            cout <<"3. luxury pack" << endl;
            cout << "\t live a luxury experience for 7000dt" << endl;

            cout << "\n choose a package number or press any key to go back";
            cin >> packChoice;
            if (packChoice==1){
                hotelCoast=200;
                cout << "\nYou have seccessfuly booked standard pack at joyce" << endl;
                cout << "go to menu and take the receipt" << endl;
            }
            else if (packChoice==2){
                hotelCoast=420;
                cout << "\nYou have seccessfuly booked premium pack at joyce" << endl;
                cout << "go to menu and take the receipt" << endl;
            }
            else if (packChoice==3){
                hotelCoast=700;
                cout << "\nYou have seccessfuly booked luxury pack at joyce" << endl;
                cout << "go to menu and take the receipt" << endl;
            }
            else {
                cout << "invalid choice redirecting to previous menu \please wait" << endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
            int gotomenu;
            cout << "\n press 1 to redirect main menu";
            cin >> gotomenu;
            if (gotomenu==1){
                menu();
            }
            else{
                menu();
            }
        }

    }
};

class charges : public Booking , cabs , customers
{
 public:
 void printbill(){
  ofstream outf("receipt.txt");
  {
    outf <<"------abc travel agency-----"<<endl;
    outf <<"---------receipt----------"<<endl;
    outf <<"____________________________"<<endl;

    outf <<"customer ID"<<customers::cusID <<endl << endl;
    outf <<"Description\t\t Total"<<endl;
    outf <<"Hotel cost \t\t"<<fixed<< steprecision(2)<<Booking::hotelCoast<< endl;
    outf <<"travel (cab) cost: \t"<<fixed<< steprecision(2)<< cabs::cabcost << endl;

    outf <<"______________________________"<<endl;
    outf <<"Total charge:\t\t"<<fixed<< steprecision(2) <<Booking::hotelCoast+cabs::lastcabcoast << endl;
    outf <<"______________________________"<<endl;
    outf <<"----------THAN YOU------------"<<endl;
  }
  outf.close();
 }
 void showbil(){
    ifstream inf("receipt.txt");
    {
        if(!inf)
        {
            cout << "file opening error!"<< endl;
        }
        while(!(inf.eof()))
        {
            inf.getline(all, 999);
            cout << all << endl;
        }
    }
    inf.close();
 }
};
void menu()
{
int mainchoice;
int inchoice;
int gotomenu;
cout <<"\t       abc travels  \n"<< endl;
cout <<"-----------main menu----------"<< endl;

cout <<"\t-------------------------"<< endl;
cout <<"\t|\t\t\t\t\t|"<< endl;
cout <<"\t|\tcustomer management -> 1\t|"<< endl;
cout <<"\t|\tcabs management -> 2\t|"<< endl;
cout <<"\t|\tbooking management -> 3\t|"<< endl;
cout <<"\t|\tcharges bills -> 4\t|"<< endl;
cout <<"\t|\tExit -> 5\t|"<< endl;
cout <<"\t|\t\t\t\t\t|"<< endl;
cout <<"\t-------------------------"<< endl;

cout << "\n enter your choice: ";
cin >> mainchoice;
system("CLS");
customers a2;
cabs a3;
Booking a4;
charges a5;

if(mainchoice==1){

cout << "---customers----\n" << endl;
cout << "1. enter new customer" << endl;
cout << "2. see old customers" << endl;

cout << "\nenter choice: ";
cin >> inchoice;
system("CLS");
if(inchoice==1)
{
    a2.getDetails();
}
else if (inchoice==2)
{
    a2.showDetails();
}
else{
    cout << "invalid choice redirecting to previous menu \please wait" << endl;
    Sleep(1100);
    system("CLS");
    menu();
}
cout << "\n press 1 to redirect to main menu";
cin >> gotomenu;
system("CLS");
if(gotomenu==1){
    menu();
}
else{
    menu();
}
}
else if(mainchoice==2){
    a3.cabDetails();
}
else if (mainchoice==3){
    cout << "--> book a luxury hotel using the system" << endl;
    a4.hotels();
}
else if (mainchoice==4)
{
    cout << "-->get your receipt" << endl;
    a5.printbill();
    cout << "your receipt is already printed you can get it from file path\n" << endl;
    cout << "to display your receipt press 1 or enter to go to the main menu" << endl;
    cin >> gotomenu;
    if (gotomenu==1){
        system("CLS");
        a5.showbil();
        cout << "press 1 to redirect to menu";
        cin >> gotomenu;
        system("CLS");
        if(gotomenu == 1){
            menu();
        }
        else{
            menu();
        }


    }
    else{
        system("CLS");
        menu();
    }
}
else if(mainchoice==5){
    cout << " good bye " << endl;
    system("CLS");
    menu();
}
else{
    cout << "invalid choice redirecting to previous menu \please wait" << endl;
    Sleep(1100);
    system("CLS");
    menu();
}

}

int main()
{
return(0);
};