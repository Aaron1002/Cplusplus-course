#ifndef DATE_H
#define DATE_H

class Date{
  public:
    Date(int = 0, int = 1, int = 0);
    void setYear(int);
    void setMonth(int);
    void setDay(int);
    
    int getYear();
    int getMonth();
    int getDay();
    
    void displayDate();
    
  private:
    int year;
    int month;
    int day;
};

#endif