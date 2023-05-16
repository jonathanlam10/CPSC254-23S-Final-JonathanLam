#include <iostream>
#include <string>
#include <vector>

using namespace std;

// User class
class User {
public:
    User(username, password);

    string getUsername();
    string getPassword() ;
    double getBalance() ;
    void deposit(double amount);
    bool withdraw(double amount);

private:
    string username;
    string password;
    double balance;
};

//Get username
string User::getUsername()  {
    return username;
}

//get password
string User::getPassword()  {
    return password;
}

//get balance
double User::getBalance()  {
    return balance;
}

// Deposit function
void User::deposit(double amount) {}

// Withdraw function
bool User::withdraw(double amount) {}


// login page
void displayLoginPage() {}

// check for correct login
bool authenticateLogin(username, password) {}

// Main function
int main() {
    displayLoginPage();

    // Prompt user to enter username and password
    string username, password;
    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;

    // Authenticate login
    if (authenticateLogin(username, password)) {
        cout << "Login successful!\n";

    } else {
        cout << "Invalid username or password. Login rejected.\n";
    }

    return 0;
}
