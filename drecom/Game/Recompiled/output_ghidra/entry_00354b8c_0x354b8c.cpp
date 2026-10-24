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

// Function: entry_00354b8c
// Address: 0x354b8c - 0x354c00
void entry_00354b8c_0x354b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00354b8c_0x354b8c");
#endif

    switch (ctx->pc) {
        case 0x354bd0u: goto label_354bd0;
        case 0x354be4u: goto label_354be4;
        case 0x354bfcu: goto label_354bfc;
        default: break;
    }

    ctx->pc = 0x354b8cu;

    // 0x354b8c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x354b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354b90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x354b90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x354b94: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x354b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x354b98: 0x12283c  dsll32      $a1, $s2, 0
    ctx->pc = 0x354b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 0));
    // 0x354b9c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x354b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x354ba0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x354ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x354ba4: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x354ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x354ba8: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x354ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x354bac: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x354bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x354bb0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x354bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x354bb4: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x354bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x354bb8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x354bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x354bbc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x354bbcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x354bc0: 0x8e470130  lw          $a3, 0x130($s2)
    ctx->pc = 0x354bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x354bc4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x354bc4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x354bc8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x354BC8u;
    SET_GPR_U32(ctx, 31, 0x354BD0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x354BC8u, 0x354BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354BD0u;
label_354bd0:
    // 0x354bd0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x354bd0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x354bd4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x354bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x354bd8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x354bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x354bdc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x354BDCu;
    SET_GPR_U32(ctx, 31, 0x354BE4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x354BDCu, 0x354BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354BE4u;
label_354be4:
    // 0x354be4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x354be4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x354be8: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x354be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x354bec: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x354becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x354bf0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x354bf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x354bf4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x354BF4u;
    SET_GPR_U32(ctx, 31, 0x354BFCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x354BF4u, 0x354BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354BFCu;
label_354bfc:
    // 0x354bfc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x354bfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x354c00u;
}
