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

// Function: entry_002164fc
// Address: 0x2164fc - 0x216514
void entry_002164fc_0x2164fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002164fc_0x2164fc");
#endif

    switch (ctx->pc) {
        case 0x216504u: goto label_216504;
        default: break;
    }

    ctx->pc = 0x2164fcu;

    // 0x2164fc: 0xc046314  jal         func_118C50
    ctx->pc = 0x2164FCu;
    SET_GPR_U32(ctx, 31, 0x216504u);
    ctx->pc = 0x216500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2164FCu;
    // 0x216500: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x216504u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x216504u) { return; }
    ctx->pc = 0x216504u;
label_216504:
    // 0x216504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216508: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x216508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21650c: 0x3e00008  jr          $ra
    ctx->pc = 0x21650Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21650Cu;
        // 0x216510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21650Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216514u;
}
