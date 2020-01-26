#include<iostream>
#include"quiz.h"
#include<fstream>
#include<cstring>

using namespace std;

void CreateAdmin::create_admin(char*u,char*p,char*t)
{
    fstream fout("User.bin",ios::binary|ios::in);
    if(fout)
    {
        cout<<"File Exists";
        fout.close();
    }
    else
    {
        fout.open("User.bin",ios::binary|ios::out);
        User adminuser;
        adminuser.setUserDetails(u,"Ram",p,"admin");
        fout.write((char*)&adminuser,sizeof(User));
        fout.close();
    }
}
void User :: setUserDetails(char*userid,char*name,char*pwd,char*type)
{
    strcpy(this->userid,userid);
    strcpy(this->uname,uname);
    strcpy(this->pwd,pwd);
    strcpy(this->type,type);
}
