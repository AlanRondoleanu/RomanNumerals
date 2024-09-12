#include <iostream>

int main()
{
    std::string year;
    bool pass = false;

    while (pass == false)
    {
        pass = true;

        std::cout << "Please enter the year in Roman Numerals..." << std::endl;
        std::cin >> year;

        // User Validation
        if (year.size() >= 15 && year.empty() == false)
        {
            std::cout << "1 - 15 Characters only" << std::endl;
            pass = false;
        }
        if (pass == true)
        {
            for (int i = 0; i <= year.size()-1; i++)
            {
                if (year[i] != 'I' &&
                    year[i] != 'V' &&
                    year[i] != 'X' &&
                    year[i] != 'L' &&
                    year[i] != 'C' &&
                    year[i] != 'D' &&
                    year[i] != 'M')
                {
                    std::cout << "Roman Numerals Only." << std::endl;
                    pass = false;
                    break;
                }
            }
        }
    }

    int count = 0;

    // Converts numerals to integers
    for (int i = 0; i <= year.size()-1; i++)
    {
        switch(year[i])
        {
            case 'M':
                count += 1000;
                    break;
            case 'D':
                count += 500;
                    break;
            case 'C':
                count += 100;
                    break;
            case 'L':
                count += 50;
                    break;
            case 'X':
                count += 10;
                    break;
            case 'V':
                count += 5;
                    break;
            case 'I':
                count += 1;
                    break;
            default:
                count += 0;
        }
    }

    if (count < 4000) {
        std::cout << count << std::endl;
    } else {
        std::cout << "Number is too high, requires too much processing power." << std::endl;
    }
    return 0;
}
