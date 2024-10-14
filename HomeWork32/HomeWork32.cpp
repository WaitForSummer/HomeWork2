/*
МГТУ им. Н. Э. Баумана	Домашняя работа номер 2
Терехов Вячеслав		Группа ИУ8-11
Вариант 27				Размер обрабатоваемого блока: 4 байта
Цикл-ий сдвиг вправо	Вел-на сдвига в битах: 5 бит
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream> // Для работы с файлами
#include <typeinfo>

using namespace std;

bool check(string key) {

	if (key.empty()) {
		return false;
	}
	if (static_cast<int>(key.size()) > 9) {
		return false;
	}
	return true;
}

void Encryption(string file_name) {
	uint16_t gamma = rand();

	string input_string;
	string key;

	cout << "Enter psswd: "; cin >> key;
	srand(static_cast<unsigned int>(stoi(key))); // Сделали зерно по паролю
	if (!check(key)) {
		cerr << "Error: Invalid key\n";
	}

	cout << "Enter a message, you would like to encrypt:\n"; cin >> input_string;
	cout << input_string << "\t" << type(input_string).name();

	vector<char> symbols(input_string.size()); // Создание массива, состоящего из векторов, для создания посимвольной копии строки, поданной на вход программе для щифрования
	for (int i = 0; i < input_string.size(); i++) {
		symbols[i] = input_string[i];
	}

	//if (input_string.size() % 2 == 0) {

	//}
	//else {

	//}

	cout << gamma << " " << typeid(gamma).name();
}

void Decryption(string file_name) {

}

void LShift() {}

void RShift() {}

int main(int argc, const char* argv[]) {

	if (argc != 3) {
		cerr << "Error: Use three parameters\n";
		cerr << "Program is of the form: " << argv[0] << " <inp1> <inp2>\n";
		return 5;
	}

	const string mode(argv[1]); // Режим работы
	const string file_name(argv[2]); // Имя файла

	//unsigned int key; Ключ-пароль для шифровки или расшифровки

	if (mode != "encryption" && mode != "decryption") { // Проверка на некорректный ввод
		cout << "Error: Неправильное название аргумента.";
		return 1;
	}

	if (mode == "encryption") { // Шифрование
		cout << "enc" << endl;
		Encryption(file_name);
	}
	else if (mode == "decryption") {
		cout << "dec";
	}
	return 0;
}
