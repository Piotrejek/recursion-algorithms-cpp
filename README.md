# Algorytmy Rekurencyjne w C++

Projekt zawiera implementacje podstawowych algorytmów rekurencyjnych w języku C++ oraz kompleksowy zestaw testów jednostkowych weryfikujących ich poprawność. Został zrealizowany w ramach przedmiotu Algorytmy i Struktury Danych.

Do testowania logiki biznesowej wykorzystano framework doctest. Projekt demonstruje rowniez zastosowanie podejscia TDD (Test-Driven Development) przy tworzeniu nowych funkcjonalnosci.

## Zaimplementowane algorytmy

* **silnia(int n)** - Obliczanie silni z liczby całkowitej z obsługą wyjątków dla wartości ujemnych.

* **nwd(int a, int b)** - Wyznaczanie Największego Wspólnego Dzielnika przy użyciu algorytmu Euklidesa.

* **potega(long long x, int n)** - Algorytm szybkiego potęgowania.

* **palindrom(const std::string& s)** - Rekurencyjne sprawdzanie, czy podany ciąg znaków jest palindromem (bez wrażliwości na wielkość liter).

* **szukajBinarnie(const int* t, int n, int x)** - Wyszukiwanie binarne w posortowanej tablicy.

* **dwojkowo(unsigned int n)** - Rekurencyjna konwersja liczby dziesiętnej na system binarny (zwraca ciąg znaków).

* **sumaCyfr(unsigned int n)** - Rekurencyjne sumowanie cyfr liczby całkowitej (zaimplementowane metodą TDD).

## Struktura plików

W repozytorium znajdują się następujące pliki:

```
.
├── rekurencja.h       # Deklaracje funkcji rekurencyjnych
├── rekurencja.cpp     # Implementacje logiki funkcji rekurencyjnych
├── testy.cpp          # Zestaw testów jednostkowych uruchamiający program
└── doctest.h          # Biblioteka (single-header) frameworka testowego doctest
```

## Pobieranie projektu

Aby pobrać projekt na swój komputer lokalny, sklonuj repozytorium za pomocą systemu Git, wpisując w terminalu następujące polecenie:

```
git clone https://github.com/Piotrejek/recursion-algorithms-cpp.git
```

Następnie przejdź do utworzonego folderu projektu:

```
cd recursion-algorithms-cpp
```

Alternatywnie, możesz pobrać kod jako archiwum, klikając na stronie repozytorium przycisk "Code", a następnie wybierając opcję "Download ZIP". Po pobraniu rozpakuj plik w wybranym miejscu na dysku.

## Kompilacja i uruchomienie

Aby skompilować i uruchomić program, potrzebujesz zainstalowanego kompilatora języka C++ (np. GCC/MinGW). 

Upewnij się również, że w folderze z projektem znajduje się plik `doctest.h` [https://raw.githubusercontent.com/doctest/doctest/master/doctest/doctest.h](https://raw.githubusercontent.com/doctest/doctest/master/doctest/doctest.h).

### System Windows

1. Otwórz terminal (np. PowerShell lub Wiersz polecenia) w folderze z plikami projektu.

2. Wpisz poniższe polecenie, aby skompilować kod źródłowy:

```
g++ testy.cpp rekurencja.cpp -o testy.exe
```

3. Po udanej kompilacji uruchom wygenerowany plik wykonywalny:

```
.\testy.exe
```

### System Linux / macOS

1. Otwórz terminal w katalogu z projektem.

2. Użyj poniższego polecenia do kompilacji:

```
g++ testy.cpp rekurencja.cpp -o testy
```

3. Uruchom program komendą:

```
./testy
```

Po uruchomieniu programu w konsoli powinien wyświetlić się raport z wykonania testów jednostkowych wygenerowany przez framework doctest. W przypadku braku błędów zobaczysz podsumowanie potwierdzające, że wszystkie testy zakończyły się sukcesem.