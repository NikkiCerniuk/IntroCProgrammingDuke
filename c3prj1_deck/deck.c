#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "deck.h"

void print_hand(deck_t *hand)
{

    if (hand == NULL)
    {
        printf("Hand is NULL\n");
        return;
    }

    if (hand->n_cards <= 0)
    {
        printf("No cards in hand\n");
    }
    else
    {
        int i = 0;
        while (i < hand->n_cards)
        {
          print_card(*(hand->cards[i]));
            if (i != hand->n_cards - 1)
            {
                printf(" ");
            }
            i++;
        }
    }
}


int deck_contains(deck_t *d, card_t c)
{
    for (int i = 0; i < d->n_cards; i++)
    {
        if (c.value == d->cards[i]->value && c.suit == d->cards[i]->suit)
        {
            return 1;
        }
    }
    return 0;
}

void shuffle(deck_t *d)
{
    for (int i = 0; i < d->n_cards - 1; i++)
    {
        int j = i + rand() % (d->n_cards - i);

        card_t *temp = d->cards[i];
        d->cards[i] =d->cards[j];
        d->cards[j] = temp;
    }
}

void assert_full_deck(deck_t *d)
{
    for (int value = 2; value <= 14; value++)
    {
        for (int suit = 0; suit < 4; suit++)
        {
            card_t card;
            card.value = value;
            card.suit = suit;

            int count = 0;
            for (int i = 0; i < d->n_cards; i++)
            {
                if (d->cards[i]->value == card.value && d->cards[i]->suit =\
= card.suit)
                {
    count++;
                }
            }
            assert(count == 1 && "Deck does not contain every card exactly \
once!");
        }
    }
}




