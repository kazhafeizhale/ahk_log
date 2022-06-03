﻿#pragma once
#include "stdafx.h"
#include <string>

std::wstring UTF8ToUnicode(const std::string & str);
std::string UnicodeToUTF8(const std::wstring & wstr);
std::wstring ANSIToUnicode(const std::string & str);
std::string UnicodeToANSI(const std::wstring & wstr);
std::string ANSIToUTF8(const std::string & str);
