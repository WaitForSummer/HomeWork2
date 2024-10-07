#include <iostream>
#include <vector>
#include <string>
#include <fstream> // Для работы с файлами

using namespace std;

void check(unsigned int key)

int main(int argc, const char* argv[]) {

	if (argc != 3) {
		cerr << "Error: Use three parameters\n";
		cerr << "Program is of the form: " << argv[0] << " <inp1> <inp2>\n";
		return 5;
	}
	const string mode(argv[1]); // Режим работы
	const string file_name(argv[2]); // Имя файла

	unsigned int key; // Ключ-пароль для шифровки или расшифровки

	if (mode != "encryption" && mode != "decryption") { // Проверка на некорректный ввод
		cout << "Mode name error";
		return 1;
	}

	if (mode == "encryption") { // Шифрование
		std::ofstream fout(file_name, ios_base::binary); // Создали объект класса ofstream, связали его с file_name и представили его в двоичном виде
		if (!fout.is_open()) {
			cerr << "Error: Файл не найден";
			return 6;
		}
		string input_string;
		cout << "Введите строку, которую хотите зашифровать: "; cin >> input_string;
		cout << "Введите пароль для шифрования: "; cin >> key;
		cout << "Введите пароль (целое число от 0 до 10^9 - 1): "; cin >> key;
		srand(key); // Создаем зерно для создания случайных чисел
		vector<char> symbols(input_string.size()); // Создаем массив длины введенной строки
		for (int i = 0; i != input_string.size(); i++) {
			symbols[i] = input_string[i];
		}
	}
	else if (mode == "decryption") {
		cout << "dec";
		return 2;
	}
	return 0;
}
