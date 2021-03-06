#include <idc.idc>

static main(void)
{
    auto ea   = ScreenEA (), i = 0;
    auto popa = FindText(ea, SEARCH_DOWN|SEARCH_REGEX, 0, 0, "popa");
    if (popa == BADADDR)
    {
        Message ("Couldn't find popa\n");
        return;
    }

    Message("Found popa at %x\n", popa);
    RunTo(popa);

    for (i = 0; i < 4; ++ i)
    {
        StepOver();
    }
}
