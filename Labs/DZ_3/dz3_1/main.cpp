#include <QCoreApplication>
#include <iostream>
#include <cmath>
using namespace std;
//////////////////////////////////
class REAL
{
  public:
    double ch;     //drobnoe chislo c 2 znakami posle ","
  void init()       //zapolniaet znachenie
    {
        cout << "Input chislo: " << endl;
        cin >> ch;
        cout << endl;
    }
  void ret()        //vivodit znachenie
    {
        cout << ch << endl;
    }
  void choice()
    {
      cout << "Choose comand:"<<endl;
      cout << "0)Exit"<< endl;
      cout << "1)Chislovoe pole"<< endl;
      cout << "2)Celoe pole"<< endl;
      cout << "3)Drobnoe pole"<< endl;
        int a;           //dlya switch
        bool flag = true;
        double *b;
        b = new double;
        double c;
        c = modf(ch, b);
        cin >> a;
        while (flag)
        {
            switch (a)
            {
                case 0:
                    flag = false;
                break;
                case 1:
                    cout << (ch);
                break;
                case 2:
                    cout << *b;         //celoe
                break;
                case 3:
                    cout << c;          //drobnoe
                break;
            default:
                cerr << "Unknown comand!";
            }
            if (flag)
            {
            cout << endl;
            cin >> a;
            }
         }
    cout << "VISHLI IZ ZICLA" << endl;
    }
};

//////////////////////////////////////////////////

class MASREAL
{
public : MASREAL()
{
      for (int j=0; j < 3; j++)
      {
          kek[j].init();
      }
}
    public:
        REAL kek[3];
    void VivodVsex()
    {
        cout << "Output all double" << endl;
        for (int j=0; j < 3; j++)
        {
           kek[j].ret();
        }
    }
    void VivodPoIndexu()
    {
        int i;
        cout << "Inpit Index of element" << endl;
        cin >> i;
        cout << "Chislo equils" << endl;
        kek[i-1].ret();
    }
    void AverageCel()
    {
        cout << "Celaya chast equils"<<endl;
        double *b;
        b = new double;
        double c=0;
             double m=0;
             for (int i=0;i <3;i++)
             {
                 c = modf(kek[i].ch, b);
                 m = *b + m;
              }
                        m = m/3;
                        cout << m <<endl;
    }
    void AverageDrob()
    {
        cout << "Drobnaya chast equils"<<endl;
        double *b;
        b = new double;
        double c=0;
             for (int i=0;i <3;i++)
                 c += modf(kek[i].ch, b);
              c = c/3;
              cout << c << endl;
    }
    void MinDrob()
    {
        cout << "Minimum drobnaoi chasti"<<endl;
        double *b;
        b = new double;
        double c=0;
             double mas[2];
             for (int i=0;i <3;i++)
             {
                 c = modf(kek[i].ch, b);
                 mas[i] = c;
             }
        for (int i = 0; i < 3 - 1; i++)
        {
            for (int j = 0; j < 3 - i - 1; j++)
            {
                if (mas[j] > mas[j + 1])
                {
                    swap(mas[j], mas[j + 1]);
                }
            }
        }
        cout << mas[0];
     }
    void MaxDrob()
    {
        cout << "Maximum drobnaoi chasti"<<endl;
        double *b;
        b = new double;
        double c=0;
             double mas[2];
             for (int i=0;i <3;i++)
             {
                 c = modf(kek[i].ch, b);
                 mas[i] = c;
             }
        for (int i = 0; i < 3 - 1; i++)
        {
            for (int j = 0; j < 3 - i - 1; j++)
            {
                if (mas[j] < mas[j + 1])
                {
                    swap(mas[j], mas[j + 1]);
                }
            }
        }
        cout << mas[0];
     }
};

/////////////////////////////////////

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    REAL kek;
    kek.init();
    kek.ret();
    kek.choice();
    MASREAL k;
    k.VivodVsex();
    k.VivodPoIndexu();
    k.AverageCel();
    k.AverageDrob();
    k.MinDrob();
    k.MaxDrob();
    return a.exec();
}
