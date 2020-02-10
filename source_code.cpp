
#include <iostream>

#include<string.h>

#include <math.h>

using namespace std;


//bool to check if a char is  either a letter or another symbol 
bool isLetter(char S)

{

    return 'A' <= S && S <= 'Z';



}
//form a base q to base 10 
int f(char n[20], int q)
{    //1010 binary ->  0xq to the power of 0 
    //A in base 11 -> 10
    int x = 0, i;

    for (i = strlen(n) - 1; i >= 0; i--)
    {

        if (!isLetter(n[i]))
        {
            int temp = n[i] - '0';
            x += temp * pow(q, strlen(n) - 1 - i);
        }

        //daca este litera
        else {

            int temp = n[i] - 'A' + 10;
            x += temp * pow(q, strlen(n) - 1 - i);

        }



    }

    return x;
}

//from base 10 to base q , q<10 
int f1(long long n, int q) //checked

{



    double  rez = 0;

    

    int i = 0;

    while (n != 0)

    {

        int rest = n % q;



        n /= q;

        rez += pow(10, i) * rest;

        i++;

    }

    return rez;

}

//from base 10 to base q , q>10
void fp(int n, int q, char rasp[20])

{
    int i = 0;

    char rez[30];

    //1234 -> base11 A22

    while (n != 0)

    {

        int rest = n % q;

        n /= q;

        if (rest > 9)

        {

            char c = 'A' + rest - 10;
            rez[i] = c;

        }

        else

        {
            //make the rest a char 

            char c = rest + '0';
            rez[i] = c;


        }
        i++;
    }
    rez[i] = NULL;



    //return rez reversed 

    //22A --> A22
    char rez1[20];
    for (int j = i - 1; j >= 0; j--)
    {

        rasp[i - j - 1] = rez[j];



    }

    rasp[i] = NULL;

}//checked

//from base q<10 to base 10  //checked
int f3(int n, int q)

{

   

       

    int rez = 0;
    int i = 0;

    while (n != 0)

    {

        rez += n % 10 * pow(q, i);

        n /= 10;

        i++;

    }

    return rez;

}
//from base q to base p 
void f4(int p, int q, char n[20])
{


   

    int temp = f(n, p);

    //temp holds the number in base 10 
    //if the base to  be converted in it's bigger than 10 we call f1
    if (q > 10) fp(temp, q, n);

    else {
        cout << "Rezultatul este" << " " << f1(temp, q) << endl;

    }


}
