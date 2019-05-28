#ifndef __STRING__
#define __STRING__

class string{
private:
    char * array;
    int length;
public:
    string(); //must have one as deflaut..
    string(const char*);
    ~string();

    unsigned int length();
    void reverse();
    void append(const char);
};
