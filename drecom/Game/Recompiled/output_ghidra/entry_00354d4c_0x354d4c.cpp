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

// Function: entry_00354d4c
// Address: 0x354d4c - 0x354dcc
void entry_00354d4c_0x354d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00354d4c_0x354d4c");
#endif

    switch (ctx->pc) {
        case 0x354d98u: goto label_354d98;
        case 0x354dacu: goto label_354dac;
        case 0x354dc0u: goto label_354dc0;
        default: break;
    }

    ctx->pc = 0x354d4cu;

    // 0x354d4c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x354d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354d50: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x354d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x354d54: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x354d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x354d58: 0x12383c  dsll32      $a3, $s2, 0
    ctx->pc = 0x354d58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 0));
    // 0x354d5c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x354d5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x354d60: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x354d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x354d64: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x354d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x354d68: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x354d68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x354d6c: 0xe63824  and         $a3, $a3, $a2
    ctx->pc = 0x354d6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x354d70: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x354d70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x354d74: 0x35020006  ori         $v0, $t0, 0x6
    ctx->pc = 0x354d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)6);
    // 0x354d78: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x354d78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x354d7c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x354d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x354d80: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x354d80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x354d84: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x354d84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x354d88: 0x8e470130  lw          $a3, 0x130($s2)
    ctx->pc = 0x354d88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x354d8c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x354d8cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x354d90: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x354D90u;
    SET_GPR_U32(ctx, 31, 0x354D98u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x354D90u, 0x354D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354D98u;
label_354d98:
    // 0x354d98: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x354d98u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x354d9c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x354d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x354da0: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x354da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x354da4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x354DA4u;
    SET_GPR_U32(ctx, 31, 0x354DACu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x354DA4u, 0x354DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354DACu;
label_354dac:
    // 0x354dac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x354dacu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x354db0: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x354db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x354db4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x354db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x354db8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x354DB8u;
    SET_GPR_U32(ctx, 31, 0x354DC0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x354DB8u, 0x354DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354DC0u;
label_354dc0:
    // 0x354dc0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x354dc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x354dc4: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x354DC4u;
    {
        const bool branch_taken_0x354dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354dc4) {
            ctx->pc = 0x355010u;
            return;
        }
    }
    ctx->pc = 0x354DCCu;
}
