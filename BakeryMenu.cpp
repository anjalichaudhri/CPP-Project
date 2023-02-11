#include<iostream>
#include <ctime>
#include<string>

using namespace std;

void WeekMenu(int day) {
    switch(day){
        case 0:
        cout<<"chicken burger"<<endl;
        break;
        
        case 1:
        cout<<"veg burger"<<endl;
        break;

        case 2:
        cout<<"cock&pepsi"<<endl;
        break;

        case 3:
        cout<<"pizza"<<endl;
        break;

        case 4:
        case 5:
        case 6:
        cout<<"italy pizza"<<endl;
        break;
        default :
        cout<<"wrong input || Please enter the no between 1 to 6";
        break;
    }
}

void TodaysMenu() {
    int day;
    // current date and time on the current system
   time_t now = time(0);

   // convert now to string form
   char* date_time = ctime(&now);
//   cout << "The current date and time is: " << date_time << endl;
   string dayOfTheWeek(date_time);
   // dayOfTheWeek.append(date_time[0]);
   dayOfTheWeek = dayOfTheWeek.substr(0, 3);
   cout<<dayOfTheWeek<<endl;
   
   cout<<"-----Today's Menu-----"<<endl;
   
   if(dayOfTheWeek =="Mon"){
       day = 0;
   }
   else if(dayOfTheWeek =="Tue"){
      day = 1;
   }
   else if(dayOfTheWeek =="Wed"){
       day = 2;
   }
   else if(dayOfTheWeek =="Thu"){
       day = 3;
   }
   else if(dayOfTheWeek =="Fri"){
       day = 4;
   }
   else if(dayOfTheWeek =="Sat"){
       day = 5;
   }
   else if(dayOfTheWeek =="Sun"){
       day = 6;
   }
   
   WeekMenu(day);
}

int main()
{
    int day;
    //char name;
    // string specialities;
    // cout<<"Enter Customer name:";
    // cin>>name;
    // cout<<"you have entered: "<<name<<endl;

    // cout<<"enter bakery specialities:";
    // cin>>specialities;
    // cout<<"you have entered: "<<specialities<<endl;
    
    TodaysMenu();
    cout<<"-----The Whole Week Menu-----"<<endl;
    cout<<"0. for monday menu\n";
    cout<<"1. for tuesday menu \n";
    cout<<"2. for wednesday menu \n";
    cout<<"3. for thursday menu \n";
    cout<<"4. for friday menu\n";
    cout<<"5. for saturdaymenu \n";
    cout<<"6. for sunday menu \n";
    cout<<"please enter: ";
    
    while(!(cin>>day) || day>6 || day<0){
        cout<<"Wrong input!"<<endl;
        cout<<"0. for monday menu\n";
        cout<<"1. for tuesday menu \n";
        cout<<"2. for wednesday menu \n";
        cout<<"3. for thursday menu \n";
        cout<<"4. for friday menu\n";
        cout<<"5. for saturdaymenu \n";
        cout<<"6. for sunday menu \n";
        cout<<"please enter: ";
        cin.clear();
        cin.ignore(123, '\n');
    };
    
    WeekMenu(day);
    
    return 0;
}

