/* main.cpp */
#include <iostream>
#include <vector>


int main() {

	int value = 7;	// обычная переменная
	int &ref = value; // ссылка на переменную value

	std::clog << value;

	std::clog << &ref;
	
	

	/*
	

	// Создание вектора из строк
	std::vector<std::string> students;
	
	std::string buffer = "";

	std::cout << "Вводите фамилии студентов. "
			  << "По окончание ввода введите пустую строку" << std::endl;
    
	do {
        std::getline(std::cin, buffer);
        if (buffer.size() > 0) {
            // Добавление элемента в конец вектора
            students.push_back(buffer);
        }
    } while (buffer != "");

	// Сохраняем количество элементов вектора
	unsigned int vector_size = students.size();

	// Вывод заполненного вектора на экран
	std::cout << "Ваш вектор." << std::endl;
	for (int i = 0; i < vector_size; i++)
	{
		std::cout << students[i] << std::endl;
	} 
	
	
	*/

	return 0;



}
