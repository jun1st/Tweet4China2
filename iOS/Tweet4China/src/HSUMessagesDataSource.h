//
//  HSUMessageDataSource.h
//  Tweet4China
//
//  Created by Jason Hsu on 5/21/13.
//  Copyright (c) 2013 Jason Hsu <support@tuoxie.me>. All rights reserved.
//

#import "HSUBaseDataSource.h"

@interface HSUMessagesDataSource : HSUBaseDataSource

@property (nonatomic, strong) NSDictionary *conversation;

- (id)initWithConversation:(NSDictionary *)conversation;
- (void)deleteConversation;

@end
