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

// Function: entry_00119dbc
// Address: 0x119dbc - 0x119dd0
void entry_00119dbc_0x119dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119dbc_0x119dbc");
#endif

    switch (ctx->pc) {
        case 0x119dc4u: goto label_119dc4;
        default: break;
    }

    ctx->pc = 0x119dbcu;

    // 0x119dbc: 0xc046cc4  jal         func_11B310
    ctx->pc = 0x119DBCu;
    SET_GPR_U32(ctx, 31, 0x119DC4u);
    ctx->pc = 0x119DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119DBCu;
    // 0x119dc0: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B310u;
    {
        ctx->pc = 0x119DC4u;
        ps2_stubs::vfprintf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x119DC4u) { return; }
    ctx->pc = 0x119DC4u;
label_119dc4:
    // 0x119dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x119DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119DC8u;
        // 0x119dcc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119DD0u;
}
