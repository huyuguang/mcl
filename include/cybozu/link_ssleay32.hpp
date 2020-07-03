#pragma once
/**
	@file
	@brief link ssleay32.lib of openssl
	@author MITSUNARI Shigeo(@herumi)
*/
#if defined(_WIN32) && defined(_MT)
	#pragma comment(lib, "libssl.lib")
	#pragma comment(lib, "user32.lib")
#endif
