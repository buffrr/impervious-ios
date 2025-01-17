// Objective-C API for talking to github.com/imperviousinc/hnsq/mobile Go package.
//   gobind -lang=objc github.com/imperviousinc/hnsq/mobile
//
// File is generated by gobind. Do not edit.

#ifndef __Mobile_H__
#define __Mobile_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@class MobileHNS;
@class MobileVerifyResult;

@interface MobileHNS : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
- (long)activePeerCount;
- (long)height;
- (BOOL)launchTA:(NSError* _Nullable* _Nullable)error;
- (long)peerCount;
- (float)progress;
- (BOOL)ready;
- (void)shutdownTA;
- (MobileVerifyResult* _Nullable)verifyCerts:(NSData* _Nullable)leaf port:(NSString* _Nullable)port proto:(NSString* _Nullable)proto hostname:(NSString* _Nullable)hostname;
@end

@interface MobileVerifyResult : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
- (long)code;
- (NSString* _Nonnull)message;
@end

FOUNDATION_EXPORT const int64_t MobileHNSBogus;
FOUNDATION_EXPORT const int64_t MobileHNSErr;
FOUNDATION_EXPORT const int64_t MobileHNSErrCert;
FOUNDATION_EXPORT const int64_t MobileHNSErrorUnknown;
FOUNDATION_EXPORT const int64_t MobileHNSInsecure;
FOUNDATION_EXPORT const int64_t MobileHNSLookupTimeout;
FOUNDATION_EXPORT const int64_t MobileHNSNoPeers;
FOUNDATION_EXPORT const long MobileHNSNotReady;
FOUNDATION_EXPORT const int64_t MobileHNSNotSynced;
FOUNDATION_EXPORT const int64_t MobileHNSOk;
FOUNDATION_EXPORT const int64_t MobileHNSPeerTimeout;
FOUNDATION_EXPORT const int64_t MobileHNSSecure;

@interface Mobile : NSObject
// skipped variable RootAnchor with unsupported type: func(ctx context.Context, v *github.com/imperviousinc/hnsq/mobile.HNS, cut string) (*github.com/imperviousinc/hnsq/dnssec.Zone, bool, error)

@end

FOUNDATION_EXPORT MobileHNS* _Nullable MobileNewVerifier(NSString* _Nullable dohURL, NSError* _Nullable* _Nullable error);

#endif
