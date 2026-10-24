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

// Function: default
// Address: 0x12d184 - 0x12d224
void ps2_default_0x12d184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x12d184");
#endif

    switch (ctx->pc) {
        case 0x12d1a8u: goto label_12d1a8;
        case 0x12d1ecu: goto label_12d1ec;
        case 0x12d204u: goto label_12d204;
        case 0x12d220u: goto label_12d220;
        default: break;
    }

    ctx->pc = 0x12d184u;

    // 0x12d184: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x12d184u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d188: 0x910309df  lbu         $v1, 0x9DF($t0)
    ctx->pc = 0x12d188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2527)));
    // 0x12d18c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x12d18cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12d190: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x12d190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x12d194: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x12D194u;
    {
        const bool branch_taken_0x12d194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d194) {
            ctx->pc = 0x12D224u;
            return;
        }
    }
    ctx->pc = 0x12D19Cu;
    // 0x12d19c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12d19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12d1a0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12D1A0u;
    SET_GPR_U32(ctx, 31, 0x12D1A8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12D1A0u, 0x12D1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D1A8u;
label_12d1a8:
    // 0x12d1a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d1ac: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x12d1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12d1b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12d1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12d1b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12d1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12d1b8: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x12d1b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x12d1bc: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x12d1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x12d1c0: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x12d1c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12d1c4: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x12d1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x12d1c8: 0x34640106  ori         $a0, $v1, 0x106
    ctx->pc = 0x12d1c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)262);
    // 0x12d1cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d1d0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12d1d4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x12d1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12d1d8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12d1d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d1dc: 0x24470580  addiu       $a3, $v0, 0x580
    ctx->pc = 0x12d1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x12d1e0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12d1e0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d1e4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x12D1E4u;
    SET_GPR_U32(ctx, 31, 0x12D1ECu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12D1E4u, 0x12D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D1ECu;
label_12d1ec:
    // 0x12d1ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d1ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12d1f0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x12d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x12d1f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d1f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12d1f8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x12d1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x12d1fc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x12D1FCu;
    SET_GPR_U32(ctx, 31, 0x12D204u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12D1FCu, 0x12D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D204u;
label_12d204:
    // 0x12d204: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d204u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12d208: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x12d208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x12d20c: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x12d20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x12d210: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d210u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12d214: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x12d214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x12d218: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x12D218u;
    SET_GPR_U32(ctx, 31, 0x12D220u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12D218u, 0x12D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D220u;
label_12d220:
    // 0x12d220: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x12d220u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x12d224u;
}
