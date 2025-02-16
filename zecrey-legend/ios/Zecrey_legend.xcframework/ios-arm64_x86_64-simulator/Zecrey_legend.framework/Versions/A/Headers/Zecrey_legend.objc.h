// Objective-C API for talking to github.com/zecrey-labs/zecrey-crypto/mobile/zecrey-legend Go package.
//   gobind -lang=objc github.com/zecrey-labs/zecrey-crypto/mobile/zecrey-legend
//
// File is generated by gobind. Do not edit.

#ifndef __Zecrey_legend_H__
#define __Zecrey_legend_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendCleanPackedAmount(NSString* _Nullable amountStr, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendCleanPackedFee(NSString* _Nullable amountStr, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendComputeAccountNameHash(NSString* _Nullable accountName, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendEddsaSign(NSString* _Nullable seed, NSString* _Nullable msg, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT BOOL Zecrey_legendEddsaVerify(NSString* _Nullable pkStr, NSString* _Nullable signatureStr, NSString* _Nullable msgStr, BOOL* _Nullable isValid, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendGenerateEddsaKey(NSString* _Nullable seed, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendGetAccountNameHash(NSString* _Nullable accountName, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendGetEddsaCompressedPublicKey(NSString* _Nullable seed, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendGetEddsaPublicKey(NSString* _Nullable seed, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendGetPrivateKey(NSString* _Nullable seed, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSData* _Nullable Zecrey_legendKeccakHash(NSData* _Nullable value);

FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendSignAddLiquidity(NSString* _Nullable seed, NSString* _Nullable segmentInfo, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendSignAtomicMatch(NSString* _Nullable seed, NSString* _Nullable segmentInfo, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendSignCancelOffer(NSString* _Nullable seed, NSString* _Nullable segmentInfo, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendSignCreateCollection(NSString* _Nullable seed, NSString* _Nullable segmentInfo, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendSignMintNft(NSString* _Nullable seed, NSString* _Nullable segmentInfo, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendSignOffer(NSString* _Nullable seed, NSString* _Nullable segmentInfo, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendSignRemoveLiquidity(NSString* _Nullable seed, NSString* _Nullable segmentInfo, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendSignSwap(NSString* _Nullable seed, NSString* _Nullable segmentInfo, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendSignTransfer(NSString* _Nullable seed, NSString* _Nullable segmentInfo, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendSignTransferNft(NSString* _Nullable seed, NSString* _Nullable segmentInfo, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendSignWithdraw(NSString* _Nullable seed, NSString* _Nullable segmentInfo, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull Zecrey_legendSignWithdrawNft(NSString* _Nullable seed, NSString* _Nullable segmentInfo, NSError* _Nullable* _Nullable error);

#endif
