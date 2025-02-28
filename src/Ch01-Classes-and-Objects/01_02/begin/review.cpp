#include <iostream>

class Review
{
private:
  unsigned int rating;
  std::string title;
  std::string text;

public:
  void displayDetails() const
  {
    std::cout << "Rating: " << rating << "/5\nTitle: " << title << "\nText: " << text << std::endl;
  }
};