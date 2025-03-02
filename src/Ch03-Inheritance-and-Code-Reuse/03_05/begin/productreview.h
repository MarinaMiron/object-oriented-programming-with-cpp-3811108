#ifndef PRODUCT_REVIEW_H
#define PRODUCT_REVIEW_H

#include <iostream>
#include "review.h"
#include "sociable.h"

class ProductReview : public Review, public Sociable
{
public:
  ProductReview(unsigned int r,
                const std::string &t,
                const std::string &txt,
                const std::string &id,
                const std::string &cat);

  ~ProductReview();
  void displayDetails() const;

  std::string getProductId() const { return productId; }
  std::string getCategory() const { return category; }

  void setProductId(const std::string &id);
  void setCategory(const std::string &cat);

private:
  static const unsigned int MAX_PRODUCTID_LENGTH = 64;
  static const unsigned int MAX_CATEGORY_LENGTH = 512;

  std::string productId;
  std::string category;
};

#endif