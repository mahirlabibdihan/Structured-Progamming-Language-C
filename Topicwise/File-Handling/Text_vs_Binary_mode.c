// Different size
// Text mode: 2 bit for new line
// New Lines ('\n') will be translated to '\r\n' sequences while writing to file. 	CRLF
// '\r' -> Carriage return -> 0d
// '\n' -> Line feed -> 0a

// When we open a text file in text mode '\r\n' will be formated again to '\n'.
// But if we open a text file in binary mode '\r\n' will remain unformated. We will get two characters '\r' and '\n' while reading.


// Binary mode: 1 bit for new line
// New Lines ('\n') will be translated to '\n' only
// '\n' -> Line feed -> 0a

/*										Read						Write
	Text file + Text Mode 		-> '\r\n' -> '\n'				'\n'  -> '\r\n'
								-> '\n'	  -> '\n'				'\r'  -> '\r'

	Text file + Binary Mode 	-> '\r\n' -> '\r' '\n'			'\n'  -> '\n'
								   '\r'   -> '\r'				'\r'  -> '\r'
								   '\n'   -> '\n'

 	Binary file + Text Mode 	-> '\n'   -> '\n'				'\n'   -> '\n'
 								   '\r'   -> '\r'				'\r'   -> '\r'

	Binary file + Binary Mode	-> '\n'   -> '\n'				'\n'   -> '\n'
								   '\r'   -> '\r'				'\r'   -> '\r'
*/