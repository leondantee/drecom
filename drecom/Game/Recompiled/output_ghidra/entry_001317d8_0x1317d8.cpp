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

// Function: entry_001317d8
// Address: 0x1317d8 - 0x131810
void entry_001317d8_0x1317d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001317d8_0x1317d8");
#endif

    switch (ctx->pc) {
        case 0x1317e0u: goto label_1317e0;
        default: break;
    }

    ctx->pc = 0x1317d8u;

    // 0x1317d8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1317D8u;
    SET_GPR_U32(ctx, 31, 0x1317E0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1317D8u, 0x1317E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1317E0u;
label_1317e0:
    // 0x1317e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1317e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1317e4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1317e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1317e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1317e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1317ec: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1317ECu;
    {
        const bool branch_taken_0x1317ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1317ec) {
            ctx->pc = 0x131870u;
            return;
        }
    }
    ctx->pc = 0x1317F4u;
    // 0x1317f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1317f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1317f8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1317F8u;
    {
        const bool branch_taken_0x1317f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1317f8) {
            ctx->pc = 0x131840u;
            return;
        }
    }
    ctx->pc = 0x131800u;
    // 0x131800: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131800u;
    {
        const bool branch_taken_0x131800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131800) {
            ctx->pc = 0x131810u;
            return;
        }
    }
    ctx->pc = 0x131808u;
    // 0x131808: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x131808u;
    {
        const bool branch_taken_0x131808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131808) {
            ctx->pc = 0x131810u;
            return;
        }
    }
    ctx->pc = 0x131810u;
}
