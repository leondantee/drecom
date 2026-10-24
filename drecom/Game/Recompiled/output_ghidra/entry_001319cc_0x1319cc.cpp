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

// Function: entry_001319cc
// Address: 0x1319cc - 0x131a10
void entry_001319cc_0x1319cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001319cc_0x1319cc");
#endif

    switch (ctx->pc) {
        case 0x1319d4u: goto label_1319d4;
        default: break;
    }

    ctx->pc = 0x1319ccu;

    // 0x1319cc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1319CCu;
    SET_GPR_U32(ctx, 31, 0x1319D4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1319CCu, 0x1319D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1319D4u;
label_1319d4:
    // 0x1319d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1319d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1319d8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1319d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1319dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1319dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1319e0: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1319E0u;
    {
        const bool branch_taken_0x1319e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1319e0) {
            ctx->pc = 0x131A88u;
            return;
        }
    }
    ctx->pc = 0x1319E8u;
    // 0x1319e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1319e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1319ec: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1319ECu;
    {
        const bool branch_taken_0x1319ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1319ec) {
            ctx->pc = 0x131A60u;
            return;
        }
    }
    ctx->pc = 0x1319F4u;
    // 0x1319f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1319f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1319f8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1319F8u;
    {
        const bool branch_taken_0x1319f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1319f8) {
            ctx->pc = 0x131A38u;
            return;
        }
    }
    ctx->pc = 0x131A00u;
    // 0x131a00: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131A00u;
    {
        const bool branch_taken_0x131a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131a00) {
            ctx->pc = 0x131A10u;
            return;
        }
    }
    ctx->pc = 0x131A08u;
    // 0x131a08: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x131A08u;
    {
        const bool branch_taken_0x131a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131a08) {
            ctx->pc = 0x131AA8u;
            return;
        }
    }
    ctx->pc = 0x131A10u;
}
