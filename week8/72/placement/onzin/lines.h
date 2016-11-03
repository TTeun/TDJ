#include <string>
#include <vector>
#include <iostream>

class Lines {
    std::vector<std::string> d_line;

public:
    std::string at(size_t idx) { return d_line[idx]; }

    /****PROXY CLASS*****/
    class Proxy;
    Proxy operator[](size_t idx) {
        return Proxy(d_line[idx]);
    }
    class Proxy {
        friend Proxy Lines::operator[](size_t idx);
        std::string &d_str;

    public:
        Proxy(std::string &str);
        std::string &operator=(std::string const &rhs);
        operator std::string const &() const;
    };
    /*******************/

    Lines(std::vector<std::string> input) {
        for (size_t i = 0; i != input.size(); ++i)
            d_line.push_back(input[i]);
    }
};

inline Lines::Proxy::Proxy(std::string &str)
    : d_str(str)
{}

inline std::string &Lines::Proxy::operator=(std::string const &rhs)
{
  std::cout << "rvalue" << '\n';
    return d_str = rhs;
}

inline Lines::Proxy::operator std::string const &() const
{
  std::cout << "lvalue" << '\n';
    return d_str;
}
