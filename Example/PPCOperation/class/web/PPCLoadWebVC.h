//
//  PPCLoadWebVC.h
//  PPCOperation
//
//  Created by Apple on 5/30/16.
//  Copyright © 2016 pen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PPCLoadWebVC : UIViewController

- (instancetype)initWithFilePath:(NSString *)filePath sourceDocument:(NSString *)sourceDocument;

@property (nonatomic, strong) NSDictionary *webJson;
@end
