#include <string>
#include "sll.hpp"

int main()
{
    SLL<std::string> bakeryTrain;

    // populating train with different carts
    bakeryTrain.add("cookies");
    bakeryTrain.add("brownies");
    bakeryTrain.add("croissants");
    bakeryTrain.add("bagels");
    bakeryTrain.add("cupcakes");

    // ⭐TODO: Display bakeryTrain's content

    // ⭐TODO: Add "donuts" to the front of bakeryTrain

    // ⭐TODO: Display bakeryTrain's content

    // ⭐TODO: Add "cheesecake" BEFORE bagels in bakeryTrain

    // ⭐TODO: Display bakeryTrain's content

    return 0;
}