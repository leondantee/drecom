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

// Function: entry_002f6b58
// Address: 0x2f6b58 - 0x2f6c00
void entry_002f6b58_0x2f6b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6b58_0x2f6b58");
#endif

    switch (ctx->pc) {
        case 0x2f6b64u: goto label_2f6b64;
        case 0x2f6bdcu: goto label_2f6bdc;
        default: break;
    }

    ctx->pc = 0x2f6b58u;

    // 0x2f6b58: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f6b58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f6b5c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6B5Cu;
    SET_GPR_U32(ctx, 31, 0x2F6B64u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6B5Cu, 0x2F6B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B64u;
label_2f6b64:
    // 0x2f6b64: 0x3c0740a0  lui         $a3, 0x40A0
    ctx->pc = 0x2f6b64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6b68: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2f6b68u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6b6c: 0x0  nop
    ctx->pc = 0x2f6b6cu;
    // NOP
    // 0x2f6b70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6b70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6b74: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2f6b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2f6b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f6b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6b7c: 0x0  nop
    ctx->pc = 0x2f6b7cu;
    // NOP
    // 0x2f6b80: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f6b80u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f6b84: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f6b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6b88: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f6b88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f6b8c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f6b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f6b90: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f6b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6b94: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2f6b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6b98: 0x8c8600c4  lw          $a2, 0xC4($a0)
    ctx->pc = 0x2f6b98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f6b9c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2f6b9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2f6ba0: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x2f6ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2f6ba4: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2f6ba4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2f6ba8: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2f6ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6bac: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2f6bacu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f6bb0: 0x8c4900c4  lw          $t1, 0xC4($v0)
    ctx->pc = 0x2f6bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2f6bb4: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2f6bb4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f6bb8: 0x240a000e  addiu       $t2, $zero, 0xE
    ctx->pc = 0x2f6bb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2f6bbc: 0x71404628  paddub      $t0, $t2, $zero
    ctx->pc = 0x2f6bbcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f6bc0: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2f6bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6bc4: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2f6bc4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f6bc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f6bc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f6bcc: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f6bccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6bd0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f6bd0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6bd4: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F6BD4u;
    SET_GPR_U32(ctx, 31, 0x2F6BDCu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F6BD4u, 0x2F6BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6BDCu;
label_2f6bdc:
    // 0x2f6bdc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f6bdcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f6be0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2f6be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f6be4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6be8: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f6be8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6bec: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f6becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6bf0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6bf4: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f6bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6bf8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2F6BF8u;
    {
        const bool branch_taken_0x2f6bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6bf8) {
            ctx->pc = 0x2F6CA0u;
            return;
        }
    }
    ctx->pc = 0x2F6C00u;
}
