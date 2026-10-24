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

// Function: entry_00213bc8
// Address: 0x213bc8 - 0x213bdc
void entry_00213bc8_0x213bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213bc8_0x213bc8");
#endif

    switch (ctx->pc) {
        case 0x213bd0u: goto label_213bd0;
        default: break;
    }

    ctx->pc = 0x213bc8u;

    // 0x213bc8: 0xc084b94  jal         func_212E50
    ctx->pc = 0x213BC8u;
    SET_GPR_U32(ctx, 31, 0x213BD0u);
    ctx->pc = 0x213BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213BC8u;
    // 0x213bcc: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E50u;
    {
        ctx->pc = 0x213BD0u;
        ps2_syscalls::Deci2Call(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213BD0u) { return; }
    ctx->pc = 0x213BD0u;
label_213bd0:
    // 0x213bd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x213bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x213BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213BD4u;
        // 0x213bd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213BDCu;
}
