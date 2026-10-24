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

// Function: entry_0011339c
// Address: 0x11339c - 0x1133bc
void entry_0011339c_0x11339c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011339c_0x11339c");
#endif

    switch (ctx->pc) {
        case 0x1133b4u: goto label_1133b4;
        default: break;
    }

    ctx->pc = 0x11339cu;

    // 0x11339c: 0xfc560000  sd          $s6, 0x0($v0)
    ctx->pc = 0x11339cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 22));
    // 0x1133a0: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x1133a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x1133a4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1133A4u;
    {
        const bool branch_taken_0x1133a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1133A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133A4u;
        // 0x1133a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133a4) {
            ctx->pc = 0x1133BCu;
            return;
        }
    }
    ctx->pc = 0x1133ACu;
    // 0x1133ac: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1133ACu;
    SET_GPR_U32(ctx, 31, 0x1133B4u);
    ctx->pc = 0x1133B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1133ACu;
    // 0x1133b0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1133ACu, 0x1133B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133B4u;
label_1133b4:
    // 0x1133b4: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x1133b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1133b8: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1133b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1133bcu;
}
