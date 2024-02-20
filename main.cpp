#include <string>
#include "sll.hpp"

int main()
{
    SLL<std::string> bakeryTrain;

    // populating train with different carts
    bakeryTrain.push_front("cookies");
    bakeryTrain.push_front("brownies");
    bakeryTrain.push_front("croissants");
    bakeryTrain.push_front("bagels");
    bakeryTrain.push_front("cupcakes");

    // ⭐TODO: Display bakeryTrain's content

    // ⭐TODO: Add "donuts" to the front of bakeryTrain

    // ⭐TODO: Display bakeryTrain's content

    // ⭐TODO: Add "cheesecake" BEFORE bagels in bakeryTrain

    // ⭐TODO: Display bakeryTrain's content

    return 0;
}