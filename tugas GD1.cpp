#include <iostream>
using namespace std;

int batas;

struct stack
{
    int atas;
    char data[100000];
}kotak;

void SalahMemasukkan()
{
    system("cls");
    cout << "Anda Salah Memasukkan Input\n\n" << endl << endl;
    system("pause");
}

void KeluarProgram()
{
    system("cls");
    cout << "Anda Keluar Program \n\n";
    system("pause");
}

void InitStack()
{
    kotak.atas = -1;
}

int StackFull()
{
    if (kotak.atas == batas-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int StackEmpty()
{
    if (kotak.atas == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void PushStack(char data)
{
    if (StackEmpty() == 1)
    {
    kotak.atas++;
    kotak.data[kotak.atas] = data;
    cout << "Data " << data << " Telah Masuk Di Data\n\n";
    system("pause");
    system("cls");
    }

    else if (StackFull() == 0)
    {
        kotak.atas++;
        kotak.data[kotak.atas] = data;
        cout << "Data " << data << " Telah Masuk Di Data\n\n";
        system("pause");
        system("cls");
    }
    
    else
    {
        cout << "Data Telah Penuh\n\n";
        system("pause");
        system("cls");
    }
}

void PopStack()
{
    if (StackEmpty() == 0)
    {
        cout << "Data " << kotak.data[kotak.atas] << " Telah Dihapus";
        kotak.atas--;
        cout << "\n\n";
        system("pause");
        system("cls");
    }
}

void ShowStack()
{
    if (StackEmpty() == 0)
    {
        for (int x = kotak.atas; x >= 0; x--)
        {
            cout << "Data Ke-" << x << " = " << kotak.data[x] << endl;
        }
        cout << "\n\n";
        system("pause");
        system("cls");
    }
    else
    {
        cout << "Data Kosong \n\n";
        system("pause");
        system("cls");
    }
    
}


void DeleteStack()
{
    kotak.atas = -1;
    cout << "Semua Data Terhapus \n\n";
    system("pause");
    system("cls");
}

int main()
{
    InitStack();
	do
	{
        char data;
        system("cls");
        cout << "Program Stack\n\n";
        system("pause");
        system("cls");
        int t_batas;
        unsigned short int pilihan;
        cout << "Apakah anda ingin melanjutkan ?\n\n1. Iya \n2. Tidak \n\nPilihan: ";
        cin >> pilihan;
        if (pilihan == 1)
        {
            system("cls");
            cout << "Masukkan Batas: ";
            cin >> batas;
            t_batas = batas;
            do
            {
                system("cls");
                cout << "Batas Data: " << t_batas;
                cout << "\n\n1. Masukkan Data\n2. Hapus Data\n3. Tampilkan Data\n4. Hapus Semua Data\n5. Keluar Program\n\nPilihan: ";
                cin >> pilihan;
                if (pilihan == 1)
                {
                    system("cls");
                    if (t_batas == 0)
                    {
                        cout << "Data Telah Penuh\n\n";
                        system("pause");
                        system("cls");
                    }
                    else
                    {
                        cout << "Masukkan Data: ";
                        cin >> data;
                        PushStack(data);
                        if (t_batas == 0)
                        {
                            t_batas = 0;
                        }
                        else
                        {
                            t_batas--;
                        }
                    }
                }
                else if (pilihan == 2)
                {
                    system("cls");
                    PopStack();
                    t_batas++;
                }
                else if (pilihan == 3)
                {
                    system("cls");
                    ShowStack();
                }
                else if (pilihan == 4)
                {
                    system("cls");
                    DeleteStack();
                    t_batas = batas;
                }
                else if (pilihan == 5)
                {
                    KeluarProgram();
                    return 0;
                }
                else
                {
                    SalahMemasukkan();
                    return 0;
                }
            } while (true);
        }
        else if (pilihan == 2)
        {
            KeluarProgram();
            return 0;
        }
        else
        {
            SalahMemasukkan();
            return 0;
        }
	} while (true);
}
