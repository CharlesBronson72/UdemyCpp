#include <cstdint>
#include <iostream>

void super_duper_example(const int number)
{
    static int counter = 0;
    static int counter_line = 1;

    std::cout << counter_line << ". ";
    counter_line++;

    if (number%2 == 0)
    {
        if (number != 10)
        {
            counter++;
        }
        else
        {
            counter=0;
            std::cout << "Der Counter wurde zurückgesetzt !!!\n";
        }
        std::cout << "Die Zahl " << number << " ist gerade und der interne Counter hat den Wert : " << counter << "\n";
    }
    else
    {
        std::cout << "Die Zahl " << number << " ist ungerade und der interne Counter hat den Wert : " << counter << "\n";
    }
    std::cout << "\n";
    return;
}

int main()
{
    int input_number = 0;

    while (true)
    {
        std::cout << "Bitte gib eine Zahl ein : ";
        std::cin >> input_number;
        super_duper_example(input_number);
        if (input_number == 11)
        {
            std::cout << "Das Programm wird durch die Zahl " << input_number << " beendet !!!\n\n";
            break;
        }
    }


    return 0;
}
