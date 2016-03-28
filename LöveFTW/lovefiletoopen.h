#include <cvt/wstring>
#include <codecvt>


namespace lovefiletoopen {
	Platform::String^ name = "game.love";

	char* getCStr() {
		stdext::cvt::wstring_convert<std::codecvt_utf8<wchar_t>> convert;
		std::string stringUtf8 = convert.to_bytes(name->Data());
		const char* rawCstring = stringUtf8.c_str();
		return _strdup(rawCstring);
	}
}