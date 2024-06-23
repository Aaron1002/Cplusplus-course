#ifndef NUMTOSTRING_H
#define NUMTOSTRING_H

class NumToString{
    public:
        NumToString();
        NumToString(int, int, int);
        
        void conversion() const;
        
        int getHour() const;
        int getMinute() const;
        int getSecond() const;
    
    private:
        int hour;
        int minute;
        int second;
        
        void setHour(int);
        void setMinute(int);
        void setSecond(int);
};

#endif