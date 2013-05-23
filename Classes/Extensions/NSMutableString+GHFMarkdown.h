//
//  NSMutableString+GHFMarkdown.h
//  iOctocat
//
//  Created by Dennis Reimann on 05/15/13.
//  http://dennisreimann.de
//

#import <Foundation/Foundation.h>

@interface NSMutableString (GHFMarkdown)
- (void)substituteMarkdownLinks;
- (void)substituteMarkdownTasks;
@end
