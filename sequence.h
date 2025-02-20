#include <cstddef> 
#ifndef WHITMAN_SEQUENCE
#define WHITMAN_SEQUENCE

class sequence {
    public:
        static const std::size_t CAPACITY = 30;
        sequence();
        void insert(const double& entry);
        std::size_t size() const;
        double current() const;
        void remove_current();
    private:
        double data[CAPACITY];
        std::size_t used;
        std::size_t current_index;
};

#endif