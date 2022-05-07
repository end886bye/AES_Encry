#ifndef AES_H
#define AES_H

// 数据加密
int AES_encrypt(char *p, int plen, char *oData, char *key); 
// 数据解密
int AES_decrypt(char *c, int clen, char *oData, char *key) ;
#endif
