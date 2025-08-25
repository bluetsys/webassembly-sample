#include <emscripten/emscripten.h>
#include <emscripten/bind.h>

#include <string>
#include <vector>

using namespace emscripten;

std::map<int, std::string> returnMapData()
{
    std::map<int, std::string> result;
    result[1] = "1110";
    result[0] = "한글";
    result[10] = "안유진";
    result[20] = "english";
    result[30] = "공공데이터";

    return result;
}

EMSCRIPTEN_BINDINGS(module)
{
    emscripten::function("returnMapData", &returnMapData);

    emscripten::register_vector<int>("vector<int>");
    emscripten::register_map<int, std::string>("map<int, string>");
}
