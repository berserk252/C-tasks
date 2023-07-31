#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PLAYERS 2
#define SUITS 4
#define FACES 13
#define CARDS 52
#define HANDS 9
#define HAND 5

// prototypes
void shuffle(unsigned int wDeck[][FACES]); // shuffling modifies wDeck
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[], int cardFace[], int cardSuit[]); // dealing doesn't modify the arrays
void cardModelArr(int cardFace[], int faceModel[]);
void evaluation(int)

int straightFlush(int faceModel[], int suit[]);
int fourOfaKind(int faceModel[], int suit[]);
int fullHouse(int faceModel[], int suit[]);
int flush(int faceModel[], int suit[]);
int straight(int faceModel[], int suit[]);
int threeOfaKind(int faceModel[], int suit[]);
int twoPairs(int faceModel[], int suit[]);
int pair(int faceModel[], int suit[]);


int main(void)
{
   // initialize deck array
   unsigned int deck[SUITS][FACES] = { 0 };
   int faceModel[FACES] = {0};
   int cardFace[2][HAND] = {0};
   int cardSuit[2][HAND] = {0};
   int (*f[HANDS - 1])(int [], int []) = {straightFlush, fourOfaKind, fullHouse, flush, straight, threeOfaKind, twoPairs, pair};
   int pokerHand[2] = {0};

   srand(time(NULL)); // seed random-number generator

   shuffle(deck); // shuffle the deck

   // initialize suit array
   const char *suit[SUITS] =
      {"Hearts", "Diamonds", "Clubs", "Spades"};

   // initialize face array
   const char *face[FACES] =
      {"Ace", "Deuce", "Three", "Four",
       "Five", "Six", "Seven", "Eight",
       "Nine", "Ten", "Jack", "Queen", "King"};

    const char *hand[HANDS] =
		{"High Card", "Pair", "Two Pairs", "Three of a Kind",
		 "Straight", "Flush", "Full House", "Four of a Kind", "Straight Flush"};
	
	for(int p = 0; p < PLAYERS; p++)
	{
		deal(deck, face, suit, cardFace[p], cardSuit[p]); // deal the deck
   		cardModelArr(cardFace[p], faceModel);

   		for(int i = 0; i < HANDS - 1; i++)
		{
			pokerHand[p] = (*f[i])(faceModel, cardSuit[p]);

			if(pokerHand[p] > 0)
			{
				break;
			}
		}
	}	 
   	
	printf("\nFirst player have a %s", hand[pokerHand[0]]);
	printf("\nSecond player have a %s", hand[pokerHand[1]]);
	
	if(pokerHand[0] > pokerHand[1])
	{
		printf("\nFirst player wins\n");
	}
	
	if(pokerHand[0] < pokerHand[1])
	{
		
		printf("\nSecond player wins");
	}
	
	if(pokerHand[0] == pokerHand[1])
	{
		printf("\nDraw\n");
	}
}

// shuffle cards in deck
void shuffle(unsigned int wDeck[][FACES])
{
   // for each of the cards, choose slot of deck randomly
   for (size_t card = 1; card <= CARDS; ++card) {
      size_t row; // row number
      size_t column; // column number

      // choose new random location until unoccupied slot found
      do {
         row = rand() % SUITS;
         column = rand() % FACES;
      } while(wDeck[row][column] != 0); // end do...while

      // place card number in chosen slot of deck
      wDeck[row][column] = card;
   }
}

// deal cards in deck
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[], int cardFace[], int cardSuit[])
{
	static int card = 1;
	int maxCard = card + 5;
   // deal each of the cards
   for ( card = 1; card < maxCard; ++card) {
      // loop through rows of wDeck
      for (size_t row = 0; row < SUITS; ++row) {
         // loop through columns of wDeck for current row
         for (size_t column = 0; column < FACES; ++column) {
            // if slot contains current card, display card
            if (wDeck[row][column] == card) {
               cardFace[card - 1] = column;
               cardSuit[card - 1] = row;
               printf("%5s of %-8s%\n", wFace[column], wSuit[row]);
            }
         }
      }
   }
}

void cardModelArr(int cardFace[], int faceModel[])
{
    for(int a = 0; a < HAND; a++)
    {
        for(int b = 0; b < FACES; b++)
        {
            if(cardFace[a] == b)
            {
                faceModel[b]++;
                break;
            }
        }
    }
}

int straightFlush(int faceModel[], int suit[])
{
	int hold = 0;
	int suitNum = suit[0];

	for(int i = 0; i < FACES; i++)
	{
		if(faceModel[i] == 1)
		{
			hold = i;
			break;
		}
	}

	if( faceModel[hold + 1] == 1 && faceModel[hold + 2] == 1 && faceModel[hold + 3] == 1 && faceModel[hold + 4] == 1 &&
	    suitNum == suit[1] && suitNum == suit[2] && suitNum == suit[3] && suitNum == suit[4] )
	   {
	   		return 8;
	   }
	   else
	   {
			return 0;
	   }
}

int fourOfaKind(int faceModel[], int suit[])
{
	int valid = 0;
	
	for(int i = 0; i < FACES; i++)
	{
		if(faceModel[i] == 4)
		{
			valid++;
		}
	}
	
	if(valid == 1)
	{
		return 7;
	}
	else
	{
		return 0;
	}
}


int fullHouse(int faceModel[], int suit[])
{
	int valid = 0;

	for(int i = 0; i < FACES; i++)
	{
		if(faceModel[i] == 3)
		{
			valid++;
			break;
		}
	}

	if(valid == 1)
	{
		for(int i = 0; i < FACES; i++)
		{
			if(faceModel[i] == 2)
			{
				valid++;
				break;
			}
		}
	}

	if(valid == 2)
	{
		return 6;
	}
	else
	{
		return 0;
	}
}

int flush(int faceModel[], int suit[])
{
	if(suit[0] == suit[1] && suit[1] == suit[2] && suit[2] == suit[3] && suit[3] == suit[4])
	{
		return 5;
	}
	else
	{
		return 0;
	}
		
}

int straight(int faceModel[], int suit[])
{
	int hold = 0;

	for(int i = 0; i < FACES; i++)
	{
		if(faceModel[i] == 1)
		{
			hold = i;	
			break;
		}
	}

	if( faceModel[hold + 1] == 1 && faceModel[hold + 2] == 1 && faceModel[hold + 3] == 1 && faceModel[hold + 4] == 1)
	   {
	   		return 4;
	   }
	   else
	   {
			return 0;
	   }
}

int threeOfaKind(int faceModel[], int suit[])
{
	int valid = 0;
	 
	for(int i = 0; i < FACES; i++)
	{
		if(faceModel[i] == 3)
		{
			valid++;
		}
	}
	
	if(valid == 1)
	{
		return 3;
	}
	else
	{
		return 0;
	}
}

int twoPairs(int faceModel[], int suit[])
{
	int i = 0;
	int valid = 0;

	for(; i < FACES;i++)
	{
		if(faceModel[i] == 2)
		{
			valid++;
			i++;
			break;
		}
	}

	if(valid == 1)
	{
		for(; i < FACES; i++)
		{
			if(faceModel[i] == 2)
			{
				valid++;
				break;
			}
		}
	}

	if(valid == 2)
	{
		return 2;
	}
	else
	{
		return 0;
	}
}

int pair(int faceModel[], int suit[])
{
	int valid = 0;
	
	for(int i = 0; i < FACES;i++)
	{
		if(faceModel[i] == 2)
		{
			valid++;
		}
	}
	
	if(valid == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	

}
