#include <iostream>
using namespace std;

int main() {
    char letter;
    int number, quantity;
    float money, Total = 0, change;
    
    // Define prices
    double prices[11][5] = {
        {0.50, 0.50, 1.25, 1.25}, // A
        {0.50, 1.00, 1.25, 1.00}, // B
        {1.00, 1.00, 0.50, 1.25}, // C
        {0.50, 1.50, 0.75, 0.75}, // D
        {0.75, 1.50, 0.50, 0.75}, // E
        {1.00, 1.25, 0.50, 0.75}, // F
        {3.00, 1.25, 0.75, 1.00}, // G
        {1.00, 1,00, 1.50, 0.50}, // H
        {1.50, 3.00, 1.00, 1.00}, // I
        {1.00, 1.00, 1.00, 0.50}, // J
        {1.25, 1.25, 0.75, 0.75}  // K
    };

    // Define stock levels
    int stock[11][4] = {
        {5, 5, 5, 5}, // A
        {5, 5, 5, 5}, // B
        {5, 5, 5, 5}, // C
        {5, 5, 5, 5}, // D
        {5, 5, 5, 5}, // E
        {5, 5, 5, 5}, // F
        {5, 5, 5, 5}, // G
        {5, 5, 5, 5}, // H
        {5, 5, 5, 5}, // I
        {5, 5, 5, 5}, // J
        {5, 5, 5, 5}  // K
    };

    // Display Menu
    cout << "---------------------------------------------------------------------------------" << endl;
    cout << "                          Welcome to the Vending Machine                         " << endl;
    cout << "=================================================================================" << endl;
    cout << "                                    Soft Drink                                   " << endl;
    cout << "---------------------------------------------------------------------------------" << endl;
    cout << "       Angkor-Puro          ARUNA                Bacchus          Bacchus(Zero)  " << endl;
    cout << "       A1 |$0.50            A2 |$0.50            A3 |$1.25        A4 |$1.25      " << endl;
    cout << "                                                                                 " << endl;
    cout << "       Cambodia-Water       Carabao              Champion         CoCa-Cola      " << endl;
    cout << "       B1 |$0.50            B2 |$1.00            B3 |$1.25        B4 |$1.00      " << endl;
    cout << "                                                                                 " << endl;
    cout << "       CoCa-Cola(Zero)      CoCa-Cola(light)     Colee            Dr.Pepper      " << endl;
    cout << "       C1 |$1.00            C2 |$1.00            C3 |$0.50        C4 |$1.25      " << endl;
    cout << "                                                                                 " << endl;
    cout << "       Elan                 Evian                Fanta(Orange)    Fanta(Tropical)" << endl;
    cout << "       D1 |$0.50            D2 |$1.50            D3 |$0.75        D4 |$0.75      " << endl;
    cout << "                                                                                 " << endl;
    cout << "       Fanta(Grape)         Fuji                 HI-TECH          Ize-Cola       " << endl;
    cout << "       E1 |$0.75            E2 |$1.50            E3 |$0.50        E4 |$0.75      " << endl;
    cout << "                                                                                 " << endl;
    cout << "       Idol                 Kulen                Lyyon            Mirinda        " << endl;
    cout << "       F1 |$1.00            F2 |$1.25            F3 |$0.50        F4 |$0.75      " << endl;
    cout << "                                                                                 " << endl;
    cout << "       Monster              Mountain-dew         M-150            Pepsi          " << endl;
    cout << "       G1 |$3.00            G2 |$1.25            G3 |$0.75        G4 |$1.00      " << endl;
    cout << "                                                                                 " << endl;
    cout << "       Pepsi(Zero)          Pepsi(light)         Pocari-Sweat     PROVIDA        " << endl;
    cout << "       H1 |$1.00            H2 |$1.00            H3 |$1.50        H4 |$0.50      " << endl;
    cout << "                                                                                 " << endl;
    cout << "       Root-Beer            Red-Bull             Samurai(Red)     Samurai(Yellow)" << endl;
    cout << "       I1 |$1.50            I2 |$3.00            I3 |$1.00        I4 |$1.00      " << endl;
    cout << "                                                                                 " << endl;
    cout << "       Sprite               Sting(Red)           Sting(Yellow)    Vital          " << endl;
    cout << "       J1 |$1.00            J2 |$1.00            J3 |$1.00        J4 |$0.50      " << endl;
    cout << "                                                                                 " << endl;
    cout << "       Vigor                Vigor(Red)           WURKZ            7up            " << endl;
    cout << "       K1 |$1.25            K2 |$1.25            K3 |$0.75        K4 |$0.75      " << endl;
    cout << "---------------------------------------------------------------------------------" << endl;

    while (true) {
        // Get user selection
        cout << "Select your soft drink letter (A-K, or X to exit): ";
        cin >> letter;

        if (letter == 'X' || letter =='x') {
            cout << "Exiting vending machine!! Thank You.";
            break;
        }

     switch(letter){
            case 'A':
            cout << "Select yout soft drink number: ";
            cin >> number;
            if (number < 1 || number > 4 ) {
                cout << "Items is not on the list!!! Try agin." << endl;
                continue;
            }
            else {
                cout << "Enter quantity: ";
                cin >> quantity;
            }
            break;
            
            case 'B':
            cout << "Select yout soft drink number: ";
            cin >> number;
            if (number < 1 || number > 4 ) {
                cout << "Items is not on the list!!! Try agin." << endl;
                continue;
            }
            else {
                cout << "Enter quantity: ";
                cin >> quantity;
            }
            break;

            case 'C':
            cout << "Select yout soft drink number: ";
            cin >> number;
            if (number < 1 || number > 4 ) {
                cout << "Items is not on the list!!! Try agin." << endl;
                continue;
            }
            else {
                cout << "Enter quantity: ";
                cin >> quantity;
            }
            break;

            case 'D':
            cout << "Select yout soft drink number: ";
            cin >> number;
            if (number < 1 || number > 4 ) {
                cout << "Items is not on the list!!! Try agin." << endl;
                continue;
            }
            else {
                cout << "Enter quantity: ";
                cin >> quantity;
            }
            break;

            case 'E':
            cout << "Select yout soft drink number: ";
            cin >> number;
            if (number < 1 || number > 4 ) {
                cout << "Items is not on the list!!! Try agin." << endl;
                continue;
            }
            else {
                cout << "Enter quantity: ";
                cin >> quantity;
            }
            break;

            case 'F':
            cout << "Select yout soft drink number: ";
            cin >> number;
            if (number < 1 || number > 4 ) {
                cout << "Items is not on the list!!! Try agin." << endl;
                continue;
            }
            else {
                cout << "Enter quantity: ";
                cin >> quantity;
            }
            break;

            case 'G':
            cout << "Select yout soft drink number: ";
            cin >> number;
            if (number < 1 || number > 4 ) {
                cout << "Items is not on the list!!! Try agin." << endl;
                continue;
            }
            else {
                cout << "Enter quantity: ";
                cin >> quantity;
            }
            break;

            case 'H':
            cout << "Select yout soft drink number: ";
            cin >> number;
            if (number < 1 || number > 4 ) {
                cout << "Items is not on the list!!! Try agin." << endl;
                continue;
            }
            else {
                cout << "Enter quantity: ";
                cin >> quantity;
            }
            break;

            case 'I':
            cout << "Select yout soft drink number: ";
            cin >> number;
            if (number < 1 || number > 4 ) {
                cout << "Items is not on the list!!! Try agin." << endl;
                continue;
            }
            else {
                cout << "Enter quantity: ";
                cin >> quantity;
            }
            break;

            case 'J':
            cout << "Select yout soft drink number: ";
            cin >> number;
            if (number < 1 || number > 4 ) {
                cout << "Items is not on the list!!! Try agin." << endl;
                continue;
            }
            else {
                cout << "Enter quantity: ";
                cin >> quantity;
            }
            break;

            case 'K':
            cout << "Select yout soft drink number: ";
            cin >> number;
            if (number < 1 || number > 4 ) {
                cout << "Items is not on the list!!! Try agin." << endl;
                continue;
            }
            else {
                cout << "Enter quantity: ";
                cin >> quantity;
            }
            break;
            
            default:
            cout << "Items is not on the list!!! Try agin." << endl;
                 continue;
            }
            
        
        int row = letter - 'A'; // Convert letter to index (A=0, B=1, etc.)
        int col = number - 1;   // Convert number to index (1=0, 2=1, etc.)

        if (stock[row][col] == 0) {
            cout << "Sorry, that drink is out of stock!\n";
            continue;
        }

        if (quantity > stock[row][col]) {
            cout << "Not enough stock available! Only " << stock[row][col] << " left.\n";
            continue;
        }

        Total = quantity * prices[row][col];
        cout << "Total amount to pay: $" <<  Total << endl;

        // Payment process
        do {
            cout << "Insert your money: $";
            cin >> money;

            if (money < Total) {
                cout << "Not enough money! Insert more or cancel.\n";
            }
        } while (money < Total);

        // Dispense item and give change
        stock[row][col] -= quantity;
        change = money - Total;

        cout << "Dispensing your drinks...\n";
        if (change > 0) {
            cout << "Your change: $" << change << endl;
        }
        cout << "Enjoy your drink!\n";

        // Display remaining stock
        cout << "Remaining stock: " << stock[row][col] << " left.\n";
        cout << "---------------------------------------------------------------------------------" << endl;
    }

    return 0;
}