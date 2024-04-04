#include <iostream>
using namespace std;


class Anio {
    public:
        explicit Anio(int d, int m,int y)
        {

            if(y>=1900 && y<=2050)
            {
                year=y;
            }
            if(m>=1 && m<=12)
            {
                month=m;
                switch (m)
                {
                case 1:
                    if(d>=1 && d<=31)
                    {
                        day=d;
                    }
                    break;

                case 2:
                    if(isLeapYear()==1)
                    {
                        if(d>=1 && d<=29)
                        {
                            day=d;
                        }
                    }else{
                        if(d>=1 && d<=28)
                        {
                            day=d;
                        }
                    }
                    break;

                case 3:
                    if(d>=1 && d<=31)
                    {
                        day=d;
                    }
                    break;

                case 4:
                    if(d>=1 && d<=30)
                    {
                        day=d;
                    }
                    break;
                
                case 5:
                    if(d>=1 && d<=31)
                    {
                        day=d;
                    }
                    break;
                
                case 6:
                    if(d>=1 && d<=30)
                    {
                        day=d;
                    }
                    break;
                case 7:
                    if(d>=1 && d<=31)
                    {
                        day=d;
                    }
                    break;
                
                case 8:
                    if(d>=1 && d<=31)
                    {
                        day=d;
                    }
                    break;
                case 9:
                    if(d>=1 && d<=30)
                    {
                        day=d;
                    }
                    break;
                
                case 10:
                    if(d>=1 && d<=31)
                    {
                        day=d;
                    }
                    break;
                case 11:
                    if(d>=1 && d<=30)
                    {
                        day=d;
                    }
                    break;
                
                case 12:
                    if(d>=1 && d<=31)
                    {
                        day=d;
                    }
                    break;

                default:
                    break;
                }
            }
            
            
            if(d>=1900 && d<=2050)
            {
                day=d;
            }
        }


    void setDay(int d)
    {
        day=d;
    }
    void setMonth(int m)
    {
        month=m;
    }
    void setYear(int y)
    {
        if(y>=1900 && y<=2050)
        {
                year=y;
        }
    }
    int getDay() const
    {
        return day;
    }
    int getMonth() const
    {
        return month;
    }
    int getYear() const
    {
        return year;
    }


    bool isLeapYear() const{
        if(year%4==0){
            if(year%100==0 ){
                if(year%400==0 ){
                    return true;
                }
                else{
                    return false;
                }
            }
            else{
            return true;
            }    
        }
        else{
            return false;
        }


    }
    
    void displayDate() const{
        cout<<endl;
        cout<<day << " / " <<month<<"  / "<<year;
    }


   
    private:
        int day{1};
        int month{1};
        int year{1900};
       
};
