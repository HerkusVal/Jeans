#include <iostream>
#include <stdlib.h>
#include <string>
#include "header.h"

using namespace std;

void ChangeTone();
void Checker(int i);

int main()
{
    string name, surname, exit, userInput;
    int i = 0;

    cout << "Hello, I'm your jeans assistant and I'm here to help you! "
    << "If you want to leave, just type 'bye'." << endl;

    while(true)
    {
        cout << "Enter your name: ";
        cin >> name;

        if((name[0] >= 'A') && (name[0] <= 'Z'))
        {
            i = 0;
            break;
        }
        else if(name == "bye" || name == "Bye" || name == "BYE")
        {
            cout << "It's sad that you are leaving so soon, but i hope to see you soon!";
            return 0;
        }
        else
        {
            i++;

            if(i < 3)
            {
                cout << "Name begins with a capital letter, please try again :)" << endl;
            }
            else
            {
                ChangeTone();
            }
        }
    }

    cout << "Great, now enter your surname: ";
    cin >> surname;

    while(true)
    {
        if((surname[0] >= 'A') && (surname[0] <= 'Z'))
        {
            i = 0;
            break;
        }
        else if(surname == "bye" || surname == "Bye" || surname == "BYE"  )
        {
            cout << "It's sad that you are leaving so soon, but i hope to see you soon!";
            return 0;
        }
        else
        {
            i++;

            if(i < 3)
            {
                 cout << "Surnames are written with a capital letter, please try again :)" << endl;
            }
            else
            {
                ChangeTone();
            }
        }

        cout << "Enter your surname: ";
        cin >> surname;
    }

    cout << "Hello, " << name << " " << surname << ", nice to meet you!" << endl;

    i = 0;

    while(exit != "Bye" && exit != "bye" && exit != "BYE")
    {
        Jeans *jeans = new Jeans(" ", " ", " ");

        cout << "So, what color jeans are you looking for?" << endl << "1.Classic blue\n2.Dark blue\n3.Black" << endl << "Write the number of your choice: ";

        while(true)
        {
            cin >> userInput;

            if(userInput == "1")
            {
                i = 0;
                jeans->setColor("Classic blue");
                break;
            }
            else if (userInput == "2")
            {
                i = 0;
                jeans->setColor("Dark blue");
                break;
            }
            else if (userInput == "3")
            {
                i = 0;
                jeans->setColor("Black");
                break;
            }
            else if(userInput == "Bye" || userInput == "bye" || userInput == "BYE")
            {
                cout << "I hope i have been helpful, see you soon!";
                return 0;
            }
            else
            {
                i++;
                Checker(i);
            }
        }

        cout << "Wow, " << jeans->getColor() << " is a great color and we have a few of them! What type would you prefer? " << endl << "1.Loose fit\n2.Slim fit\n3.Skinny fit" << endl << "Write the number of your choice: ";

        while(true)
        {
            cin >> userInput;

            if(userInput == "1")
            {
                i = 0;
                jeans->setFit("Loose fit");
                break;
            }
            else if(userInput == "2")
            {
                i = 0;
                jeans->setFit("Slim fit");
                break;
            }
            else if(userInput == "3")
            {
                i = 0;
                jeans->setFit("Skinny fit");
                break;
            }
            else if(userInput == "Bye" || userInput == "bye" || userInput == "BYE")
            {
                cout << "I hope i have been helpful, see you soon!";
                return 0;
            }
            else
            {
                i++;
                Checker(i);
            }
        }

        cout << jeans->getFit() <<", sounds amazing! What size are you looking for?" << endl << "1.S\n2.M\n3.L" << endl << "Write the number of your choice: ";

        while(true)
        {
            cin >> userInput;

            if(userInput == "1")
            {
                i = 0;
                jeans->setSizing("S");
                break;
            }
            else if(userInput == "2")
            {
                i = 0;
                jeans->setSizing("M");
                break;
            }
            else if(userInput == "3")
            {
                i = 0;
                jeans->setSizing("L");
                break;
            }
            else if(userInput == "Bye" || userInput == "bye" || userInput == "BYE")
            {
                cout << "I hope i have been helpful, see you soon!";
                return 0;
            }
            else
            {
                i++;
                Checker(i);
            }
        }

        cout << "Awesome! Jeans, " << jeans->getColor() << ", " << jeans->getFit() << ", " << jeans->getSizing() << ". That will be 14.99$ and it's in your basket" << endl << "If you want to search again, type YES. If you want to leave, type BYE: ";

        delete jeans;

        while(true)
        {
            cin >> exit;

            if(exit == "Yes" || exit == "yes" || exit == "YES")
            {
                break;
            }
            else if (exit == "Bye" || exit == "bye" || exit == "BYE")
            {
                cout << "I hope i have been helpful, see you soon!";
                break;
            }
            else
            {
                cout << "Sorry, i can't understand. Please type YES or BYE: ";
            }
        }
    }
}

void ChangeTone()
{
    int i;
    string answers[8] = {"Again, really?", "Can you read?", "I am tired of you...", "Write it correctly, PLEASE!", "My grandma could do better!", "Your IQ level is probably negative.",
    "I think you just need a high five... in the face... with a chair.", "Everyone is allowed to act stupid once, but you... you are abusing that privilege."};

    i = rand() % 8;

    cout << answers[i] << endl;
}

void Checker(int i)
{
    if(i < 3)
    {
        cout << "Sorry, i can't understand it. Please write the number of your choice: ";
    }
    else
    {
        ChangeTone();
        cout << "Please write the number of your choice: ";
    }
}
