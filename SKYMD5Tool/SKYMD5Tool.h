//
//  SKYMD5Tool.h
//  MyCategory
//
//  Created by Topsky on 2017/1/16.
//  Copyright © 2017年 Topsky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SKYMD5Tool : NSObject

/**
 *  对string进行MD5加密, 32位 小写
 *
 *  @param str 传入要加密的字符串
 *
 *  @return 返回加密后的字符串
 */
+(NSString *)MD5ForLower32Bate:(NSString *)str;

/**
 *  对string进行MD5加密, 32位 大写
 *
 *  @param str 传入要加密的字符串
 *
 *  @return 返回加密后的字符串
 */
+(NSString *)MD5ForUpper32Bate:(NSString *)str;

/**
 *  对string进行MD5加密, 16位 小写
 *
 *  @param str 传入要加密的字符串
 *
 *  @return 返回加密后的字符串
 */
+(NSString *)MD5ForLower16Bate:(NSString *)str;

/**
 *  对string进行MD5加密, 16位 大写
 *
 *  @param str 传入要加密的字符串
 *
 *  @return 返回加密后的字符串
 */
+(NSString *)MD5ForUpper16Bate:(NSString *)str;

/**
 *  对data进行MD5加密, 32位 小写
 *
 *  @param input 传入要加密的data
 *
 *  @return 返回加密后的字符串
 */
+(NSString *)MD5Lower32Digest:(NSData *)input;

/**
 *  对data进行MD5加密, 32位 大写
 *
 *  @param input 传入要加密的data
 *
 *  @return 返回加密后的字符串
 */
+(NSString *)MD5Upper32Digest:(NSData *)input;

@end
