﻿#pragma once
#include <fltKernel.h>
//在比较时，采用的时大小写无关的比较方式
// 这里添加你需要进行透明加密的文件的拓展名
const PWCHAR allowed_extension[] = {
	//    L"docx",
	//    L"doc",
	//    L"xlsx",
	//    L"xls",
	//    L"pptx",
	//    L"ppt",
	L"txt",
	//    L"PNG",
	//    L"JPG",
	L"mp4",
	L"dwg",
	NULL };