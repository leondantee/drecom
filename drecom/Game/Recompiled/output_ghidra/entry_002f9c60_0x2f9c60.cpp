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

// Function: entry_002f9c60
// Address: 0x2f9c60 - 0x2f9d00
void entry_002f9c60_0x2f9c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f9c60_0x2f9c60");
#endif

    switch (ctx->pc) {
        case 0x2f9cc8u: goto label_2f9cc8;
        case 0x2f9cd4u: goto label_2f9cd4;
        default: break;
    }

    ctx->pc = 0x2f9c60u;

    // 0x2f9c60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9c64: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2f9c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f9c68: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2f9c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2f9c6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f9c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9c70: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f9c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f9c74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f9c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f9c78: 0x34470300  ori         $a3, $v0, 0x300
    ctx->pc = 0x2f9c78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2f9c7c: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2f9c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2f9c80: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f9c80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f9c84: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2f9c84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f9c88: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f9c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f9c8c: 0x8c26dcf0  lw          $a2, -0x2310($at)
    ctx->pc = 0x2f9c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f9c90: 0x24c20200  addiu       $v0, $a2, 0x200
    ctx->pc = 0x2f9c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x2f9c94: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f9c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9c98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f9c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f9c9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9ca0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f9ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f9ca4: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x2f9ca4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9ca8: 0x663824  and         $a3, $v1, $a2
    ctx->pc = 0x2f9ca8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2f9cac: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2f9cacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f9cb0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f9cb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f9cb4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f9cb8: 0x24488ff0  addiu       $t0, $v0, -0x7010
    ctx->pc = 0x2f9cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938608));
    // 0x2f9cbc: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2f9cbcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f9cc0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F9CC0u;
    SET_GPR_U32(ctx, 31, 0x2F9CC8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F9CC0u, 0x2F9CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9CC8u;
label_2f9cc8:
    // 0x2f9cc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f9cc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9ccc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F9CCCu;
    SET_GPR_U32(ctx, 31, 0x2F9CD4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F9CCCu, 0x2F9CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9CD4u;
label_2f9cd4:
    // 0x2f9cd4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f9cd4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9cd8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f9cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f9cdc: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f9cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f9ce0: 0x12030007  beq         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9CE0u;
    {
        const bool branch_taken_0x2f9ce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f9ce0) {
            ctx->pc = 0x2F9D00u;
            return;
        }
    }
    ctx->pc = 0x2F9CE8u;
    // 0x2f9ce8: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x2f9ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f9cec: 0x3c084220  lui         $t0, 0x4220
    ctx->pc = 0x2f9cecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16928 << 16));
    // 0x2f9cf0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f9cf0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9cf4: 0x0  nop
    ctx->pc = 0x2f9cf4u;
    // NOP
    // 0x2f9cf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f9cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f9cfc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2f9cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->pc = 0x2f9d00u;
}
