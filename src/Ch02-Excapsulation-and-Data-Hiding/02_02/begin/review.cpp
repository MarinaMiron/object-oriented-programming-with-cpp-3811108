#include "review.h"

Review::Review(unsigned int r, const std::string &t, const std::string &txt)
{
  rating = r;
  title = t;
  text = txt;
}

Review::~Review()
{
  std::cout << "Review object is being deleted." << std::endl;
}

void Review::displayDetails() const
{
  std::cout << "Rating: " << rating << "/5\nTitle: " << title << "\nText: " << text << std::endl;
}

unsigned int Review::getRating() const
{
  return rating;
}
std::string Review::getTitle() const
{
  return title;
}
std::string Review::getText() const
{
  return text;
}

void Review::setRating(unsigned int r)
{
  if (r < 1 || r > 5)
  {
    throw std::invalid_argument("Rating must be between 1 and 5");
  }
  rating = r;
}
void Review::setTitle(const std::string &t)
{
  if (t.empty())
  {
    throw std::invalid_argument("Title cannot be empty");
  }

  title = t.length() > 128 ? t.substr(0, 128) : t;
}
void Review::setText(const std::string &txt)
{
  if (txt.empty())
  {
    throw std::invalid_argument("Review text cannot be empty");
  }

  text = txt.length() > 1024 ? txt.substr(0, 1024) : txt;
}