#include <iostream>
#include<cmath>
#include<vector>
#include<string>


using namespace std;


//定义一个结构体

//struct Complex
//{
//    double real;
//    double img;
//    void init(double r, double i)
//    {
//        real = r;
//        img = i;
//    }
//    double abs()
//    {
//        double res = pow(real, 2) + pow(img, 2);
//        return sqrt(res);
//    }
//};
//


//用类代替结构体
class Complex
{
private:
    double _real;
    double _img;
public:
    Complex(double, double);
    ~Complex();
    double Geteal();
    double Getimg();
    void Setreal(double);
    void Setimg(double);
    void Init(double, double);
    double Abs();
};

//实现Complex类的函数
void Complex::Setreal(double r)
{
    this->_real = r;
}
void Complex::Setimg(double i)
{
    this->_img = i;
}
double Complex::Geteal()
{
    return this->_real;
}
double Complex::Getimg()
{
    return this->_img;
}

double Complex::Abs()
{
    double res = pow(this->Geteal(), 2) + pow(this->Getimg(), 2);
    return sqrt(res);
}
//初始化
void Complex::Init(double r, double i)
{
    this->Setimg(i);
    this->Setreal(r);
}
//用构造函数
Complex::Complex(double r, double i)
{
    this->Setimg(i);
    this->Setreal(r);
}
Complex::~Complex()
{
    std::cout << "释放了对象占用的内存空间" << endl;
}
/*
Complex中包含了六个函数，编译器在编译时为了减少函数调用时的开销，把这种简短的函数自动编译成内敛函数(inline)
因为在编写代码时没有显示的加inline关键字，所以这种情况也称为隐式定义
*/


/*
构造函数：
构造函数是一种特殊的函数，它主要用来给对象分配空间，进行初始化

析构函数：
析构函数用于执行与构造函数相反的操作，通常用于执行一些清理任务，如释放内存空间等等。



*/


//实例化类的对象
//1.
//Complex com(1, 2);

Complex* com = new Complex(1, 2);





int yasen = 1;

class Student
{
public:
    string Name;
    int Id;
    Student():Name("as"),Id(23)
    {
        cout << "constructor"<<Id<<"called!" << endl;
    }
    ~Student()
    {
        cout << "deconstrcutor" << Id << "called!" << endl;
    }

};



struct X;
struct Y
{
    void f(X*);
};


int main()
{

    Student st;
    cout << st.Name << endl;
    //cout << "succeed" << endl;





    return 0;

}

