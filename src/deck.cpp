#include "../include/card.hpp"
#include "../include/deck.hpp"
#include "../resources/ascii.hpp"
#include "../include/card_factory.hpp"
#include <vector>
#include <algorithm>
#include <random>
#include <iostream>
#include <chrono>
#include <fstream>

Deck::Deck(CardFactory *factory) {
    this->factory = factory;
}

void Deck::create() {

    cards = new std::vector<Card *>;

    for (int i = CLUBS; i <= SPADES; i++) {
        for (int j = ACE; j <= TWO; j++) {
            cards->push_back(factory->createCard(static_cast<CardType>(i), static_cast<CardValue>(j)));
        }
    }
}

void Deck::shuffle() {
    long seed = std::chrono::system_clock::now().time_since_epoch().count();
    auto randomNumberGenerator = std::default_random_engine(seed);
    std::shuffle(std::begin(*(cards)), std::end(*(cards)), randomNumberGenerator);
}

Card *Deck::drawCard() {
    Card *card = (*cards)[cards->size() - 1];
    cards->pop_back();
    return card;
}

void Deck::returnToDeck(std::vector<Card *> hand) {
    for (auto &i : hand) {
        cards->push_back(i);
    }
}
