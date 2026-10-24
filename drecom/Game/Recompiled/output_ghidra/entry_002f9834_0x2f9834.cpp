#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_002f9834
// Address: 0x2f9834 - 0x2f9b84
void entry_002f9834_0x2f9834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f9834_0x2f9834");
#endif

    switch (ctx->pc) {
        case 0x2f9938u: goto label_2f9938;
        case 0x2f9944u: goto label_2f9944;
        case 0x2f9a58u: goto label_2f9a58;
        case 0x2f9a64u: goto label_2f9a64;
        case 0x2f9b70u: goto label_2f9b70;
        case 0x2f9b80u: goto label_2f9b80;
        default: break;
    }

    ctx->pc = 0x2f9834u;

    // 0x2f9834: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9838: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2f9838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f983c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2f983cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f9840: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f9840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f9844: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2f9844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f9848: 0x34441d00  ori         $a0, $v0, 0x1D00
    ctx->pc = 0x2f9848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7424);
    // 0x2f984c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f984cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f9850: 0x24428ff0  addiu       $v0, $v0, -0x7010
    ctx->pc = 0x2f9850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938608));
    // 0x2f9854: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f9854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9858: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f9858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f985c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f985cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9860: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f9860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f9864: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f9864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9868: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f9868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f986c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f986cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9870: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f9870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f9874: 0x24428ff0  addiu       $v0, $v0, -0x7010
    ctx->pc = 0x2f9874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938608));
    // 0x2f9878: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f9878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f987c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f987cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f9880: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9884: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f9884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f9888: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f9888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f988c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2f988cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f9890: 0xa71825  or          $v1, $a1, $a3
    ctx->pc = 0x2f9890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x2f9894: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2f9894u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x2f9898: 0x24c2dbc0  addiu       $v0, $a2, -0x2440
    ctx->pc = 0x2f9898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958016));
    // 0x2f989c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f989cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f98a0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f98a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f98a4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2f98a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f98a8: 0x53438  dsll        $a2, $a1, 16
    ctx->pc = 0x2f98a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 16);
    // 0x2f98ac: 0x34c5ffff  ori         $a1, $a2, 0xFFFF
    ctx->pc = 0x2f98acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2f98b0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2f98b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2f98b4: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2f98b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f98b8: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2f98b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x2f98bc: 0x24c2dbc0  addiu       $v0, $a2, -0x2440
    ctx->pc = 0x2f98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958016));
    // 0x2f98c0: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f98c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f98c4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2f98c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2f98c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f98c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f98cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f98ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f98d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f98d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f98d4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2f98d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2f98d8: 0xe23025  or          $a2, $a3, $v0
    ctx->pc = 0x2f98d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2f98dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f98dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f98e0: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f98e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f98e4: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x2f98e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2f98e8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f98e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f98ec: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2f98ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2f98f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f98f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f98f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f98f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f98f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f98f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f98fc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2f98fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2f9900: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x2f9900u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9904: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f9904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f9908: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f9908u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f990c: 0x24480180  addiu       $t0, $v0, 0x180
    ctx->pc = 0x2f990cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2f9910: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x2f9910u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2f9914: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2f9914u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2f9918: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f991c: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x2f991cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
    // 0x2f9920: 0x34a2ffff  ori         $v0, $a1, 0xFFFF
    ctx->pc = 0x2f9920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2f9924: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2f9924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2f9928: 0x1223825  or          $a3, $t1, $v0
    ctx->pc = 0x2f9928u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x2f992c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2f992cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2f9930: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2F9930u;
    SET_GPR_U32(ctx, 31, 0x2F9938u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2F9930u, 0x2F9938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9938u;
label_2f9938:
    // 0x2f9938: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f9938u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f993c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2F993Cu;
    SET_GPR_U32(ctx, 31, 0x2F9944u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2F993Cu, 0x2F9944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9944u;
label_2f9944:
    // 0x2f9944: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f9944u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9948: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f994c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2f994cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f9950: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2f9950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2f9954: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f9954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f9958: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2f9958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f995c: 0x34481d00  ori         $t0, $v0, 0x1D00
    ctx->pc = 0x2f995cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7424);
    // 0x2f9960: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f9960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f9964: 0x24468ff0  addiu       $a2, $v0, -0x7010
    ctx->pc = 0x2f9964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938608));
    // 0x2f9968: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x2f9968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2f996c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f996cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f9970: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9974: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x2f9974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x2f9978: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x2f9978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2f997c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f997cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f9980: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f9980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9984: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x2f9984u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x2f9988: 0x24e28ff0  addiu       $v0, $a3, -0x7010
    ctx->pc = 0x2f9988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938608));
    // 0x2f998c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2f998cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9990: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2f9990u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2f9994: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9998: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f9998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f999c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x2f999cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f99a0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2f99a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2f99a4: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2f99a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2f99a8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2f99a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2f99ac: 0x24a5dbc0  addiu       $a1, $a1, -0x2440
    ctx->pc = 0x2f99acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958016));
    // 0x2f99b0: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x2f99b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2f99b4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2f99b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2f99b8: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2f99b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f99bc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2f99bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2f99c0: 0x34a2ffff  ori         $v0, $a1, 0xFFFF
    ctx->pc = 0x2f99c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2f99c4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2f99c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2f99c8: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x2f99c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f99cc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f99ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f99d0: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x2f99d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f99d4: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2f99d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f99d8: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2f99d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2f99dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f99dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f99e0: 0x23438  dsll        $a2, $v0, 16
    ctx->pc = 0x2f99e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 16);
    // 0x2f99e4: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x2f99e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2f99e8: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2f99e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2f99ec: 0x1225825  or          $t3, $t1, $v0
    ctx->pc = 0x2f99ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x2f99f0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f99f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f99f4: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f99f8: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x2f99f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x2f99fc: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x2f99fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9a00: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x2f9a00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x2f9a04: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2f9a04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9a08: 0x73438  dsll        $a2, $a3, 16
    ctx->pc = 0x2f9a08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << 16);
    // 0x2f9a0c: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x2f9a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2f9a10: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x2f9a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x2f9a14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f9a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9a18: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f9a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f9a1c: 0x8c27dcf0  lw          $a3, -0x2310($at)
    ctx->pc = 0x2f9a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f9a20: 0x24e701c0  addiu       $a3, $a3, 0x1C0
    ctx->pc = 0x2f9a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 448));
    // 0x2f9a24: 0x7483c  dsll32      $t1, $a3, 0
    ctx->pc = 0x2f9a24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2f9a28: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x2f9a28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x2f9a2c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2f9a2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9a30: 0x75438  dsll        $t2, $a3, 16
    ctx->pc = 0x2f9a30u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) << 16);
    // 0x2f9a34: 0x3547ffff  ori         $a3, $t2, 0xFFFF
    ctx->pc = 0x2f9a34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x2f9a38: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x2f9a38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x2f9a3c: 0x474825  or          $t1, $v0, $a3
    ctx->pc = 0x2f9a3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2f9a40: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2f9a40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f9a44: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2f9a44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2f9a48: 0x71603628  paddub      $a2, $t3, $zero
    ctx->pc = 0x2f9a48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x2f9a4c: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2f9a4cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f9a50: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2F9A50u;
    SET_GPR_U32(ctx, 31, 0x2F9A58u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2F9A50u, 0x2F9A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9A58u;
label_2f9a58:
    // 0x2f9a58: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f9a58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9a5c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2F9A5Cu;
    SET_GPR_U32(ctx, 31, 0x2F9A64u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2F9A5Cu, 0x2F9A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9A64u;
label_2f9a64:
    // 0x2f9a64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9a68: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2f9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f9a6c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2f9a6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9a70: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2f9a70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2f9a74: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2f9a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2f9a78: 0x34421d00  ori         $v0, $v0, 0x1D00
    ctx->pc = 0x2f9a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7424);
    // 0x2f9a7c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2f9a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2f9a80: 0x24668ff0  addiu       $a2, $v1, -0x7010
    ctx->pc = 0x2f9a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938608));
    // 0x2f9a84: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2f9a84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2f9a88: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2f9a88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2f9a8c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2f9a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9a90: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2f9a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x2f9a94: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x2f9a94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2f9a98: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x2f9a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x2f9a9c: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x2f9a9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f9aa0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2f9aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2f9aa4: 0x24638ff0  addiu       $v1, $v1, -0x7010
    ctx->pc = 0x2f9aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938608));
    // 0x2f9aa8: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2f9aa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f9aac: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2f9aacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2f9ab0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2f9ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9ab4: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x2f9ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x2f9ab8: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x2f9ab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2f9abc: 0xe61824  and         $v1, $a3, $a2
    ctx->pc = 0x2f9abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x2f9ac0: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x2f9ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x2f9ac4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2f9ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2f9ac8: 0x24e6dbc0  addiu       $a2, $a3, -0x2440
    ctx->pc = 0x2f9ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958016));
    // 0x2f9acc: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x2f9accu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2f9ad0: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2f9ad0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2f9ad4: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2f9ad4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9ad8: 0x62c38  dsll        $a1, $a2, 16
    ctx->pc = 0x2f9ad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << 16);
    // 0x2f9adc: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x2f9adcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2f9ae0: 0x1063824  and         $a3, $t0, $a2
    ctx->pc = 0x2f9ae0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x2f9ae4: 0x7483c  dsll32      $t1, $a3, 0
    ctx->pc = 0x2f9ae4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2f9ae8: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2f9ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x2f9aec: 0x24c6dbc0  addiu       $a2, $a2, -0x2440
    ctx->pc = 0x2f9aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958016));
    // 0x2f9af0: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x2f9af0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2f9af4: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2f9af4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2f9af8: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2f9af8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9afc: 0x63c38  dsll        $a3, $a2, 16
    ctx->pc = 0x2f9afcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << 16);
    // 0x2f9b00: 0x34e6ffff  ori         $a2, $a3, 0xFFFF
    ctx->pc = 0x2f9b00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2f9b04: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x2f9b04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x2f9b08: 0x1266025  or          $t4, $t1, $a2
    ctx->pc = 0x2f9b08u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x2f9b0c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f9b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f9b10: 0x8c26dcf0  lw          $a2, -0x2310($at)
    ctx->pc = 0x2f9b10u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f9b14: 0x24c60200  addiu       $a2, $a2, 0x200
    ctx->pc = 0x2f9b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x2f9b18: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x2f9b18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2f9b1c: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2f9b1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2f9b20: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2f9b20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9b24: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2f9b24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2f9b28: 0x34c7ffff  ori         $a3, $a2, 0xFFFF
    ctx->pc = 0x2f9b28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2f9b2c: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x2f9b2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x2f9b30: 0x7583c  dsll32      $t3, $a3, 0
    ctx->pc = 0x2f9b30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2f9b34: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f9b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f9b38: 0x8c27dcf0  lw          $a3, -0x2310($at)
    ctx->pc = 0x2f9b38u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f9b3c: 0x24e80200  addiu       $t0, $a3, 0x200
    ctx->pc = 0x2f9b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
    // 0x2f9b40: 0x8503c  dsll32      $t2, $t0, 0
    ctx->pc = 0x2f9b40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2f9b44: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x2f9b44u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
    // 0x2f9b48: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x2f9b48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9b4c: 0x84c38  dsll        $t1, $t0, 16
    ctx->pc = 0x2f9b4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << 16);
    // 0x2f9b50: 0x3527ffff  ori         $a3, $t1, 0xFFFF
    ctx->pc = 0x2f9b50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x2f9b54: 0x1473824  and         $a3, $t2, $a3
    ctx->pc = 0x2f9b54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x2f9b58: 0x1673825  or          $a3, $t3, $a3
    ctx->pc = 0x2f9b58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) | GPR_U64(ctx, 7));
    // 0x2f9b5c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f9b5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9b60: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2f9b60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2f9b64: 0x71803628  paddub      $a2, $t4, $zero
    ctx->pc = 0x2f9b64u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x2f9b68: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2F9B68u;
    SET_GPR_U32(ctx, 31, 0x2F9B70u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2F9B68u, 0x2F9B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B70u;
label_2f9b70:
    // 0x2f9b70: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f9b70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9b74: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2f9b74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2f9b78: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2F9B78u;
    SET_GPR_U32(ctx, 31, 0x2F9B80u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2F9B78u, 0x2F9B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B80u;
label_2f9b80:
    // 0x2f9b80: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f9b80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2f9b84u;
}
