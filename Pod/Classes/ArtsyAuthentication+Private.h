#import "ArtsyAuthentication.h"

extern NSString* const ArtsyOAuthTokenKey;
extern NSString* const ArtsyOAuthExpiryKey;
extern NSString* const ArtsyXAppTokenKey;

@class ArtsyNetworkOperator;

@interface ArtsyAuthentication (Private)

- (void)callback:(ArtsyToken *)token error:(NSError *)error completion:(ArtsyAuthenticationCallback)callback;

@property (nonatomic, readonly) ArtsyNetworkOperator *networkOperator;

@end
