// BudgetTracker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "Income.cpp"
#include "Expence.cpp"


int main()
{
    // це - тести функцій і виводу на консоль.
    // я відслідковувала проблему того що юзер інпут збивається
    // вирішила її, але тепер коли викликаються функції шо потребують гетлайн
    // - тобто ім'я і категорія -треба нажати ентер два рази і я не розумію чому.
    Income(first);
    first.display_item_info();
    Expence(second);
    second.display_item_info();

    Income(first1);
    first1.display_item_info();
    Expence(second1);
    second1.display_item_info();

    Income(first2);
    first2.display_item_info();
    Expence(second2);
    second2.display_item_info();

    // а тут відображається не повний перелік а лише характеристики одного
    // об'єкта який викликає цю функцію. треба переробити.
    first.display_incomes();
    second.display_expences();

    return 0;
}
