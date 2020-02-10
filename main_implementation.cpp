#include <iostream>
#include<string.h> #include <math.h>
 usign namespace std; 
 
 
 
 int main()
{


    int aleg;
        do
    {

        cout << "Type your choice : " << endl;

        cout << "1- From any base in base 10 " << endl;
        cout << "2-From base 10 in any base" << endl;
        cout << "3-From base q to base p " << endl;
        cout << "4- EXIT" << endl;
        cin >> aleg;

        switch (aleg)
        {
            int  q;
        case 1: 
            cout << "Type in the initial base : " << endl;
            cin >> q;
            char n[20];
            cout << "Type in the number in base " <<" "<<q<<endl;
            cin>>n;

            if (q == 10) cout <<"The answer is"<< " " << n;
            else cout << "The answer is" << " " << f(n, q);

            break;

            //din baza 10 in baza introdusa


        case 2 :
            cout << "Type in the number in base 10:" << endl;
            int n1;
            cin >> n1;
            char rasp[20];
            cout << "Type in the base you want to convert into : " << endl;
            cin >> q;
            if (q < 10) cout << "The answer in base " << " " <<q<<" " <<"is"<< " "<< f1(n1, q) << endl;
            else {
              
                fp(n1, q, rasp);
                cout << "The answer is" << " " << rasp << endl;

            }

            break;


        case 3 :
            //din baza q in baza p

            int b;
            cout << "Type in the initial base : " << endl;
            cin >> b;
            cout << "Type in the base you want to convert into: " << endl;
            cin >> q;
            cout << "Type in the number :" << endl;

            char np[20];
            cin >> np;

            f4(b, q, np);
             cout<<"The answer is:"<<" " <<np<<endl;


break;
        case 4: cout<<"You selected the EXIT option: " << endl;
            break;
        }
        cout << endl;
        cout << "Continue ...";
        cout << endl;
        cin.get();


    } while (aleg != 4);







    cin >> aleg;

}
