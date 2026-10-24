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

// Function: entry_0030f420
// Address: 0x30f420 - 0x30f48c
void entry_0030f420_0x30f420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030f420_0x30f420");
#endif

    switch (ctx->pc) {
        case 0x30f468u: goto label_30f468;
        case 0x30f488u: goto label_30f488;
        default: break;
    }

    ctx->pc = 0x30f420u;

    // 0x30f420: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x30f420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f424: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30f424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30f428: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30f428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30f42c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30f42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30f430: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x30f430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x30f434: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x30f434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x30f438: 0x653024  and         $a2, $v1, $a1
    ctx->pc = 0x30f438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x30f43c: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x30f43cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30f440: 0x34e8020c  ori         $t0, $a3, 0x20C
    ctx->pc = 0x30f440u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)524);
    // 0x30f444: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x30f444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x30f448: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x30f448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x30f44c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x30f44cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x30f450: 0x244501c0  addiu       $a1, $v0, 0x1C0
    ctx->pc = 0x30f450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x30f454: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x30f454u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30f458: 0x72603e28  paddub      $a3, $s3, $zero
    ctx->pc = 0x30f458u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x30f45c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x30f45cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30f460: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x30F460u;
    SET_GPR_U32(ctx, 31, 0x30F468u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x30F460u, 0x30F468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F468u;
label_30f468:
    // 0x30f468: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30f468u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f46c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x30f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x30f470: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x30f470u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30f474: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x30f474u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30f478: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30f478u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30f47c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x30f47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30f480: 0xc0561d4  jal         func_158750
    ctx->pc = 0x30F480u;
    SET_GPR_U32(ctx, 31, 0x30F488u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x30F480u, 0x30F488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F488u;
label_30f488:
    // 0x30f488: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x30f488u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x30f48cu;
}
