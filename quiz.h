#ifndef QUIZ_H_INCLUDED
#define QUIZ_H_INCLUDED
#include <string>

class User
{
protected:
    char userid[20];
    char pwd[20];
    char type[20];
    char uname[20];
public:
    void setUserDetails(char*,char*,char*,char*);
    char* getName(char*);
    void show();
    void input();
    int checkUserExist(char*);
};

class STUDENT:public User
{

public:
    void add();
    void showStudentDetails();
    void quiz();
    void viewPerformance();
};

class CreateAdmin:public User
{

public:
    static void create_admin(char*,char*,char*);
    void addStudent();
    void viewStudent();
    void addQuestion();
    void viewQuestion();
};



#endif // QUIZ_H_INCLUDED
