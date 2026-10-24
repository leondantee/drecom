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

// Function: entry_00214b74
// Address: 0x214b74 - 0x214b88
void entry_00214b74_0x214b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214b74_0x214b74");
#endif

    switch (ctx->pc) {
        case 0x214b7cu: goto label_214b7c;
        default: break;
    }

    ctx->pc = 0x214b74u;

    // 0x214b74: 0xc085162  jal         func_214588
    ctx->pc = 0x214B74u;
    SET_GPR_U32(ctx, 31, 0x214B7Cu);
    ctx->pc = 0x214B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214B74u;
    // 0x214b78: 0xffab0088  sd          $t3, 0x88($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214588u, 0x214B74u, 0x214B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214B7Cu;
label_214b7c:
    // 0x214b7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214b80: 0x3e00008  jr          $ra
    ctx->pc = 0x214B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B80u;
        // 0x214b84: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214B88u;
}
