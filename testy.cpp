#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "rekurencja.h"
#include <stdexcept>

TEST_CASE("Testowanie funkcji silnia") {
    CHECK(silnia(0) == 1);
    CHECK(silnia(1) == 1);
    CHECK(silnia(5) == 120);
    CHECK(silnia(20) == 2432902008176640000ULL);
    CHECK_THROWS_AS(silnia(-1), std::invalid_argument);
    CHECK_THROWS_AS(silnia(-5), std::invalid_argument);
}

TEST_CASE("Testowanie funkcji nwd") {
    CHECK(nwd(0, 0) == 0);
    CHECK(nwd(5, 0) == 5);
    CHECK(nwd(0, 5) == 5);
    CHECK(nwd(48, 18) == 6);
    CHECK(nwd(-48, 18) == 6);
    CHECK(nwd(48, -18) == 6);
    CHECK(nwd(-5, 0) == 5);
}

TEST_CASE("Testowanie funkcji potega") {
    CHECK(potega(2, 0) == 1);
    CHECK(potega(2, 1) == 2);
    CHECK(potega(2, 10) == 1024);
    CHECK(potega(-3, 3) == -27);
    CHECK(potega(5, 3) == 125);
    CHECK(potega(0, 5) == 0);
}

TEST_CASE("Testowanie funkcji palindrom") {
    CHECK(palindrom(""));
    CHECK(palindrom("a"));
    CHECK(palindrom("Kajak"));
    CHECK(palindrom("kamilslimak"));
    CHECK_FALSE(palindrom("hello"));
    CHECK(palindrom("Aba"));
}

TEST_CASE("Testowanie funkcji szukajBinarnie") {
    int t1[] = {1, 2, 3, 4, 5};
    CHECK(szukajBinarnie(t1, 5, 3) == 2);
    CHECK(szukajBinarnie(t1, 5, 1) == 0);
    CHECK(szukajBinarnie(t1, 5, 5) == 4);
    CHECK(szukajBinarnie(t1, 5, 6) == -1);
    
    int t2[] = {10, 20, 30};
    CHECK(szukajBinarnie(t2, 3, 30) == 2);
    CHECK(szukajBinarnie(t2, 3, 40) == -1);
    CHECK(szukajBinarnie(nullptr, 0, 5) == -1);
}

TEST_CASE("Testowanie funkcji dwojkowo") {
    CHECK(dwojkowo(0) == "0");
    CHECK(dwojkowo(1) == "1");
    CHECK(dwojkowo(6) == "110");
    CHECK(dwojkowo(15) == "1111");
    CHECK(dwojkowo(32) == "100000");
}

TEST_CASE("Testowanie funkcji sumaCyfr") {
    CHECK(sumaCyfr(0) == 0);
    CHECK(sumaCyfr(5) == 5);
    CHECK(sumaCyfr(1234) == 10);
    CHECK(sumaCyfr(999) == 27);
    CHECK(sumaCyfr(1000000) == 1);
}