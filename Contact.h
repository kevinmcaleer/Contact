//
//  Contact.h
//  Contact
//
//  Created by Kevin McAleer on 16/11/2009.
//  Copyright 2009 Stoneage Software Ltd. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface Contact :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * AddressLine1;
@property (nonatomic, retain) NSString * AddressLine2;
@property (nonatomic, retain) NSString * Firstname;
@property (nonatomic, retain) NSString * Surname;
@property (nonatomic, retain) NSSet* Email;

@end


@interface Contact (CoreDataGeneratedAccessors)
- (void)addEmailObject:(NSManagedObject *)value;
- (void)removeEmailObject:(NSManagedObject *)value;
- (void)addEmail:(NSSet *)value;
- (void)removeEmail:(NSSet *)value;

@end

