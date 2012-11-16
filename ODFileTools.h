//
//  ODFileTools.h
//  OcodoArcConstrukt
//
//  Created by jason on 16/11/12.
//  Copyright (c) 2012 ocodo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ODFileTools : NSObject

+ (void) save:(NSString *)filename documentsFolder:(NSString*)folder data:(NSData*)data;
+ (void) save:(NSString *)filename extension:(NSString*)extension documentsFolder:(NSString*)folder data:(NSData*)data;
+ (NSData*) load:(NSString *)filename documentsFolder:(NSString*)folder;
+ (NSData*) load:(NSString *)filename extension:(NSString*)extension documentsFolder:(NSString*)folder;
+ (void) delete:(NSString *)filename documentsFolder:(NSString*)folder;
+ (void) delete:(NSString *)filename extension:(NSString*)extension documentsFolder:(NSString*)folder;
+ (NSString*) documentsFolder:(NSString*)folder;
+ (NSString*) fullPath:(NSString*)filename documentsFolder:(NSString*)folder;
+ (NSString*) fullPath:(NSString*)filename extension:(NSString*)extension documentsFolder:(NSString*)folder;

@end
