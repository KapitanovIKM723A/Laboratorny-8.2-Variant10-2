#include <iostream>
#include <locale>
using namespace std;
int main() {
    setlocale(LC_CTYPE, "ukr");
    const int n = 20;
    int arr[n];
    cout << "Введiть " << n << " цiлих чисел:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int maxVal = arr[0]; // Початкове максимальне значення - перший елемент масиву
    // Проходимо по кожному елементу масиву
    for (int i = 0; i < n; ++i) {
        if (arr[i] > maxVal) { // Якщо поточний елемент більший за попереднє максимальне значення,
            maxVal = arr[i];   // оновлюємо максимальне значення
        }
        arr[i] = maxVal; // Замінюємо поточний елемент на максимальне значення
    }
    // Виводимо оновлений масив
    cout << "Оновлений масив:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}