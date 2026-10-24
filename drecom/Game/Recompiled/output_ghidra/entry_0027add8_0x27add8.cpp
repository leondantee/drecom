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

// Function: entry_0027add8
// Address: 0x27add8 - 0x27ae1c
void entry_0027add8_0x27add8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027add8_0x27add8");
#endif

    switch (ctx->pc) {
        case 0x27adf4u: goto label_27adf4;
        case 0x27ae00u: goto label_27ae00;
        default: break;
    }

    ctx->pc = 0x27add8u;

    // 0x27add8: 0x2e020118  sltiu       $v0, $s0, 0x118
    ctx->pc = 0x27add8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)280) ? 1 : 0);
    // 0x27addc: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x27ADDCu;
    {
        const bool branch_taken_0x27addc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27addc) {
            ctx->pc = 0x27AD44u;
            return;
        }
    }
    ctx->pc = 0x27ADE4u;
    // 0x27ade4: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x27ade4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x27ade8: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x27ade8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x27adec: 0xc084964  jal         func_212590
    ctx->pc = 0x27ADECu;
    SET_GPR_U32(ctx, 31, 0x27ADF4u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27ADECu, 0x27ADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ADF4u;
label_27adf4:
    // 0x27adf4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x27adf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x27adf8: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27ADF8u;
    SET_GPR_U32(ctx, 31, 0x27AE00u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27ADF8u, 0x27AE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE00u;
label_27ae00:
    // 0x27ae00: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x27ae00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ae04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27ae04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ae08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27ae08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ae0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ae0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ae10: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27ae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27ae14: 0x3e00008  jr          $ra
    ctx->pc = 0x27AE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AE1Cu;
}
