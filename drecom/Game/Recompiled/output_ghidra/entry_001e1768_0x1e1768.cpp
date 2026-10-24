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

// Function: entry_001e1768
// Address: 0x1e1768 - 0x1e17a8
void entry_001e1768_0x1e1768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1768_0x1e1768");
#endif

    switch (ctx->pc) {
        case 0x1e1798u: goto label_1e1798;
        default: break;
    }

    ctx->pc = 0x1e1768u;

    // 0x1e1768: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e1768u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e176c: 0x0  nop
    ctx->pc = 0x1e176cu;
    // NOP
    // 0x1e1770: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1E1770u;
    {
        const bool branch_taken_0x1e1770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1770) {
            ctx->pc = 0x1E17A8u;
            return;
        }
    }
    ctx->pc = 0x1E1778u;
    // 0x1e1778: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e1778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e177c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1e177cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1e1780: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e1780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e1784: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e1784u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e1788: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e1788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e178c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1e178cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e1790: 0xc077fc8  jal         func_1DFF20
    ctx->pc = 0x1E1790u;
    SET_GPR_U32(ctx, 31, 0x1E1798u);
    ctx->pc = 0x1DFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF20u, 0x1E1790u, 0x1E1798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1798u;
label_1e1798:
    // 0x1e1798: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e1798u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1e179c: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e179cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e17a0: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x1E17A0u;
    {
        const bool branch_taken_0x1e17a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e17a0) {
            ctx->pc = 0x1E1A00u;
            return;
        }
    }
    ctx->pc = 0x1E17A8u;
}
