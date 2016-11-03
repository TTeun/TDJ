#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>
#include <string>

class Strings {
  size_t d_size = 0;     // initial size ( = #strings)
  size_t d_capacity = 1; // initial capacity (in raw memory)
  std::string *d_str;    // pointer to the string objects.

public:
  class Proxy;
  Proxy operator[](size_t idx);
  class Proxy {
    std::string &d_str_prox;

  public:
    Proxy(std::string &str);
    std::string &operator=(std::string const &rhs);
    operator std::string const &() const;
  };


  Strings();
  Strings(int argc, char *argv[]);
  Strings(char **environLike);

  ~Strings();

  size_t size() const;
  size_t capacity() const;
  std::string const &at(size_t idx) const; // for const-objects
  std::string &at(size_t idx);             // for non-const objects

  void add(std::string const &next); // add another element
  void resize(size_t newSize);
  void reserve(size_t newCapacity);


private:
  std::string &safeAt(size_t idx) const; // private backdoor
  std::string *storageArea();            // to store the next str.
  void destroy();
  std::string *enlarged(); // to d_capacity
  std::string *rawStrings(size_t nStrings);
};

inline Strings::Proxy Strings::operator[](size_t idx) { return Proxy(d_str[idx]); }

inline Strings::Proxy::Proxy(std::string &str) : d_str_prox(str) {}

inline std::string &Strings::Proxy::operator=(std::string const &rhs) {
  d_str_prox = rhs;
  return d_str_prox;
}

inline Strings::Proxy::operator std::string const &() const {
  return d_str_prox;
}

inline size_t Strings::size() const // potentially dangerous practice:
{                                   // inline accessors
  return d_size;
}

inline size_t Strings::capacity() const // potentially dangerous practice:
{                                       // inline accessors
  return d_capacity;
}

inline std::string const &Strings::at(size_t idx) const { return safeAt(idx); }

inline std::string &Strings::at(size_t idx) { return safeAt(idx); }

#endif
