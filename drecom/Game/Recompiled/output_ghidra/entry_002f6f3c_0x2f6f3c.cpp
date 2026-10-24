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

// Function: entry_002f6f3c
// Address: 0x2f6f3c - 0x2f6fcc
void entry_002f6f3c_0x2f6f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6f3c_0x2f6f3c");
#endif

    switch (ctx->pc) {
        case 0x2f6f44u: goto label_2f6f44;
        case 0x2f6fa8u: goto label_2f6fa8;
        default: break;
    }

    ctx->pc = 0x2f6f3cu;

    // 0x2f6f3c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6F3Cu;
    SET_GPR_U32(ctx, 31, 0x2F6F44u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6F3Cu, 0x2F6F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6F44u;
label_2f6f44:
    // 0x2f6f44: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2f6f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6f48: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f6f48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6f4c: 0x0  nop
    ctx->pc = 0x2f6f4cu;
    // NOP
    // 0x2f6f50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6f50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6f54: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2f6f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x2f6f58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f6f58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6f5c: 0x0  nop
    ctx->pc = 0x2f6f5cu;
    // NOP
    // 0x2f6f60: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f6f60u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f6f64: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f6f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f6f68: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f6f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6f6c: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2f6f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6f70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f6f70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f6f74: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f6f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6f78: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f6f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f6f7c: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f6f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f6f80: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2f6f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f6f84: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2f6f84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2f6f88: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f6f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6f8c: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f6f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f6f90: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2f6f90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f6f94: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f6f94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6f98: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f6f98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6f9c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f6f9cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6fa0: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F6FA0u;
    SET_GPR_U32(ctx, 31, 0x2F6FA8u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F6FA0u, 0x2F6FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6FA8u;
label_2f6fa8:
    // 0x2f6fa8: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2f6fa8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f6fac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2f6facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f6fb0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6fb4: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f6fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6fb8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f6fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6fbc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6fc0: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f6fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6fc4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2F6FC4u;
    {
        const bool branch_taken_0x2f6fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6fc4) {
            ctx->pc = 0x2F706Cu;
            return;
        }
    }
    ctx->pc = 0x2F6FCCu;
}
