namespace color
{
    enum Color
    {
        red,
        green,
        blue,
    };
}

namespace feeling
{
    enum Feeling
    {
        happy,
        tired,
        blue, // feeling::blue doesn't collide with color::blue
    };
}

int main()
{
    color::Color paint{color::blue};
    feeling::Feeling me{feeling::blue};

    return 0;
}

// enum Color
// {
//     red,
//     green,
//     blue,
// };

// enum Feeling
// {
//     happy,
//     tired,
//     //blue,
// };

// int main()
// {
//     Color apple { red };
//     Feeling me { happy };

//     return 0;
// }