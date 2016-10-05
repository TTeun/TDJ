class Demo {
public:
    Demo() {}

    void run() &;
    void run() const&;
    void run() &&;
};
