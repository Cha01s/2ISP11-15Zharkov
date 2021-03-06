#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int massive = 0;

    const int HIGHT1 = 15;
    const int LENGTH1 = 15;

    int arr1[HIGHT1][LENGTH1] = {
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,0,0,0,0,0,0,0,0,1},
        {1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,0,0,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,0,0,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,0,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,0,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,0,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,0,1,1,1,1,1},
        {1,1,1,1,1,0,0,0,0,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
    };

    const int HIGHT2 = 20;
    const int LENGTH2 = 20;

    int arr2[HIGHT2][LENGTH2] = {
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,0,0,1,0,1,0,1,0,0,1,1,0,1,0,0,1,0,1,1},
        {1,0,0,0,0,1,0,0,1,0,1,1,0,1,1,0,1,0,0,1},
        {1,0,0,1,0,0,0,1,1,0,1,1,0,1,1,0,1,0,1,1},
        {1,0,0,0,0,1,0,1,1,0,0,0,0,1,1,0,1,0,1,1},
        {1,0,0,1,0,1,0,0,0,0,1,1,0,1,1,0,1,0,0,1},
        {1,0,0,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,1},
        {1,0,0,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,1},
        {1,0,0,1,0,1,0,1,1,0,0,1,0,1,0,0,1,0,0,1},
        {1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,0,1},
        {1,0,0,1,0,1,0,1,0,0,0,1,0,1,1,0,1,0,1,1},
        {1,0,0,1,0,1,0,0,0,0,0,0,0,1,0,0,1,0,1,1},
        {1,0,0,1,0,1,0,1,0,0,1,0,0,1,1,0,1,0,1,1},
        {1,0,0,1,0,1,0,1,0,0,1,0,0,1,1,0,1,0,1,1},
        {1,0,0,1,0,1,0,1,0,0,1,0,0,0,1,0,1,0,1,1},
        {1,0,0,1,0,0,0,1,0,0,1,1,0,1,1,0,1,0,1,1},
        {1,0,0,1,0,1,0,1,0,0,1,1,0,1,1,0,1,0,1,1},
        {1,0,0,1,0,1,0,1,0,0,1,1,0,1,0,0,1,0,1,1},
        {1,0,0,0,0,1,0,1,0,0,1,1,0,0,1,0,1,0,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
    };

    const int HIGHT3 = 30;
    const int LENGTH3 = 30;

    int arr3[HIGHT3][LENGTH3] = {
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1},
        {1,1,1,0,0,1,0,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1},
        {1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1},
        {1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1},
        {1,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,0,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,0,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,0,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,0,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1},
        {1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,1,0,1,1,1,1,1,1},
        {1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,0,1,1,1,1,1,1},
        {1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,0,0,1,1,1,1,0,1,1,1,1,0,1,0,1,1,0,1,0,0,1,1,1},
        {1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
    };

    cout << "[+]Список массивов:" << endl;
    cout << "[1]Массив 15 на 15" << endl;
    cout << "[2]Массив 20 на 20" << endl;
    cout << "[3]Массив 30 на 30" << endl;
    cout << "[+]Выберите массив: ";

    cin >> massive;

    switch (massive)
    {
    case 1:
        system("cls");
        for (int i = 0; i < HIGHT1; i++)
        {
            for (int j = 0; j < LENGTH1; j++)
            {
                if (arr1[i][j] == 0)
                {
                    cout << "  ";
                }
                else
                {
                    cout << "# ";
                }
            }
            cout << endl;
        }
        break;

    case 2:
        system("cls");
        for (int i = 0; i < HIGHT2; i++)
        {
            for (int j = 0; j < LENGTH2; j++)
            {
                if (arr2[i][j] == 0)
                {
                    cout << "  ";
                }
                else
                {
                    cout << "# ";
                }
            }
            cout << endl;
        }
        break;

    case 3:
        system("cls");
        for (int i = 0; i < HIGHT3; i++)
        {
            for (int j = 0; j < LENGTH3; j++)
            {
                if (arr3[i][j] == 0)
                {
                    cout << "  ";
                }
                else
                {
                    cout << "# ";
                }
            }
            cout << endl;
        }
        break;

    default:
        system("cls");
        cout << "Выбранного массива нет в списке.";
    }

    int _;
    cin >> _;
}