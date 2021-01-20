#include <iostream>
#include <string>
#include <fstream>
class BaseClass
{
    public:
    std::string quote, speaker;
    std::ofstream fileOutput;
    BaseClass();
    ~BaseClass();
    void inputQuoate();
    void inputspeaker();
    bool write();
};
/*
class SubClass : public BaseClass
{
    public:
    SubClass();
    ~SubClass();
    void dosomethings();
};
*/
BaseClass::BaseClass()
{
    fileOutput.open("test.txt",std::ios::app);

}
BaseClass::~BaseClass()
{
    fileOutput.close();

}
void BaseClass::inputQuoate()
{
    std::getline(std::cin,quote);

}
void BaseClass::inputspeaker()
{
    std::getline(std::cin,speaker);


}
bool BaseClass::write()
{
    if(fileOutput.is_open())
    {
        fileOutput<< quote << "zuozhe"<< speaker <<std::endl ;
        return true ;
    }
    else
    {
        return false;
    }
    

}






/*
SubClass::SubClass()
{
    std::cout<<"�ҽ������๹����������\n";

}
SubClass::~SubClass ()
{
    std::cout <<"�ҽ�����������������һЩ�¡�����\n";

}
void SubClass::dosomethings ()
{
    std::cout << "wozai zilei zuolyixieshi \n";
}

*/


int main()
{
    BaseClass quote ;
    std::cout <<"������һ�仰��\n";
    quote.inputQuoate();
    std::cout <<"���������ߣ�\n";
    quote.inputspeaker();
    if(quote.write())
    {
        std::cout << "�ɹ�д��\n" ;

    }
    else
    {
        std::cout <<"д��ʧ��\n" ;

    }
    
    return 0;
}
