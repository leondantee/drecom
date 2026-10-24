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

// Function: kputs
// Address: 0x213c60 - 0x213c84
void kputs_0x213c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kputs_0x213c60");
#endif

    switch (ctx->pc) {
        case 0x213c78u: goto label_213c78;
        default: break;
    }

    ctx->pc = 0x213c60u;

    // 0x213c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x213c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x213c64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x213c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x213c68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x213c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x213c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x213c70: 0xc084b94  jal         func_212E50
    ctx->pc = 0x213C70u;
    SET_GPR_U32(ctx, 31, 0x213C78u);
    ctx->pc = 0x213C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213C70u;
    // 0x213c74: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E50u;
    {
        ctx->pc = 0x213C78u;
        ps2_syscalls::Deci2Call(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213C78u) { return; }
    ctx->pc = 0x213C78u;
label_213c78:
    // 0x213c78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x213c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x213C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C7Cu;
        // 0x213c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213C84u;
}
