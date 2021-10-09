We should open files in binary mode for random access.
But if we open it in text mode it will also be valid.
But we will face problem if you random access in text file.
Because we know new lines translated to '\r\n' which holds 2 bits.
So it creates when we try to randomly access in text mode.

File.txt:
Dihan
a

in.seekg(7,ios::beg);
cout<<in.get();
in.close();