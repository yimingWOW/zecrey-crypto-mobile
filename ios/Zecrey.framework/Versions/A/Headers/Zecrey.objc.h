// Objective-C API for talking to github.com/zecrey-labs/zecrey-crypto/mobile Go package.
//   gobind -lang=objc github.com/zecrey-labs/zecrey-crypto/mobile
//
// File is generated by gobind. Do not edit.

#ifndef __Zecrey_H__
#define __Zecrey_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@class ZecreyAddLiquiditySegment;
@class ZecreyAddLiquiditySegmentFormat;
@class ZecreyAddLiquidityTxInfo;
@class ZecreyElGamalEnc;
@class ZecreyPoint;
@class ZecreyRemoveLiquiditySegment;
@class ZecreyRemoveLiquiditySegmentFormat;
@class ZecreyRemoveLiquidityTxInfo;
@class ZecreySwapSegment;
@class ZecreySwapSegmentFormat;
@class ZecreySwapTxInfo;
@class ZecreyTransferSegment;
@class ZecreyTransferSegmentFormat;
@class ZecreyTransferTxInfo;
@class ZecreyUnlockSegment;
@class ZecreyUnlockSegmentFormat;
@class ZecreyUnlockTxInfo;
@class ZecreyWithdrawSegment;
@class ZecreyWithdrawSegmentFormat;
@class ZecreyWithdrawTxInfo;

@interface ZecreyAddLiquiditySegment : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped field AddLiquiditySegment.PairIndex with unsupported type: uint32

// skipped field AddLiquiditySegment.AccountIndex with unsupported type: uint32

// skipped field AddLiquiditySegment.C_uA with unsupported type: *github.com/zecrey-labs/zecrey-crypto/elgamal/twistededwards/tebn254/twistedElgamal.ElGamalEnc

// skipped field AddLiquiditySegment.C_uB with unsupported type: *github.com/zecrey-labs/zecrey-crypto/elgamal/twistededwards/tebn254/twistedElgamal.ElGamalEnc

// skipped field AddLiquiditySegment.Pk_pool with unsupported type: *github.com/consensys/gnark-crypto/ecc/bn254/twistededwards.PointAffine

// skipped field AddLiquiditySegment.Pk_u with unsupported type: *github.com/consensys/gnark-crypto/ecc/bn254/twistededwards.PointAffine

// skipped field AddLiquiditySegment.AssetAId with unsupported type: uint32

// skipped field AddLiquiditySegment.AssetBId with unsupported type: uint32

// skipped field AddLiquiditySegment.B_uA with unsupported type: uint64

// skipped field AddLiquiditySegment.B_uB with unsupported type: uint64

// skipped field AddLiquiditySegment.B_A_Delta with unsupported type: uint64

// skipped field AddLiquiditySegment.B_B_Delta with unsupported type: uint64

// skipped field AddLiquiditySegment.Sk_u with unsupported type: *math/big.Int

// skipped field AddLiquiditySegment.C_fee with unsupported type: *github.com/zecrey-labs/zecrey-crypto/elgamal/twistededwards/tebn254/twistedElgamal.ElGamalEnc

// skipped field AddLiquiditySegment.B_fee with unsupported type: uint64

// skipped field AddLiquiditySegment.GasFeeAssetId with unsupported type: uint32

// skipped field AddLiquiditySegment.GasFee with unsupported type: uint64

@end

@interface ZecreyAddLiquiditySegmentFormat : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long pairIndex;
@property (nonatomic) long accountIndex;
@property (nonatomic) NSString* _Nonnull c_uA;
@property (nonatomic) NSString* _Nonnull c_uB;
@property (nonatomic) NSString* _Nonnull pk_pool;
@property (nonatomic) NSString* _Nonnull pk_u;
@property (nonatomic) long assetAId;
@property (nonatomic) long assetBId;
@property (nonatomic) int64_t b_uA;
@property (nonatomic) int64_t b_uB;
@property (nonatomic) int64_t b_A_Delta;
@property (nonatomic) int64_t b_B_Delta;
@property (nonatomic) NSString* _Nonnull sk_u;
/**
 * fee part
 */
@property (nonatomic) NSString* _Nonnull c_fee;
@property (nonatomic) int64_t b_fee;
@property (nonatomic) long gasFeeAssetId;
@property (nonatomic) int64_t gasFee;
@end

@interface ZecreyAddLiquidityTxInfo : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped field AddLiquidityTxInfo.PairIndex with unsupported type: uint32

// skipped field AddLiquidityTxInfo.AccountIndex with unsupported type: uint32

// skipped field AddLiquidityTxInfo.AssetAId with unsupported type: uint32

// skipped field AddLiquidityTxInfo.AssetBId with unsupported type: uint32

// skipped field AddLiquidityTxInfo.B_A_Delta with unsupported type: uint64

// skipped field AddLiquidityTxInfo.B_B_Delta with unsupported type: uint64

// skipped field AddLiquidityTxInfo.GasFeeAssetId with unsupported type: uint32

// skipped field AddLiquidityTxInfo.GasFee with unsupported type: uint64

@property (nonatomic) NSString* _Nonnull proof;
@end

@interface ZecreyElGamalEnc : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped field ElGamalEnc.CL with unsupported type: *github.com/consensys/gnark-crypto/ecc/bn254/twistededwards.PointAffine

// skipped field ElGamalEnc.CR with unsupported type: *github.com/consensys/gnark-crypto/ecc/bn254/twistededwards.PointAffine

// skipped method ElGamalEnc.Bytes with unsupported parameter or return types

// skipped method ElGamalEnc.Set with unsupported parameter or return types

- (NSString* _Nonnull)string;
@end

@interface ZecreyPoint : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped field Point.X with unsupported type: github.com/consensys/gnark-crypto/ecc/bn254/fr.Element

// skipped field Point.Y with unsupported type: github.com/consensys/gnark-crypto/ecc/bn254/fr.Element

// skipped method Point.Add with unsupported parameter or return types

// skipped method Point.Bytes with unsupported parameter or return types

// skipped method Point.Double with unsupported parameter or return types

// skipped method Point.Equal with unsupported parameter or return types

// skipped method Point.FromExtended with unsupported parameter or return types

// skipped method Point.FromProj with unsupported parameter or return types

- (BOOL)isOnCurve;
- (BOOL)isZero;
- (NSData* _Nullable)marshal;
// skipped method Point.Neg with unsupported parameter or return types

// skipped method Point.ScalarMul with unsupported parameter or return types

// skipped method Point.Set with unsupported parameter or return types

- (BOOL)setBytes:(NSData* _Nullable)buf ret0_:(long* _Nullable)ret0_ error:(NSError* _Nullable* _Nullable)error;
- (BOOL)unmarshal:(NSData* _Nullable)b error:(NSError* _Nullable* _Nullable)error;
@end

@interface ZecreyRemoveLiquiditySegment : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped field RemoveLiquiditySegment.PairIndex with unsupported type: uint32

// skipped field RemoveLiquiditySegment.AccountIndex with unsupported type: uint32

// skipped field RemoveLiquiditySegment.C_u_LP with unsupported type: *github.com/zecrey-labs/zecrey-crypto/elgamal/twistededwards/tebn254/twistedElgamal.ElGamalEnc

// skipped field RemoveLiquiditySegment.Pk_u with unsupported type: *github.com/consensys/gnark-crypto/ecc/bn254/twistededwards.PointAffine

// skipped field RemoveLiquiditySegment.B_LP with unsupported type: uint64

// skipped field RemoveLiquiditySegment.Delta_LP with unsupported type: uint64

// skipped field RemoveLiquiditySegment.MinB_A_Delta with unsupported type: uint64

// skipped field RemoveLiquiditySegment.MinB_B_Delta with unsupported type: uint64

// skipped field RemoveLiquiditySegment.AssetAId with unsupported type: uint32

// skipped field RemoveLiquiditySegment.AssetBId with unsupported type: uint32

// skipped field RemoveLiquiditySegment.Sk_u with unsupported type: *math/big.Int

// skipped field RemoveLiquiditySegment.C_fee with unsupported type: *github.com/zecrey-labs/zecrey-crypto/elgamal/twistededwards/tebn254/twistedElgamal.ElGamalEnc

// skipped field RemoveLiquiditySegment.B_fee with unsupported type: uint64

// skipped field RemoveLiquiditySegment.GasFeeAssetId with unsupported type: uint32

// skipped field RemoveLiquiditySegment.GasFee with unsupported type: uint64

@end

@interface ZecreyRemoveLiquiditySegmentFormat : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long pairIndex;
@property (nonatomic) long accountIndex;
@property (nonatomic) NSString* _Nonnull c_u_LP;
@property (nonatomic) NSString* _Nonnull pk_u;
@property (nonatomic) int64_t b_LP;
@property (nonatomic) int64_t delta_LP;
@property (nonatomic) int64_t minB_A_Delta;
@property (nonatomic) int64_t minB_B_Delta;
@property (nonatomic) long assetAId;
@property (nonatomic) long assetBId;
@property (nonatomic) NSString* _Nonnull sk_u;
/**
 * fee part
 */
@property (nonatomic) NSString* _Nonnull c_fee;
@property (nonatomic) int64_t b_fee;
@property (nonatomic) long gasFeeAssetId;
@property (nonatomic) int64_t gasFee;
@end

@interface ZecreyRemoveLiquidityTxInfo : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped field RemoveLiquidityTxInfo.PairIndex with unsupported type: uint32

// skipped field RemoveLiquidityTxInfo.AccountIndex with unsupported type: uint32

// skipped field RemoveLiquidityTxInfo.AssetAId with unsupported type: uint32

// skipped field RemoveLiquidityTxInfo.AssetBId with unsupported type: uint32

// skipped field RemoveLiquidityTxInfo.MinB_A_Delta with unsupported type: uint64

// skipped field RemoveLiquidityTxInfo.MinB_B_Delta with unsupported type: uint64

// skipped field RemoveLiquidityTxInfo.Delta_LP with unsupported type: uint64

// skipped field RemoveLiquidityTxInfo.GasFeeAssetId with unsupported type: uint32

// skipped field RemoveLiquidityTxInfo.GasFee with unsupported type: uint64

@property (nonatomic) NSString* _Nonnull proof;
@end

/**
 * 	SwapSegment: which is used to construct swap proof
 */
@interface ZecreySwapSegment : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped field SwapSegment.PairIndex with unsupported type: uint32

// skipped field SwapSegment.AccountIndex with unsupported type: uint32

// skipped field SwapSegment.C_uA with unsupported type: *github.com/zecrey-labs/zecrey-crypto/elgamal/twistededwards/tebn254/twistedElgamal.ElGamalEnc

// skipped field SwapSegment.Pk_u with unsupported type: *github.com/consensys/gnark-crypto/ecc/bn254/twistededwards.PointAffine

// skipped field SwapSegment.Pk_treasury with unsupported type: *github.com/consensys/gnark-crypto/ecc/bn254/twistededwards.PointAffine

// skipped field SwapSegment.AssetAId with unsupported type: uint32

// skipped field SwapSegment.AssetBId with unsupported type: uint32

// skipped field SwapSegment.B_A_Delta with unsupported type: uint64

// skipped field SwapSegment.B_u_A with unsupported type: uint64

// skipped field SwapSegment.MinB_B_Delta with unsupported type: uint64

// skipped field SwapSegment.FeeRate with unsupported type: uint32

// skipped field SwapSegment.TreasuryRate with unsupported type: uint32

// skipped field SwapSegment.Sk_u with unsupported type: *math/big.Int

// skipped field SwapSegment.C_fee with unsupported type: *github.com/zecrey-labs/zecrey-crypto/elgamal/twistededwards/tebn254/twistedElgamal.ElGamalEnc

// skipped field SwapSegment.B_fee with unsupported type: uint64

// skipped field SwapSegment.GasFeeAssetId with unsupported type: uint32

// skipped field SwapSegment.GasFee with unsupported type: uint64

@end

/**
 * 	SwapSegmentFormat: format version of SwapSegment
 */
@interface ZecreySwapSegmentFormat : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
/**
 * pair index
 */
@property (nonatomic) long pairIndex;
/**
 * account index
 */
@property (nonatomic) long accountIndex;
/**
 * encryption of the balance of asset A
 */
@property (nonatomic) NSString* _Nonnull c_uA;
/**
 * user public key
 */
@property (nonatomic) NSString* _Nonnull pk_u;
/**
 * system treasury account public key
 */
@property (nonatomic) NSString* _Nonnull pk_treasury;
/**
 * asset a id
 */
@property (nonatomic) long assetAId;
/**
 * asset b id
 */
@property (nonatomic) long assetBId;
/**
 * swap amount for asset a
 */
@property (nonatomic) int64_t b_A_Delta;
/**
 * balance for asset a
 */
@property (nonatomic) int64_t b_u_A;
/**
 * equal to B * (1 - slippage), B gets from the layer-2
 */
@property (nonatomic) int64_t minB_B_Delta;
/**
 * fee rate, gets from layer-2
 */
@property (nonatomic) long feeRate;
/**
 * treasury rate gets from layer-2
 */
@property (nonatomic) long treasuryRate;
/**
 * private key
 */
@property (nonatomic) NSString* _Nonnull sk_u;
/**
 * fee part
 */
@property (nonatomic) NSString* _Nonnull c_fee;
@property (nonatomic) int64_t b_fee;
@property (nonatomic) long gasFeeAssetId;
@property (nonatomic) int64_t gasFee;
@end

@interface ZecreySwapTxInfo : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped field SwapTxInfo.PairIndex with unsupported type: uint32

// skipped field SwapTxInfo.AccountIndex with unsupported type: uint32

// skipped field SwapTxInfo.AssetAId with unsupported type: uint32

// skipped field SwapTxInfo.AssetBId with unsupported type: uint32

// skipped field SwapTxInfo.GasFeeAssetId with unsupported type: uint32

// skipped field SwapTxInfo.GasFee with unsupported type: uint64

// skipped field SwapTxInfo.FeeRate with unsupported type: uint32

// skipped field SwapTxInfo.TreasuryRate with unsupported type: uint32

// skipped field SwapTxInfo.B_A_Delta with unsupported type: uint64

// skipped field SwapTxInfo.MinB_B_Delta with unsupported type: uint64

/**
 * swap proof
 */
@property (nonatomic) NSString* _Nonnull proof;
@end

@interface ZecreyTransferSegment : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped field TransferSegment.AccountIndex with unsupported type: uint32

// skipped field TransferSegment.BalanceEnc with unsupported type: *github.com/zecrey-labs/zecrey-crypto/elgamal/twistededwards/tebn254/twistedElgamal.ElGamalEnc

// skipped field TransferSegment.Balance with unsupported type: uint64

// skipped field TransferSegment.Pk with unsupported type: *github.com/consensys/gnark-crypto/ecc/bn254/twistededwards.PointAffine

/**
 * bDelta
 */
@property (nonatomic) int64_t bDelta;
// skipped field TransferSegment.Sk with unsupported type: *math/big.Int

@end

/**
 * TransferSegmentFormat Format is used to accept JSON string
 */
@interface ZecreyTransferSegmentFormat : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
/**
 * account index
 */
@property (nonatomic) long accountIndex;
/**
 * ElGamalEnc
 */
@property (nonatomic) NSString* _Nonnull balanceEnc;
/**
 * Balance
 */
@property (nonatomic) int64_t balance;
/**
 * public key
 */
@property (nonatomic) NSString* _Nonnull pk;
/**
 * bDelta
 */
@property (nonatomic) int64_t bDelta;
/**
 * secret key
 */
@property (nonatomic) NSString* _Nonnull sk;
@end

@interface ZecreyTransferTxInfo : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped field TransferTxInfo.AssetId with unsupported type: uint32

// skipped field TransferTxInfo.AccountsIndex with unsupported type: []uint32

// skipped field TransferTxInfo.GasFee with unsupported type: uint64

/**
 * transfer proof
 */
@property (nonatomic) NSString* _Nonnull proof;
/**
 * memo
 */
@property (nonatomic) NSString* _Nonnull memo;
@end

@interface ZecreyUnlockSegment : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped field UnlockSegment.ChainId with unsupported type: uint32

// skipped field UnlockSegment.AccountIndex with unsupported type: uint32

// skipped field UnlockSegment.AssetId with unsupported type: uint32

// skipped field UnlockSegment.Balance with unsupported type: uint64

// skipped field UnlockSegment.DeltaAmount with unsupported type: uint64

// skipped field UnlockSegment.Sk with unsupported type: *math/big.Int

// skipped field UnlockSegment.C_fee with unsupported type: *github.com/zecrey-labs/zecrey-crypto/elgamal/twistededwards/tebn254/twistedElgamal.ElGamalEnc

// skipped field UnlockSegment.B_fee with unsupported type: uint64

// skipped field UnlockSegment.GasFeeAssetId with unsupported type: uint32

// skipped field UnlockSegment.GasFee with unsupported type: uint64

@end

@interface ZecreyUnlockSegmentFormat : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
/**
 * chain id
 */
@property (nonatomic) long chainId;
/**
 * account index
 */
@property (nonatomic) long accountIndex;
/**
 * asset id
 */
@property (nonatomic) long assetId;
/**
 * balance
 */
@property (nonatomic) int64_t balance;
/**
 * unlock amount
 */
@property (nonatomic) int64_t deltaAmount;
/**
 * private key
 */
@property (nonatomic) NSString* _Nonnull sk;
/**
 * fee part
encryption of the balance of the gas fee
 */
@property (nonatomic) NSString* _Nonnull c_fee;
/**
 * gas fee balance
 */
@property (nonatomic) int64_t b_fee;
/**
 * gas fee asset id
 */
@property (nonatomic) long gasFeeAssetId;
/**
 * gas fee
 */
@property (nonatomic) int64_t gasFee;
@end

@interface ZecreyUnlockTxInfo : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped field UnlockTxInfo.ChainId with unsupported type: uint32

// skipped field UnlockTxInfo.AccountIndex with unsupported type: uint32

// skipped field UnlockTxInfo.AssetId with unsupported type: uint32

// skipped field UnlockTxInfo.GasFeeAssetId with unsupported type: uint32

// skipped field UnlockTxInfo.GasFee with unsupported type: uint64

// skipped field UnlockTxInfo.DeltaAmount with unsupported type: uint64

@property (nonatomic) NSString* _Nonnull proof;
@end

/**
 * 	WithdrawSegment: which is used to construct withdraw proof
 */
@interface ZecreyWithdrawSegment : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped field WithdrawSegment.AccountIndex with unsupported type: uint32

// skipped field WithdrawSegment.C with unsupported type: *github.com/zecrey-labs/zecrey-crypto/elgamal/twistededwards/tebn254/twistedElgamal.ElGamalEnc

// skipped field WithdrawSegment.Pk with unsupported type: *github.com/consensys/gnark-crypto/ecc/bn254/twistededwards.PointAffine

// skipped field WithdrawSegment.B with unsupported type: uint64

// skipped field WithdrawSegment.BStar with unsupported type: uint64

// skipped field WithdrawSegment.Sk with unsupported type: *math/big.Int

// skipped field WithdrawSegment.AssetId with unsupported type: uint32

// skipped field WithdrawSegment.ChainId with unsupported type: uint32

@property (nonatomic) NSString* _Nonnull receiveAddr;
// skipped field WithdrawSegment.C_fee with unsupported type: *github.com/zecrey-labs/zecrey-crypto/elgamal/twistededwards/tebn254/twistedElgamal.ElGamalEnc

// skipped field WithdrawSegment.B_fee with unsupported type: uint64

// skipped field WithdrawSegment.GasFeeAssetId with unsupported type: uint32

// skipped field WithdrawSegment.GasFee with unsupported type: uint64

@end

/**
 * 	WithdrawSegmentFormat: format version of WithdrawSegment
 */
@interface ZecreyWithdrawSegmentFormat : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
/**
 * account index
 */
@property (nonatomic) long accountIndex;
/**
 * encryption of the balance
 */
@property (nonatomic) NSString* _Nonnull c;
/**
 * public key
 */
@property (nonatomic) NSString* _Nonnull pk;
/**
 * balance
 */
@property (nonatomic) int64_t b;
/**
 * withdraw amount
 */
@property (nonatomic) int64_t bStar;
/**
 * private key
 */
@property (nonatomic) NSString* _Nonnull sk;
/**
 * asset id
 */
@property (nonatomic) long assetId;
/**
 * chain id
 */
@property (nonatomic) long chainId;
/**
 * receive address
 */
@property (nonatomic) NSString* _Nonnull receiveAddr;
/**
 * fee part
encryption of balance of the gas fee asset
 */
@property (nonatomic) NSString* _Nonnull c_fee;
/**
 * balance of gas fee asset
 */
@property (nonatomic) int64_t b_fee;
/**
 * gas fee asset id
 */
@property (nonatomic) long gasFeeAssetId;
/**
 * gas fee
 */
@property (nonatomic) int64_t gasFee;
@end

@interface ZecreyWithdrawTxInfo : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped field WithdrawTxInfo.ChainId with unsupported type: uint32

// skipped field WithdrawTxInfo.AssetId with unsupported type: uint32

// skipped field WithdrawTxInfo.AccountIndex with unsupported type: uint32

/**
 * L1 address
 */
@property (nonatomic) NSString* _Nonnull receiveAddr;
// skipped field WithdrawTxInfo.BStar with unsupported type: uint64

// skipped field WithdrawTxInfo.GasFeeAssetId with unsupported type: uint32

// skipped field WithdrawTxInfo.GasFee with unsupported type: uint64

/**
 * withdraw proof
 */
@property (nonatomic) NSString* _Nonnull proof;
@end

FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrElGamalDec;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrElGamalEnc;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrInvalidAddLiquidityParams;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrInvalidDecParams;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrInvalidEncParams;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrInvalidRemoveLiquidityParams;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrInvalidSwapParams;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrInvalidSwapRelationParams;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrInvalidTransferParams;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrInvalidTransferRelationParams;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrInvalidUnlockParams;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrInvalidWithdrawParams;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrInvalidWithdrawRelationParams;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrL2SkParams;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrMarshalTx;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrParseBigInt;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrParseEnc;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrParsePoint;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrProveSwap;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrProveTransfer;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrProveUnlock;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrProveWithdraw;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrReplicatedAccounts;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreyErrUnmarshal;
FOUNDATION_EXPORT NSString* _Nonnull const ZecreySuccess;

/**
 * 	ElgamalRawDec: raw dec function for ElGamalEnc
	@CStr: string of encryption value(ElGamalEnc)
	@skStr: string of Sk
 */
FOUNDATION_EXPORT NSString* _Nonnull ZecreyElgamalRawDec(NSString* _Nullable CStr, NSString* _Nullable skStr, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT ZecreyAddLiquiditySegment* _Nullable ZecreyFromAddLiquiditySegmentJSON(NSString* _Nullable segmentStr, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT ZecreyRemoveLiquiditySegment* _Nullable ZecreyFromRemoveLiquiditySegmentJSON(NSString* _Nullable segmentStr, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT ZecreySwapSegment* _Nullable ZecreyFromSwapSegmentJSON(NSString* _Nullable segmentStr, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull ZecreyFromTransferSegmentJSON(NSString* _Nullable segmentStr, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT ZecreyUnlockSegment* _Nullable ZecreyFromUnlockSegmentJSON(NSString* _Nullable segmentStr, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT ZecreyWithdrawSegment* _Nullable ZecreyFromWithdrawSegmentJSON(NSString* _Nullable segmentStr, NSError* _Nullable* _Nullable error);

/**
 * 	GetL2PublicKey: help the user generates the public key
 */
FOUNDATION_EXPORT NSString* _Nonnull ZecreyGetL2PublicKey(NSString* _Nullable skStr, NSError* _Nullable* _Nullable error);

/**
 * 	ProveAddLiquidity: add liquidity
	@segmentInfo: string JSON format
 */
FOUNDATION_EXPORT NSString* _Nonnull ZecreyProveAddLiquidity(NSString* _Nullable segmentInfo, NSError* _Nullable* _Nullable error);

/**
 * 	ProveRemoveLiquidity: remove liquidity
	@segmentInfo: string JSON format
 */
FOUNDATION_EXPORT NSString* _Nonnull ZecreyProveRemoveLiquidity(NSString* _Nullable segmentInfo, NSError* _Nullable* _Nullable error);

/**
 * 	ProveSwap: helper function for the frontend for building swap tx
	@segmentInfo: segmentInfo JSON string
 */
FOUNDATION_EXPORT NSString* _Nonnull ZecreyProveSwap(NSString* _Nullable segmentInfo, NSError* _Nullable* _Nullable error);

/**
 * 	ProveTransfer: prove privacy transfer
	@AssetId: asset id
	@fee: fee
	@segmentInfosStr: string of segmentInfo array, which are used to generate the transfer proof
 */
FOUNDATION_EXPORT NSString* _Nonnull ZecreyProveTransfer(long assetId, int64_t gasFee, NSString* _Nullable memo, NSString* _Nullable segmentInfosStr, NSError* _Nullable* _Nullable error);

/**
 * 	ProveUnlock: prove unlock
	@segmentInfoStr: string of segmentInfo, which is used to generate the unlock proof
 */
FOUNDATION_EXPORT NSString* _Nonnull ZecreyProveUnlock(NSString* _Nullable segmentInfo, NSError* _Nullable* _Nullable error);

/**
 * 	ProveWithdraw: helper function for the frontend for building withdraw tx
	@segmentInfo: segmentInfo JSON string
 */
FOUNDATION_EXPORT NSString* _Nonnull ZecreyProveWithdraw(NSString* _Nullable segmentInfo, NSError* _Nullable* _Nullable error);

#endif
