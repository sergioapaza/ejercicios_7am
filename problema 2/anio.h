#include <iostream>
using namespace std;


class Anio {
    public:
        explicit Anio(int d, int m,int y):day{d},month{m}{


            if(y>=1900 && y<=2050){
                year=y;
            }
        }


    void setDay(int d){
        day=d;
    }
    void setMonth(int m){
        month=m;
    }
    void setYear(int y){
        if(y>=1900 && y<=2050){
                year=y;
        }
    }
    int getDay() const{
        return day;
    }
    int getMonth() const{
        return month;
    }
    int getYear() const{
        return year;
    }


    bool isLeapYear(int y) const{
        if(y%4==0){
            if(y%100==0 ){
                if(y%400==0 ){
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
        int day;
        int month;
        int year{1900};
       
};
