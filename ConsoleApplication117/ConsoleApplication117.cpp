

#include <iostream>
void gago();
using namespace std;
int main()
{
    gago();
}
void gago ()
{
    char name[50];
    int x;
    cout << "Enter your  name\n";
    cin.ignore();
    cin.getline(name, 50);
    cout << "Welcome " << name << endl;
    cout << "             \t\t\t      Level 1" << endl;
    cout << "15 * 2 = " ;
    cin >> x;
    if (x == 30)
    {
        cout << "Correct\n";
    }
    else
    {
        cout << "False, try agian \n";
    }
    
    cout << " 5 * 7 - 7 =  ";
    cin >> x;
    if (x == 28)
    {
        cout << "Correct\n";
    }
    else
    {
        cout << "False, try agian\n";
    }
    
    cout << "88 + 5 * 5 = ";
    cin >> x;
    if (x == 113)
    {
        cout << "Correct\n";
    }
    else
    {
        cout << "False, try agian\n";
    }
   
    cout << " 88 / 2 = " << endl;
    cin >> x;
    if (x == 44)
    {
        cout << "Correct\n";
    }
    else
    {
        cout << "False, try agian\n";
    }
  
    cout << "100 - 80 / 2 =\n";
    cin >> x;
    if (x == 60)
    {
        cout << "Correct\n";
    }
    else
    {
        cout << "False, try agian\n";
    }
    system("Cls");
    cout << "You skip in Level 1 [ let's go to level 2 ]\n";
    cout << "                  Level 2\n";
    cout << "108 -80 / 2 = ";
    cin >> x;
    if (x == 68)
    {
        cout << "Correct\n";
    }
    else
    {
        cout << "False, try agian\n";
    }
    
    cout << "(213 + 3) / 2 = ";
    cin >> x;
    if (x == 108)
    {
        cout << "Correct\n";
    }
    else
    {
        cout << "False, try agian\n";
    }
    
    cout << "160 * 2 / 4 = \n";
    cin >> x;
    if (x == 80)
    {
        cout << "Correct\n";
    }
    else
    {
        cout << "False, try agian\n";
    }
 
    cout << "pow(8,2)\n";
    cin >> x;
    if (x == 64)
    {
        cout << "Correct\n";
    }
    else
    {
        cout << "False, try agian\n";
    }
    cout << "VERY GOOD BRO\n";
}


