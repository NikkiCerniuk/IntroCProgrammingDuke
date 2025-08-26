#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"

void assert_card_valid(card_t c)
{
    assert(SPADES <= c.suit && c.suit <= CLUBS);
    assert(2 <= c.value && c.value <= VALUE_ACE);
}

const char *ranking_to_string(hand_ranking_t r)
{
    switch (r)
    {
    case STRAIGHT_FLUSH:
        return "STRAIGHT_FLUSH";
        break;
    case FOUR_OF_A_KIND:
        return "FOUR_OF_A_KIND";
        break;
    case FULL_HOUSE:
        return "FULL_HOUSE";
        break;
    case FLUSH:
        return "FLUSH";
        break;
    case STRAIGHT:
        return "STRAIGHT";
        break;
    case THREE_OF_A_KIND:
        return "THREE_OF_A_KIND";
        break;
    case TWO_PAIR:
        return "TWO_PAIR";
        break;
    case PAIR:
        return "PAIR";
        break;
    case NOTHING:
        return "NOTHING";
        break;
    default:

       return "";
        break;
    }
}

char value_letter(card_t c)
{
    if (2 <= c.value && c.value <= 9)
    {
        return ('0' + c.value);
    }
    else
    {
        switch (c.value)
        {
        case 10:
            return '0';
            break;
        case 11:
            return 'J';
            break;
        case 12:
            return 'Q';
            break;
        case 13:
            return 'K';
            break;
        case 14:
            return 'A';
            break;
        default:
            return 'x';
        }
    }
}

char suit_letter(card_t c)
{
    assert(SPADES <= c.suit && c.suit <= CLUBS);
    switch (c.suit)
        {
    case SPADES:
        return 's';
        break;
    case HEARTS:
        return 'h';
        break;
    case DIAMONDS:
        return 'd';
        break;
    case CLUBS:
        return 'c';
        break;
    case NUM_SUITS:
        return 'y';
        break;
        default :
        return 'x';
    }

}

void print_card(card_t c)
{
    printf("%c%c", value_letter(c), suit_letter(c));
}

card_t card_from_letters(char value_let, char suit_let)
{
    card_t temp;
    {
       if (value_let == '0') {
        temp.value = 10;
   } else if ('2' <= value_let && value_let <= '9') {
        temp.value = value_let - '0';
    } else
    {
            switch (value_let)
            {
            case 'J':
                temp.value = VALUE_JACK;
                break;
            case 'Q':
                temp.value = VALUE_QUEEN;
                break;
            case 'K':
                temp.value = VALUE_KING;
                break;
        case 'A':
                temp.value = VALUE_ACE;
                break;

            }
        }
    }

    switch (suit_let)
    {
    case 's':
      temp.suit = SPADES;
        break;
    case 'd':
        temp.suit = DIAMONDS;
        break;
    case 'h':
        temp.suit = HEARTS;
        break;
    case 'c':
        temp.suit = CLUBS;
        break;
 }

    return temp;
}
card_t card_from_num(unsigned c)
{
    card_t temp;
    assert(0 <= c && c < 52);
    temp.suit = (suit_t)(c % NUM_SUITS);
    temp.value = (c / NUM_SUITS) + 2;
    return temp;
}

