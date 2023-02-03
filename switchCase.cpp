
#include <iostream>
using namespace std;
int main()
{
    int amt, choice, temp, temp2, temp3;
    cout << "Enter the amount: ";
    cin >> amt;
    cout << "Total no. of \n1. 100 Rs\n2. 50 Rs\n3. 20 Rs \n4. 1 Rs\nChoose one: ";
    cin >> choice;

    temp2 = amt - ((amt / 100) * 100);
    temp3 = temp2 - ((temp2 / 50) * 50);
    temp = temp3 - ((temp3 / 20) * 20);

    switch (1)
    {
    case 1:
        cout << amt / 100 << " Max 100 rupee notes is needed.\n";

    case 2:
        cout << temp2 / 50 << " Max 50 rupee notes is needed.\n";

    case 3:
        cout << temp3 / 20 << " Max 20 rupee notes is needed.\n";

    case 4:
        cout << temp / 1 << "Max 1 rupee notes is needed.\n";
        break;

    default:
        cout << "Invalid choice" << endl;
    }
    return 0;
}

