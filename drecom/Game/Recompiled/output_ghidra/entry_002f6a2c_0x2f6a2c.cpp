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

// Function: entry_002f6a2c
// Address: 0x2f6a2c - 0x2f6ab8
void entry_002f6a2c_0x2f6a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6a2c_0x2f6a2c");
#endif

    switch (ctx->pc) {
        case 0x2f6a34u: goto label_2f6a34;
        case 0x2f6a94u: goto label_2f6a94;
        default: break;
    }

    ctx->pc = 0x2f6a2cu;

    // 0x2f6a2c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6A2Cu;
    SET_GPR_U32(ctx, 31, 0x2F6A34u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6A2Cu, 0x2F6A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6A34u;
label_2f6a34:
    // 0x2f6a34: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f6a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6a38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f6a38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6a3c: 0x0  nop
    ctx->pc = 0x2f6a3cu;
    // NOP
    // 0x2f6a40: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6a40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6a44: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2f6a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x2f6a48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f6a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6a4c: 0x0  nop
    ctx->pc = 0x2f6a4cu;
    // NOP
    // 0x2f6a50: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f6a50u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f6a54: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x2f6a54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6a58: 0x44887000  mtc1        $t0, $f14
    ctx->pc = 0x2f6a58u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f6a5c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f6a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f6a60: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f6a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6a64: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6a68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f6a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f6a6c: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f6a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f6a70: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2f6a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f6a74: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f6a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6a78: 0x8c6700c4  lw          $a3, 0xC4($v1)
    ctx->pc = 0x2f6a78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f6a7c: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x2f6a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f6a80: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f6a80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6a84: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f6a84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6a88: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f6a88u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6a8c: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F6A8Cu;
    SET_GPR_U32(ctx, 31, 0x2F6A94u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F6A8Cu, 0x2F6A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6A94u;
label_2f6a94:
    // 0x2f6a94: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f6a94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f6a98: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2f6a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f6a9c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6aa0: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f6aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6aa4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f6aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6aa8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6aac: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f6aacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6ab0: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x2F6AB0u;
    {
        const bool branch_taken_0x2f6ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6ab0) {
            ctx->pc = 0x2F6CA0u;
            return;
        }
    }
    ctx->pc = 0x2F6AB8u;
}
