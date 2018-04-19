# SKYMD5Tool
一行代码完成对NSString和NSData进行md5加密(包括32位和16位大小写)

安装：pod 'SKYMD5Tool'
```
/**
 *  对string进行MD5加密, 32位 小写
 *
 *  @param str 传入要加密的字符串
 *
 *  @return 返回加密后的字符串
 */
+(NSString *)MD5ForLower32Bate:(NSString *)str;

/**
 *  对data进行MD5加密, 32位 大写
 *
 *  @param input 传入要加密的data
 *
 *  @return 返回加密后的字符串
 */
+(NSString *)MD5Upper32Digest:(NSData *)input;
```
