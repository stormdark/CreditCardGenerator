#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>
using namespace std;
class generador
{
private:
        int x;
        int par1, par2, par3, par4, par5, par6, par7, par8;
        int impar1, impar2, impar3, impar4, impar5, impar6, impar7, impar8;
        int multimpar1, multimpar2, multimpar3, multimpar4, multimpar5, multimpar6, multimpar7, multimpar8;
        int uni,dec,resultado;
        int valida;
        int i,cantidad;
        char bin[6];
        int lon;
public:
        void bin_();
        void generar();
 };
 
void generador::bin_()
{
    do{
    cout<<"Inserte BIN [6 Digitos]"<<endl;
    cin>>bin;
    lon=strlen(bin);
    if(lon != 6)
    {
        cout<<"Bin invalido"<<endl;
    }
    }while(lon!=6);
    generar();
};
 
 
void generador::generar()
{
    srand(time(NULL));
    cout<<"running.."<<endl;
    cout<<"Cuantas ccs quieres generar?"<<endl;
    cin>>cantidad;
    i=0;
 
    int x0=bin[0]-'0';
    int x1=bin[1]-'0';
    int x2=bin[2]-'0';
    int x3=bin[3]-'0';
    int x4=bin[4]-'0';
    int x5=bin[5]-'0';
    do{
    int x6=0+rand()%(10-0);
    int x7=0+rand()%(10-0);
    int x8=0+rand()%(10-0);
    int x9=0+rand()%(10-0);
    int x10=0+rand()%(10-0);
    int x11=0+rand()%(10-0);
    int x12=0+rand()%(10-0);
    int x13=0+rand()%(10-0);
    int x14=0+rand()%(10-0);
    int x15=0+rand()%(10-0);
    par1=x1;
    par2=x3;
    par3=x5;
    par4=x7;
    par5=x9;
    par6=x11;
    par7=x13;
    par8=x15;
 
    impar1=x0;
    impar2=x2;
    impar3=x4;
    impar4=x6;
    impar5=x8;
    impar6=x10;
    impar7=x12;
    impar8=x14;
 
    multimpar1=impar1*2;
    multimpar2=impar2*2;
    multimpar3=impar3*2;
    multimpar4=impar4*2;
    multimpar5=impar5*2;
    multimpar6=impar6*2;
    multimpar7=impar7*2;
    multimpar8=impar8*2;
 
    do
    {
        if(multimpar1 > 9)
        {
            uni = multimpar1 - multimpar1 / 10 * 10;
            dec = (multimpar1 - multimpar1 / 100 * 100) / 10;
            multimpar1=uni+dec;
        }
    }while(multimpar1 > 9);
 
    do
    {
        if(multimpar2 > 9)
        {
            uni = multimpar2 - multimpar2 / 10 * 10;
            dec = (multimpar2 - multimpar2 / 100 * 100) / 10;
            multimpar2=uni+dec;
        }
    }while(multimpar2 > 9);
 
    do
    {
        if(multimpar3 > 9)
        {
            uni = multimpar3 - multimpar3 / 10 * 10;
            dec = (multimpar3 - multimpar3 / 100 * 100) / 10;
            multimpar3=uni+dec;
        }
    }while(multimpar3 > 9);
 
    do
    {
        if(multimpar4 > 9)
        {
            uni = multimpar4 - multimpar4 / 10 * 10;
            dec = (multimpar4 - multimpar4 / 100 * 100) / 10;
            multimpar4=uni+dec;
        }
    }while(multimpar4 > 9);
 
    do
    {
        if(multimpar5 > 9)
        {
            uni = multimpar5 - multimpar5 / 10 * 10;
            dec = (multimpar5 - multimpar5 / 100 * 100) / 10;
            multimpar5=uni+dec;
        }
    }while(multimpar5 > 9);
 
    do
    {
        if(multimpar6 > 9)
        {
            uni = multimpar6 - multimpar6 / 10 * 10;
            dec = (multimpar6 - multimpar6 / 100 * 100) / 10;
            multimpar6=uni+dec;
        }
    }while(multimpar6 > 9);
 
    do
    {
        if(multimpar7 > 9)
        {
            uni = multimpar7 - multimpar7 / 10 * 10;
            dec = (multimpar7 - multimpar7 / 100 * 100) / 10;
            multimpar7=uni+dec;
        }
    }while(multimpar7 > 9);
 
    do
    {
        if(multimpar8 > 9)
        {
            uni = multimpar8 - multimpar8 / 10 * 10;
            dec = (multimpar8 - multimpar8 / 100 * 100) / 10;
            multimpar8=uni+dec;
        }
    }while(multimpar8 > 9);
 
    resultado = par1+par2+par3+par4+par5+par6+par7+par8+multimpar1+multimpar2+multimpar3+multimpar4+multimpar5+multimpar6+multimpar7+multimpar8;
 
    if(resultado%10==0)
    {
        cout<<"[+] ";
        cout<<x0;
        cout<<x1;
        cout<<x2;
        cout<<x3;
        cout<<x4;
        cout<<x5;
        cout<<x6;
        cout<<x7;
        cout<<x8;
        cout<<x9;
        cout<<x10;
        cout<<x11;
        cout<<x12;
        cout<<x13;
        cout<<x14;
        cout<<x15<<endl;
        i++;
    }else
    {
        //meh
    }
    }while(i<cantidad);
        if(x0 == 3)
        {
            cout<<"[+] Tipo: American Express"<<endl;
        }else
        {
            if(x0 == 4)
        {
           cout<<"[+] Tipo: Visa"<<endl;
        }else
        {
            if(x0 == 5)
            {
                cout<<"[+] Tipo: Mastercard"<<endl;
            }else
            {
                if(x0 == 6)
                {
                    cout<<"[+] Tipo: Discover"<<endl;
                }else
                {
                    cout<<"[!] Tipo: WTF!"<<endl;
                }
            }
        }
    }
};
 
int main()
{
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 26);
    system ("title CC Generator by StØrMd[4]rk [+] cyber-oxyde.blogspot.mx");
    char xd;
    do{
    system("cls");
    cout<<"__________________________"<<endl;
    cout<<"By StOrMd4rk @cyber-oxyde"<<endl;
    cout<<"--------------------------"<<endl<<endl;
    generador obj;
    obj.bin_();
    cout<<"Generar mas? s/n"<<endl;
    cin>>xd;
    xd=tolower(xd);
    }while(xd == 's');
}
