#include "iter.hpp"

int main()
{
    {
        /**
         * @brief int
         * @return  1,2,3,4
         */
        std::cout << "int " << std::endl;
        int array[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        iter(array, 4, write);
        std::cout << std::endl;
    }

    {
        /**
         * @brief double
         * @return 1.4
         */
        std::cout << "double " << std::endl;
        double array[9] = {1.4, 2.2, 3.6, 4.1, 5.7, 6.41, 7.12, 8.1, 9.4};
        iter(array, 1, write);
        std::cout << std::endl;
    }

    {
         /**
         * @brief float
         * @return 1.4f,2.2f
         */
        std::cout << "float " << std::endl;
        float array[9] = {1.4f, 2.2f, 3.6f, 4.1f, 5.7f, 6.41f, 7.12f, 8.1f, 9.4f};
        iter(array, 2, write);
        std::cout << std::endl;

    }
}