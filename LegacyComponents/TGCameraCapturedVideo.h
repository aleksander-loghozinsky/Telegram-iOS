#import <UIKit/UIKit.h>
#import <LegacyComponents/TGMediaEditingContext.h>
#import <LegacyComponents/TGMediaSelectionContext.h>

@class AVURLAsset;

@interface TGCameraCapturedVideo : NSObject <TGMediaEditableItem, TGMediaSelectableItem>

@property (nonatomic, readonly) AVURLAsset *avAsset;
@property (nonatomic, readonly) NSTimeInterval duration;

- (instancetype)initWithURL:(NSURL *)url;

@end
