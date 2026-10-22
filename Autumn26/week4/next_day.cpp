#include <iostream>

bool leap_year(int year){
    return (year%4==0)&&((year%100!=0)||year%400==0);
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1

    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)
    int days_per_month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (leap_year(y1)) {
        days_per_month[1] = 29;
    }
    y2 = y1;
    if (d1==days_per_month[m1-1]) {
        d2 = 1;
        if (m1==12) {
            m2 = 1;
            y2++;
            return;
        }
        m2 = m1 + 1;
        return;
    }
    d2 = d1 + 1;
    m2=m1;
}

int main(){
    // TODO: write a main to test the function
    int day1,month1,year1,day2,month2,year2;
    std::cout<<"Please input a date (DD/MM/YYYY), by pressing enter after the day, month, and year: "<<std::endl;
    std::cin>>day1>>month1>>year1;
    next_date(day1, month1, year1, day2, month2, year2);
    std::cout<<day2<<"/"<<month2<<"/"<<year2;
}