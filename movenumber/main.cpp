#include<iostream>
using namespace std;
//kid1 defined by struct
//kid2 defined by class
struct struct_Kid
{
    //默认公有
    int age;
    char *name;
    char *sex;
}kid1;
class Kid
{
    int age;//默认私有
private:
    char *name;
    char *sex;
    
public:
    inline void setKid(int age,char *name,char *sex);// 显示内联
    
    void showKid()//隐式内联
    {
        cout<<"Class:"<<endl<<"name:"<<name<<endl<<"age:"<<age<<endl<<"sex:"<<sex<<endl;
        
    }
}kid2;//直接定义对象

inline void Kid::setKid(int age, char *name,char *sex)
{
    Kid::age=age;
    Kid::name=name;
    Kid::sex=sex;
}
int main()//主函数入口
{
    //struct
    kid1.age=25;
    kid1.name="jack";
    kid1.sex="male";
    cout<<"struct:"<<endl<<"name:"<<kid1.name<<endl<<"age:"<<kid1.age<<endl<<"sex:"<<kid1.sex
    <<endl;
    
    cout<<"------------------------------"<<endl;
    //class
    Kid kid3,*ptr;
    Kid &kid4=kid3;
    ptr=&kid2;
    kid2.setKid(25, "rose", "female");
    kid2.showKid();
    cout<<"------------------------------"<<endl;
    
    //对象名调用成员函数
    kid3.setKid(27,"Brook", "male");
    kid3.showKid();
    cout<<"-------------------------------"<<endl;
    //引用调用成员函数
    kid4.setKid(26, "Fred", "male");
    kid4.showKid();
    return 0;
    
}
