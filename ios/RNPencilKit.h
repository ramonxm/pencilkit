//
//  RNPencilKit.h
//  pencilkit
//
//  Created by Ramon Xavier on 08/11/23.
//

#ifndef RNPencilKit_h
#define RNPencilKit_h


#endif /* RNPencilKit_h */

#import <Foundation/Foundation.h>

@interface RNPencilKit : NSObject

+ (RNPencilKit *_Nonnull)sharedInstance;

@property(nullable) NSData* drawingData;

-(void) saveData;
-(void) loadData;

@end
