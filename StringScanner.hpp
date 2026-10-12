#ifndef STRINGSCANNER_HPP
#define STRINGSCANNER_HPP

#include <windows.h>
#include <string>
#include <vector>

class StringScanner {
public:
    static std::wstring StringToWideString(const std::string& str);
    static void ScanAndClean(HANDLE processHandle, const std::vector<std::string>& targetStrings);
    static std::vector<void*> FindStringAddressesByOrder(DWORD processId, const std::string& target);
    static std::vector<void*> FindWStringAddressesByOrder(DWORD processId, const std::wstring& target);
};

#endif
