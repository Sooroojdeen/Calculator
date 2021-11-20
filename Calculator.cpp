#include <iostream>
#include <math.h>

/*Definitions*/
#define add(a,b) (a + b)
#define sub(a,b) (a - b)
#define mul(a,b) (a * b)
#define div(a,b) (a / b)

#define circ(r) ((pi*2)*r)


int main()
{
    /*Variables Definitions*/
    int choice,type;
    float a, b, r;
    double pi = 2 * acos(0.0);
    


    /*Select the type of operation*/
    std::cout << "Select the type of operation \n1. Basic Arithmatic\n2. Circumfrance of a circle" << std::endl;
    std::cin >> type;

    if (type == 1) { /*This is for Basic Arithmatic*/
    /*select the two numbers that you want to operate on*/
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    std::cout << " " << std::endl;

    /*Welcome Message*/
    std::cout << "Welcome to the calculator \nWhich operation would you like to perform\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division" << std::endl;
    std::cin >> choice;

    /*Switch statement that chooses the operation*/
    switch (choice)
    {
    case 1: std::cout << add(a, b) << std::endl;
        break;
    case 2: std::cout << sub(a, b) << std::endl;
        break;
    case 3: std::cout << mul(a, b) << std::endl;
        break;
    case 4: std::cout << div(a, b) << std::endl;
        break;
    }

} else if (type == 2){ /*This is for the circumfrance of a circle*/
    std::cout << "Enter the radius" << std::endl;
    std::cin >> r;
    std::cout << "The circumfrance of the circle is: "<< circ(r) << std::endl;
}


  system("pause");
    return 0;
};

/*This is a test change 2*/
