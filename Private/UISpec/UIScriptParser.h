//
//  UIScriptParser.h
//  iLessPainfulServer
//
//  Created by Karl Krukow on 11/08/11.
//  Copyright 2011 Trifork. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIScriptParser : NSObject {
    NSMutableArray *_res;
    NSString *_script;
}

@property (nonatomic, retain) NSString* script;

- (id) initWithUIScript:(NSString*) script;

- (void) parse;
- (NSArray*) parsedTokens;

- (NSArray*) evalWith:(NSArray*) views;

@end
