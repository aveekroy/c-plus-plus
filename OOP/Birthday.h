#ifndef MYCLASS_H
#define MYCLASS_H

class Birthday
{
public:
    Birthday(int m, int d, int y) : month(m), day(d), year(y) {}
    void printDate()
    {
        cout << month << "/" << day << "/" << year << endl;
    }

private:
    int month;
    int day;
    int year;
};

#endif // MYCLASS_H