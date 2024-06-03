# Budget Tracker
This project is an income and expense tracker that allows users to record, categorize, and display their incomes and expenses.

## Features
- Record and display income details.
- Record and display expense details.
- Add custom income categories.
- View available categories when entering a new income.
- Classes
- Income

The Income class is used to store and manage income details. It includes the following attributes and methods:

## Attributes
- std::string name: Name of the income.
- double amount: Amount of the income.
- std::string date: Date of the income.
- std::string category: Category of the income.
- std::set<std::string> categories: Set of available income categories.
- std::vector<Income> incomes: Vector to store multiple income entries.


## Methods
- std::string get_name(): Returns the name of the income.
- std::string set_name(std::string u_name): Sets the name of the income.
- double get_amount() const: Returns the amount of the income.
- double set_amount(double input): Sets the amount of the income.
- std::string get_date() const: Returns the date of the income.
- std::string set_date(std::string input): Sets the date of the income.
- std::string get_category() const: Returns the category of the income.
- std::string set_category(std::string u_ctg): Sets the category of the income.
- std::set<std::string> get_categories() const: Returns the set of available categories.
- std::set<std::string> add_ctg(std::string input): Adds a new category to the set of categories.
- std::set<std::string> delete_ctg(std::string input): Removes a category from the set of categories.
- Income(): Constructor to initialize an income entry.
- void name_setting(): Prompts user to enter the name of the income.
- void amount_setting(): Prompts user to enter the amount of the income.
- void date_validation(): Prompts user to enter the date of the income.
- void ctg_setting(): Prompts user to select or add a category for the income.
- void add_category(): Allows user to add a new category.
- void display_item_info(): Displays the details of the income.
- void display_incomes(): Displays all recorded incomes.

## Usage
1. Create an instance of the Income class.
1.1. The constructor will prompt the user to enter the name, amount, date, and category for the income. The user can add new categories if none are available.
2. Use the display_item_info method to display the details of the income.
3. Use the display_incomes method to display all recorded incomes.
```
Income first;
first.display_item_info();
Expence second;
second.display_item_info();

Income first1;
first1.display_item_info();
Expence second1;
second1.display_item_info();

Income first2;
first2.display_item_info();
Expence second2;
second2.display_item_info();
```
### Example:
```
#include "Libraries.h"

int main() {
    Income income1;
    income1.display_item_info();
    
    Income income2;
    income2.display_item_info();
    
    income1.display_incomes();
    
    return 0;
}
```
## Dependencies
#include "iostream"<br>
#include "string"<br>
#include "vector"<br>
#include "set"<br>
#include "limits"<br>
#include "iomanip"

## Compilation
To compile the program, use a C++ compiler such as g++:
```
g++ -o income_tracker main.cpp
```
Replace main.cpp with the name of your source file.

```
#TODO: це повинна бути система де в одному класі - доходи, в іншому - витрати, далі вони якось сортуються по характеристиках (name, category, date) через вектори, думаю. або мапи. і вивід на консоль зробити гарним треба але в мене текст кудись просто летить замість того щоб бути рівно.
```
