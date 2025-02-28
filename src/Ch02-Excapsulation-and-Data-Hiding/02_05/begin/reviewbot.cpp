#include "reviewbot.h"
#include "review.h"
#include <iostream>

void ReviewBot::fixFormatting(Review &review)
{
  review.title[0] = toupper(review.title[0]);
  review.text[0] = toupper(review.text[0]);
}