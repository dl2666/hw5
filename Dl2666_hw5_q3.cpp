#include <iostream>
#include <string>
using namespace std;

int printMonthCalendar(int numOfDays, int startingDay);
bool isLeapYear(int year);
void printYearCalender(int year, int startingDay);

int main() {
    int startingDay, year;
    cout<<"Please enter an integer that represents a year:"<<endl;
    cin>>year;
    cout<<"Enter a # 1-7 that represents the day in the week of 1/1 that year (1 for Mon, 2 for Tues, 3 for Wed, etc.): "<<endl;
    cin>>startingDay;
    printYearCalender(year, startingDay);
    
    return 0;
}
//part a
int printMonthCalendar(int numOfDays,int startingDay){
    int lastDay(0),totalSpots;
    totalSpots=numOfDays+(startingDay-1);
    
    cout<<"\nMon\tTue\tWed\tThu\tFri\tSat\tSun\t"<<endl;
    
    for (int i=1;i<=totalSpots;i++){
        if (i<startingDay)
            cout<<"\t";
        else{
            int day;
            
            if (i==startingDay){
                day=1;
                cout<<day<<"\t";
            }
            else{
                day=(i-(startingDay-1));
                cout<<day<<"\t";
                
                if (totalSpots==35)
                    lastDay=0;
                else
                    lastDay=totalSpots%7;
            }
            if (i%7==0){
                cout<<"\n";
            }
        }
    }
    cout<<endl;
    return lastDay;
}
//part b
bool isLeapYear(int year){
    if (year%4==0){
        if (year%100!=0)
            return true;
        else{
            if(year%400==0)
                return true;
            else
                return false;
        }
    }
    else
        return false;
}
//part c
void printYearCalender(int year, int startingDay){
    int daysPerMonth;
    string month;
    
    for(int i=1;i<=12;i++){
        switch (i) {
            case 1: cout<<"\tJanuary "<<year<<"\n";daysPerMonth=31;break;
            case 2: {
                cout<<"\tFebruary "<<year<<"\n";
                if(isLeapYear(year)==true)
                    daysPerMonth=29;
                else
                    daysPerMonth=28;
                break;
            }
            case 3: cout<<"\tMarch "<<year<<"\n";daysPerMonth=31;break;
            case 4: cout<<"\tApril "<<year<<"\n";daysPerMonth=30;break;
            case 5: cout<<"\tMay "<<year<<"\n";daysPerMonth=31;break;
            case 6: cout<<"\tJune "<<year<<"\n";daysPerMonth=30;break;
            case 7: cout<<"\tJuly "<<year<<"\n";daysPerMonth=31;break;
            case 8: cout<<"\tAugust "<<year<<"\n";daysPerMonth=31;break;
            case 9: cout<<"\tSeptember "<<year<<"\n";daysPerMonth=30;break;
            case 10: cout<<"\tOctober "<<year<<"\n";daysPerMonth=31;break;
            case 11: cout<<"\tNovember "<<year<<"\n";daysPerMonth=30;break;
            default: cout<<"\tDecember "<<year<<"\n";daysPerMonth=31;break;
        }
        //add one because printMonthCalendar returns last day of previous month
        //return 0 if last day was Sunday
        startingDay=(printMonthCalendar(daysPerMonth,startingDay) + 1);
        cout<<endl;
    }
    
    
    
    
    
    
    
}

