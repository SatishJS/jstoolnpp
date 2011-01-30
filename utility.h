#ifndef _UTILITY_H_
#define _UTILITY_H_

#include <string>

using namespace std;

#if defined(UNICODE) || defined(_UNICODE)
typedef wstring tstring;
#else
typedef string tstring;
#endif

struct StruOptions
{
	bool bPutCR; // 是否输出 \r\n
	char chIndent; // 缩进用的字符
	int nChPerInd; // 每个缩进使用几个字符
	bool bNLBracket; // { 之前是否换行
};

const string keyPutCR("Put CR");
const string keyChIndent("Indent char");
const string keyChPerInd("Chars per indent");
const string keyNLBracket("New line before {");

tstring GetConfigFilePath(HWND nppHandle);

void loadOption(HWND nppHandle, StruOptions& struOptions);
void loadDefaultOption(StruOptions& struOptions);

void saveOption(HWND nppHandle, StruOptions struOptions);

#endif
