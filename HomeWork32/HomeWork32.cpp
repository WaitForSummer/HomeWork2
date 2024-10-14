#include <iostream>
#include <vector>
#include <string>
#include <fstream> // Для работы с файлами
#include <typeinfo>

using namespace std;

void Encryption(string file_name) {
	uint16_t gamma;
	string input_string;
	string key;

	cout << "Enter psswd: "; cin >> key;
	srand(static_cast<unsigned int>(stoi(key))); // Сделали зерно по паролю

	if (!check(key)) {
		cerr << "Error: Invalid key\n";
	}

	// cout << stoi(key) << " " << typeid(static_cast<unsigned int>(stoi(key))).name();
}

void Decryption(string file_name) {

}

void LShift() {}

void RShift() {}

bool check(string key) {

	if (key.empty()) {
		return false;
	}
	if (static_cast<int>(key.size()) > 9) {
		return false;
	}
}

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
