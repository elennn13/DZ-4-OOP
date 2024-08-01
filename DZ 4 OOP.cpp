#include <iostream>

// ЗАДАЧА 1
class Overcoat {
private:
    std::string type; // тип одежды (пальто, плащ и т.д.)
    double price;     // цена одежды

public:
    // Конструкторы
    Overcoat() : type(""), price(0.0) {} // По умолчанию 
    Overcoat(std::string t, double p) : type(t), price(p) {} // Для инициализации типа и цены верхней одежды

    // Методы доступа (геттеры и сеттеры)
    std::string getType() const { return type; } // Для получения типа и цены
    double getPrice() const { return price; } // Для получения типа и цены
    void setType(std::string t) { type = t; } // Для установки новых значений типа и цены
    void setPrice(double p) { price = p; } // Для установки новых значений типа и цены

    // Перегрузка операторов
    bool operator==(const Overcoat& other) const { // Сравнивает объекты по типу одежды
        return (type == other.type);
    }

    Overcoat& operator=(const Overcoat& other) { // Присваивает значения одного объекта другому
        if (this != &other) {
            type = other.type;
            price = other.price;
        }
        return *this;
    }

    bool operator>(const Overcoat& other) const { // Сравнение по цене
        return (price > other.price);
    }

    bool operator<(const Overcoat& other) const { // Сравнение по цене
        return (price < other.price);
    }
};

// ЗАДАЧА 2

class Flat {
private:
    double area;  // площадь квартиры
    double price; // цена квартиры

public:
    // Конструкторы
    Flat() : area(0.0), price(0.0) {} // по умолчанию
    Flat(double a, double p) : area(a), price(p) {} // для инициализации новых значений площадии цены

    // Методы доступа
    double getArea() const { return area; } // для получения площади и цены
    double getPrice() const { return price; } // для получения площади и цены
    void setArea(double a) { area = a; } // для установки новых значений площади и цены.
    void setPrice(double p) { price = p; } // для установки новых значений площади и цены.

    // Перегрузка операторов
    bool operator==(const Flat& other) const { // Сравнивает объекты по площади квартир.
        return (area == other.area);
    }

    Flat& operator=(const Flat& other) { // Присваивает значения одного объекта другому.
        if (this != &other) {
            area = other.area;
            price = other.price;
        }
        return *this;
    }

    bool operator>(const Flat& other) const { // Сравнивают объекты по цене квартиры.
        return (price > other.price);
    }

    bool operator<(const Flat& other) const { // Сравнивают объекты по цене квартиры.
        return (price < other.price);
    }
};

int main() {
	setlocale(LC_ALL, "ru");





	return 0;
}

//Задача 1
//Создайте класс Overcoat(верхняя одежда) и реализуйте
//следующие перегруженные операторы :
//1. Проверка на равенство типов одежды(операция == );
//2. Операция присваивания содержимого одного объекта в
//другой(операция = );
//3. Сравнение по цене двух экземпляров одежды одного
//класса(операции > и < ).
//  Задача 2
//Создайте класс Flat(квартира) и реализуйте следующие
// перегруженные операторы :
//1. Проверка на равенство площадей квартир(операция == );
//2. Операция присваивания содержимого одного объекта в
//другой(операция = );
//3. Сравнение двух квартир по цене(операция > ).