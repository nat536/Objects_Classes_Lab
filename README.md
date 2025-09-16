# Objects_Classes_Lab
A C++ class for representing a Bank Account.
## Data Dictionary
| Attribute            | Data Type  | Description                |
|----------------------|------------|----------------------------|
| 'accountNumber'      | 'string'   | The account number.        |
| 'accountHolderName'  | 'string'   | The account holder's name. |
| 'balance'            | 'double'   | The account balance.       |
## Methods List
| Method Signature                                                  | Return Type       | Description                     |
|-------------------------------------------------------------------|-------------------|---------------------------------|
| 'BankAccount()'                                                   | '(Contstructor)'  | Default constructor.            |
| 'BankAccount(string number, string name, double accountBalance)'  | '(Constructor)'   | Parameterized constructor.      |
| 'setAccountHolderName(string name)'                               | 'void'            | Sets the account holder's name. |
| 'getAccountNumber()'                                              | 'string'          | Gets the account number.        |
| 'getAccountHolderName()'                                          | 'string'          | Gets the account holder's name. |
| 'getBalance()'                                                    | 'double'          | Gets the account balance.       |
| 'deposit(double amount)'                                          | 'void'            | Adds to the balance.            |
| 'withdraw(double amount)'                                         | 'void'            | Subtracts from the balance.     |
