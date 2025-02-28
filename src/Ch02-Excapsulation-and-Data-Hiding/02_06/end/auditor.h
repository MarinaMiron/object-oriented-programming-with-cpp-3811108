#ifndef AUDITOR_H
#define AUDITOR_H

#include "bankaccount.h"

class Auditor
{
private:
  
public:
  bool verifyAccount(const BankAccount &account);
};

#endif