//
//  STNetTask.h
//  Sth4Me
//
//  Created by Kevin Lin on 29/11/14.
//  Copyright (c) 2014 Sth4Me. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface STNetTask : NSObject

@property (nonatomic, strong) NSError *error;
@property (nonatomic, assign) BOOL pending;
@property (nonatomic, assign) NSUInteger retryCount;

- (NSString *)uri;
- (void)didResponse:(NSObject *)response;
- (void)didFail;
- (void)didRetry;

- (NSUInteger)maxRetryCount;
- (BOOL)shouldRetryForError:(NSError *)error;

@end