#include <cmath>
#include <iostream>

using namespace std;

enum Banks {
    PKO, BGZ, BRE, BPH
};

struct Account {
    Banks bank;
    int balance;
};

struct Person {
    char name[20];
    Account account;
};

struct Couple {
    Person he;
    Person she;
};

const Couple *bestClient(const Couple *cpls, size_t size, Banks bank);

int main() {

    Couple janczer[2] = {{{"lukasz", {PKO, 15}}, {"marta", {BGZ, 80000}}},
                         {{"piotr",  {BGZ, 25}}, {"aga",   {BGZ, 290}}}};

    bestClient(janczer, 2, PKO);

}

const Couple *bestClient(const Couple *cpls, size_t size, Banks bank) {
    int tempSuma = 0;
    int tempIndex = 0;
    const Couple *bestClient = nullptr;

    for (int i = 0; i < size; i++) {

        if (cpls[0].he.account.bank == bank || cpls[0].she.account.bank == bank) {

            int suma = cpls[i].he.account.balance + cpls[i].she.account.balance;
            if (suma > tempSuma) {
                tempIndex = i;
                tempSuma = suma;
            }
            bestClient = &cpls[tempIndex];
        }
    }

    return bestClient;

}
