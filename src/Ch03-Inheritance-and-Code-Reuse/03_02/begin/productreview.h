#ifndef PRODUCT_REVIEW_H
#define PRODUCT_REVIEW_H

#include <iostream>
#include "review.h"

class ProductReview : public Review
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

  // Product-specific members
  std::string productId;
  std::string category;
};

#endif