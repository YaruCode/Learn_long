#include <iostream>
#include<cmath>
#include<vector>
#include<string>


using namespace std;


//����һ���ṹ��

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


//�������ṹ��
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

//ʵ��Complex��ĺ���
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
//��ʼ��
void Complex::Init(double r, double i)
{
    this->Setimg(i);
    this->Setreal(r);
}
//�ù��캯��
Complex::Complex(double r, double i)
{
    this->Setimg(i);
    this->Setreal(r);
}
Complex::~Complex()
{
    std::cout << "�ͷ��˶���ռ�õ��ڴ�ռ�" << endl;
}
/*
Complex�а����������������������ڱ���ʱΪ�˼��ٺ�������ʱ�Ŀ����������ּ�̵ĺ����Զ��������������(inline)
��Ϊ�ڱ�д����ʱû����ʾ�ļ�inline�ؼ��֣������������Ҳ��Ϊ��ʽ����
*/


/*
���캯����
���캯����һ������ĺ���������Ҫ�������������ռ䣬���г�ʼ��

����������
������������ִ���빹�캯���෴�Ĳ�����ͨ������ִ��һЩ�����������ͷ��ڴ�ռ�ȵȡ�



*/


//ʵ������Ķ���
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

