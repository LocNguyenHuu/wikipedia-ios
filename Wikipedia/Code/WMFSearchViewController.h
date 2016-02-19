#import <UIKit/UIKit.h>
#import "WMFAnalyticsLogging.h"

@class MWKSite, MWKDataStore;

NS_ASSUME_NONNULL_BEGIN

@interface WMFSearchViewController : UIViewController<WMFAnalyticsContextProviding, WMFAnalyticsViewNameProviding>

@property (nonatomic, strong, readonly) MWKDataStore* dataStore;

+ (instancetype)searchViewControllerWithDataStore:(MWKDataStore*)dataStore;

@end

NS_ASSUME_NONNULL_END