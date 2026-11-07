#include "rekurencja.h"
#include <stdexcept>
#include <cmath>
#include <cctype>

unsigned long long silnia(int n) {
    if (n < 0) throw std::invalid_argument("Wartość n nie może być mniejsza od 0.");
    if (n <= 1) return 1;
    return n * silnia(n - 1);
}

int nwd(int a, int b) {
    a = std::abs(a);
    b = std::abs(b);
    if (b == 0) return a;
    return nwd(b, a % b);
}

long long potega(long long x, int n) {
    if (n == 0) return 1;
    long long p = potega(x, n / 2);
    if (n % 2 == 1) return p * p * x;
    return p * p;
}

static bool palindrom(const std::string& s, int i, int j) {
    if (i >= j) return true;
    if (std::tolower(s[i]) != std::tolower(s[j])) return false;
    return palindrom(s, i + 1, j - 1);
}

bool palindrom(const std::string& s) {
    if (s.empty()) return true;
    return palindrom(s, 0, static_cast<int>(s.size()) - 1);
}

static int szukajBinarnie(const int* t, int lewy, int prawy, int x) {
    if (lewy > prawy || t == nullptr) return -1;
    int srodek = lewy + (prawy - lewy) / 2;
    if (t[srodek] == x) return srodek;
    if (t[srodek] < x) return szukajBinarnie(t, srodek + 1, prawy, x);
    return szukajBinarnie(t, lewy, srodek - 1, x);
}

int szukajBinarnie(const int* t, int n, int x) {
    if (t == nullptr || n <= 0) return -1;
    return szukajBinarnie(t, 0, n - 1, x);
}

std::string dwojkowo(unsigned int n) {
    if (n < 2) return std::to_string(n);
    return dwojkowo(n / 2) + std::to_string(n % 2);
}

unsigned int sumaCyfr(unsigned int n) {
    if (n < 10) return n;
    return (n % 10) + sumaCyfr(n / 10);
}