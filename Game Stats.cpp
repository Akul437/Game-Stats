#include <iostream>
using namespace std;

int main()
{
        // Объявление переменных
    int score;
    double distance;
    char playAgain;
    bool shieldsUp;
    short lives,aliensKilled;

        // Присваивание переменным значения
    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;
    aliensKilled = 10;
    double engineTemp = 6572.89;

        // Ввывод значений на екран
    cout << "\nscore: " << score << endl;
    cout << "distance: " << distance << endl;
    cout << "playAgain: " << playAgain << endl;
    shieldsUp = true;
            // пропуск playAgain, поскольку булевые значения,
            // как правило, на экран не выводятся
    cout << "lives: " << lives << endl;
    cout << "aliensKilled: " << aliensKilled << endl;
    cout << "engineTemp: " << engineTemp << endl;
    
        // Ввод собственного значения и вывод его на экран
    int fuel;
    cout << "\nHow much fuel? ";
    cin >> fuel; 
            // Ввод собственного значения в пределах типа переменной int ±2 147 483 648
    cout << "fuel: " << fuel << endl;

        // Оптимизация длинного названия типа переменной
    typedef unsigned short int ushort;
            // с помощью "typedef", чтоб не прописывать в дальнейшем 
            // длинный тип переменной "unsigned short int",
            // этому типу присваивается имя "ushort"
    ushort bonus = 10;
    cout << "\nbonus: " << bonus << endl;

    return 0;
}


