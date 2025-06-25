//Converter function STRR to String and vice verse


#include <string>
#include <locale>
#include <codecvt>

std::string WstrToStr(const std::wstring& wstr)
{
    std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
    return converter.to_bytes(wstr);
}

std::wstring StrToWstr(const std::string& str)
{
    std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
    return converter.from_bytes(str);
}