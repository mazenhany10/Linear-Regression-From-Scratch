#ifndef INSUFFICIENT_FUNDS_EXCEPTION_MAZ_H
#define INSUFFICIENT_FUNDS_EXCEPTION_MAZ_H
#include <exception>
using namespace std;
class InsufficientFundsException : public exception
{
public:
    InsufficientFundsException() noexcept = default;
    ~InsufficientFundsException() = default;
    virtual const char *what() const noexcept
    {
        return "InsufficientFundsException";
    }
};
#endif // INSUFFICIENT_FUNDS_EXCEPTION_MAZ_H