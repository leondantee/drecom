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

// Function: entry_00213c20
// Address: 0x213c20 - 0x213c34
void entry_00213c20_0x213c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213c20_0x213c20");
#endif

    switch (ctx->pc) {
        case 0x213c28u: goto label_213c28;
        default: break;
    }

    ctx->pc = 0x213c20u;

    // 0x213c20: 0xc084b94  jal         func_212E50
    ctx->pc = 0x213C20u;
    SET_GPR_U32(ctx, 31, 0x213C28u);
    ctx->pc = 0x213C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213C20u;
    // 0x213c24: 0x2404fff8  addiu       $a0, $zero, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E50u;
    {
        ctx->pc = 0x213C28u;
        ps2_syscalls::Deci2Call(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213C28u) { return; }
    ctx->pc = 0x213C28u;
label_213c28:
    // 0x213c28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x213c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x213C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C2Cu;
        // 0x213c30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213C34u;
}
