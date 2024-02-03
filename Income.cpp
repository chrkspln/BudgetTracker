// here will be Incomes class, it's member atributes and functions.
// also i wanna include a function that allows user to
// enter their own category of income. after that new string
// will be added to the set of categories.
// which will be then displayed as choices to mark the operation. choice
// will fill "type" atribute of a class.

#include "Libraries.h"

// const std::regex date_match(".*");


class Income {
private:
    std::string name{};
    double amount{};
    std::string date{};
    std::string category{};
    std::set<std::string> categories{};
public:
    std::vector<Income> incomes{};

    std::string get_name() {
        return name;
    }

    std::string set_name(std::string u_name) {
        name = u_name;
        return name;
    }

    double get_amount() const {
        return amount;
    }

    double set_amount(double input) {
        amount = input;
        return amount;
    }

    std::string get_date() const {
        return date;
    }

    std::string set_date(std::string input) {
        date = input;
        return date;
    }

    std::string get_category() const {
        return category;
    }

    std::string set_category(std::string u_ctg) {
        category = u_ctg;
        return category;
    }

    std::set<std::string> get_categories() const {
        return categories;
    }

    std::set<std::string> add_ctg(std::string input) {
        categories.insert(input);
        return categories;
    }

    std::set<std::string> delete_ctg(std::string input) {
        categories.erase(input);
        return categories;
    }

    Income() {
        name_setting();
        amount_setting();
        date_validation();
        ctg_setting();
        incomes.push_back(*this);
    }

    void name_setting() {
        std::cout << "name your income: ";
        std::string u_name{};
        std::getline(std::cin, u_name);
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        set_name(u_name);
        std::cout << "name added successfully.\n";
    }

    void amount_setting() {
        std::cout << "enter the amount of income (uah): ";
        double u_amount{};
        std::cin >> u_amount;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        set_amount(u_amount);
        std::cout << "amount is set successfully.\n";
    }

    void date_validation() {
        std::cout << "enter a date of the income in dd/mm/yy format: ";
        std::string input_date{};
        std::cin >> input_date;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        set_date(input_date);
        std::cout << "date has been added successfully.\n";
        /*
        if (std::regex_match(input_date, date_match)) {
          date = input_date;
        }
        else {
          std::cout << "invalid input. ";
          std::cin.clear();
          date_validation();
        }
        */
    }

    void ctg_setting() {
        if (get_categories().size() == 0) {
            std::cout << "no categories avaliable. add something.\n";
            add_category();
        }
        else {
            for (const auto& item : get_categories()) {
                std::cout << std::left << std::setw(12) << std::setfill(' ') << item;
            }
            std::cout << "select a category of your income: ";
            std::string u_ctg{};
            std::getline(std::cin, u_ctg);
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            if (get_categories().find(u_ctg) != get_categories().end()) {
                set_category(u_ctg);
                std::cout << "category is set successfully.";
            }
        }
    }

    void add_category() {
        std::cout << "enter a name of the category: ";
        std::string u_ctg{};
        std::getline(std::cin, u_ctg);
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        set_category(u_ctg);
        get_categories().insert(u_ctg);
        std::cout << "category is added successfully.\n";
    }

    void display_item_info() {
        std::cout << "Name: " << get_name() << '\n'
			<< "Amount: " << get_amount() << '\n'
			<< "Date: " << get_date() << '\n'
			<< "Category: " << get_category() << '\n';
    }

    void display_incomes() {
        for (Income& item : incomes) {
            std::cout << std::left << std::setw(30)
                << item.get_name() << std::cout.fill('-')
                << item.get_category() << std::cout.fill('-')
                << item.get_date() << '\n';
        }
    }
};