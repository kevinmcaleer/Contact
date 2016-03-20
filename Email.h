//
//  Email.h
//  Contact
//
//  Created by Kevin McAleer on 16/11/2009.
//  Copyright 2009 Stoneage Software Ltd. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface Email :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * Address;
@property (nonatomic, retain) NSString * Name;

@end



