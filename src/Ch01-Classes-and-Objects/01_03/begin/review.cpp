#ifndef REVIEW_H
#define REVIEW_H
#include <iostream>

class Review
{
public:
  void displayDetails() const
  {
    std::cout << "Rating: " << rating << "/5\nTitle: " << title << "\nText: " << text << std::endl;
  }

private:
  unsigned int rating;
  std::string title;
  std::string text;
};
#endif