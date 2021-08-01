#include<iostream>
#include<cmath>

using namespace std;

// DECLARATION OF FUNCTIONS

void welcome();
void choose(char);
void menu();

// ADDITION FUNCTION

template < class T >
T add(T a, T b )
{
    return a+b;
}

// SUBTRACTION FUNCTION

template < class T >
T subtract(T a,T b)
{
    return a-b;
}

//MULTIPLICATION FUNCTION

template < class T >
T multiply(T a, T b)
{
    return a*b;
}

// DIVISION FUNCTION

template < class T >
T division(T a,T b)
{
    return a/b;
}

// POWER FUNCTION

template < class T >
T power(T a, T b)
{
    T c;
    c=pow(a,b);
    return c;
}

// SQUARE ROOT FUNCTION

template < class T >
T square_root(T a)
{
    return sqrt(a);
}

// FACTORIAL CONVERSION

template < class T >
T factorial(T a)
{
    T i,f;
    for(i=1;i<=a;i++)
    f*=i;
    return f;
}

// ANGLE CONVERSION FUNCTION

template<class T>
float conversion_to_degree(T a)
{
    return (float)(a*180.0)/3.14;
}


template<class T>
float conversion_to_radian(T a)
{
    return (float)(a*3.14)/180.0;
}

// MAIN FUNCTION


int main()
{

    welcome();
    menu();
    return 0;

}

// FUNCTION TO DISPLAY WELCOME MESSAGE 

void welcome()
{

    cout<<endl;
    cout<<"\t \t    ##########################################"<<endl;
    cout<<"\t \t    #                                        #"<<endl;
    cout<<"\t \t    #           BASIC CALCULATOR             #"<<endl;
    cout<<"\t \t    #                                        #"<<endl;
    cout<<"\t \t    ##########################################"<<endl;

}

// FUNCTION TO SELECT OPTIONS

void menu()
{

    char ch;

    cout<<endl<<endl<<endl;
    cout<<"\t \t FOLLOWING OPERATIONS ARE AVAILABLE IN THIS CALCULATOR"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t \t 1 . ADDITION : +"<<endl;
    cout<<"\t \t 2 . SUBTRACTION : -"<<endl;
    cout<<"\t \t 3 . MULTIPLICATION : *"<<endl;
    cout<<"\t \t 4 . DIVISION : /"<<endl;
    cout<<"\t \t 5 . FACTORIAL : !"<<endl;
    cout<<"\t \t 6 . POWER : ^"<<endl;
    cout<<"\t \t 7 . SQUARE ROOT : S"<<endl;
    cout<<"\t \t 8 . ANGLE CONVERSION : L"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t \t Enter your choice by pressing the symbol as indicated and 0 to exit : ";
    cin>>ch;

    if(ch=='0')
    exit(0);
    else
    choose(ch);

}         // END OF FUCTION MENU()

// FUNCTION TO CALL PARTICULAR OPERATION FUCNTION

void choose(char a)
{

    auto x=0,y=0,z=0;
    char cha;

     // START OF SWITCH

    switch(a)
    {
        
        case '+' :
        
        cout<<"\t \t Enter the two numbers to be added : ";
        cin>>x>>y;
        z=add(x,y);
        h:
        cout<<endl<<endl<<"\t \t Result : "<<z<<endl;
        cout<<endl;
        cout<<"\t \t Do you want to add further (Y/N) ?"<<endl;
        cin>>cha;
        if(cha=='Y')
        {
            cout<<"\t \t Enter the number to be added : ";
            cin>>x;
            z=add(x,z);
            goto h;
        }
        else
        menu();
        break;



        case '-' :
        
        cout<<"\t \t Enter the two numbers to be subtracted : ";
        cin>>x>>y;
        z=subtract(x,y);
        s:
        cout<<endl<<endl<<"\t \t Result : "<<z<<endl;
        cout<<endl;
        cout<<"\t \t Do you want to subtract further (Y/N) ?"<<endl;
        cin>>cha;
        if(cha=='Y')
        {
            cout<<"\t \t Enter the number to be subtracted : ";
            cin>>x;
            z=subtract(z,x);
            goto s;
        }
        else
        menu();
        break;



        case '*' :
        
        cout<<"\t \t Enter the two numbers to be multiplied : ";
        cin>>x>>y;
        z=multiply(x,y);
        o:
        cout<<endl<<endl<<"\t \t Result : "<<z<<endl;
        cout<<endl;
        cout<<"\t \t Do you want to multiply further (Y/N) ?"<<endl;
        cin>>cha;
        if(cha=='Y')
        {
            cout<<"\t \t Enter the number to be multiplied : ";
            cin>>x;
            z=multiply(x,z);
            goto o;
        }
        else
        menu();
        break;



        case '/' :
       
        cout<<"\t \t Enter the two numbers to be divided : ";
        cin>>x>>y;
        z=division(x,y);
        d:
        cout<<endl<<endl<<"\t\t Result : "<<z<<endl;
        cout<<endl;
        cout<<"\t \t Do you want to divide further (Y/N) ?"<<endl;
        cin>>cha;
        if(cha=='Y')
        {
            cout<<"\t \t Enter the number to be divided by : ";
            cin>>x;
            z=division(z,x);
            goto d;
        }
        else
        menu();
        break;



        case '^' :
        
        p:
        cout<<endl;
        cout<<endl<<endl<<"\t \t Enter the number and the power to be raised : ";
        cin>>x>>y;
        z=power(x,y);
        cout<<endl<<endl<<"\t \t Result : "<<z<<endl;
        cout<<endl;
        cout<<"\t \t Do you want to calculate power for another number (Y/N) ? : "<<endl;
        cin>>cha;
        if(cha=='Y')
        {
            goto p;
        }
        else
        menu();
        break;



        case 'S' :
        
        i:
        cout<<"\t \t Enter the number  : ";
        cin>>x;
        z=square_root(x);
        cout<<endl<<endl<<"\t \t Result : "<<z<<endl;
        cout<<endl;
        cout<<"\t \t Do you want to calculate square root for another number (Y/N) ?"<<endl;
        cin>>cha;
        if(cha=='Y')
        {
            goto i;
        }
        else
        menu();
        break;



        case '!' :
        
        a:
        cout<<endl;
        cout<<endl<<endl<<"\t \t Enter the number  : ";
        cin>>x;
        z=factorial(x);
        cout<<endl<<endl<<"\t \t Result : "<<z<<endl;
        cout<<endl;
        cout<<"\t \t Do you want to calculate factorial for another number (Y/N) ?"<<endl;
        cin>>cha;
        if(cha=='Y')
        {
            goto a;
        }
        else
        menu();
        break;



        case 'L':
        int choice;
        
        c:
        cout<<endl;
        cout<<endl<<endl<<"\t \t Choose the conversion from the following :"<<endl;
        cout<<"\t \t 1 . Degree to Radian"<<endl;
        cout<<"\t \t 2 . Radian to degree"<<endl;
        cout<<"\t \t Enter your choice ( 1/2 ) : ";
        cin>>choice;
        if(choice==1)
        {
            cout<<endl<<endl<<"\t \t Enter the angle in degrees : ";
            cin>>x;
            z=conversion_to_radian(x);
            cout<<endl<<endl<<"\t \t Result : "<<z;
            cout<<endl<<endl<<"\t \t Do you want to convert any other angle ? (y/n) : ";
            cin>>cha;
            if(cha==y)
            goto c;
            else menu();
        }
        else if(choice == 2)
        {
            cout<<endl<<endl<<"\t \t Enter the angle in radian : ";
            cin>>x;
            z=conversion_to_degree(x);
            cout<<endl<<endl<<"\t \t Result : "<<z;
            cout<<endl<<endl<<"\t \t Do you want to convert any other angle ? (y/n) : ";
            cin>>cha;
            if(cha==y)
            goto c;
            else menu();
        }
        else
        {
        cout<<"\t \t Choose again !!"<<endl;
        goto c;
        }
        break;



        default:
        cout<<"\t \t Wrong choice selected , enter again !!"<<endl;
        menu();

    }  // END OF SWITCH
}     // END OF FUNCTION CHOOSE()