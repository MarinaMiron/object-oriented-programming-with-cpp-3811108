#include "review.h"

Review::Review(unsigned int r, const std::string &t, const std::string &txt)
{
  setRating(r);
  setText(t);
  setText(txt);
}

Review::~Review()
{
  std::cout << "Review object is being deleted." << std::endl;
}

void Review::displayDetails() const
{
  std::cout << "Rating: " << rating << "/5\nTitle: " << title << "\nText: " << text << std::endl;
}

void Review::setRating(unsigned int r)
{
  if (r < MIN_RATING || r > MAX_RATING)
  {
    throw std::invalid_argument("Rating must be between 1 and 5");
  }
  else
  {
    rating = r;
  }
}

void Review::setTitle(const std::string &t)
{
  // Trim if exceeds maximum length
  title = validateAndTrim(t, MAX_TITLE_LENGHT, "Title");
}

void Review::setText(const std::string &txt)
{
  // Trim if exceeds maximum length
  text = validateAndTrim(txt, MAX_TEXT_LENGHT, "Review text");
}

std::string Review::validateAndTrim(const std::string &str,
                                    unsigned int maxLength,
                                    const std::string &fieldName) const
{
  if (str.empty())
  {
    throw std::invalid_argument(fieldName + " cannot be empty");
  }
  return str.length() > maxLength ? str.substr(0, maxLength) : str;
}