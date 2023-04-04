
/*
 * You can modify this sign to disguise your encrypt file
 */
char encrypt_file_header_sign[] = {
	0x7a, 0x65, 0x67, 0x75, 
	0x70, 0x72, 0x6d, 0x73
};

int encrypt_file_header_length = sizeof(encrypt_file_header_sign);
