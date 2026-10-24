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

// Function: entry_001a1a18
// Address: 0x1a1a18 - 0x1a1a40
void entry_001a1a18_0x1a1a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1a18_0x1a1a18");
#endif

    switch (ctx->pc) {
        case 0x1a1a20u: goto label_1a1a20;
        case 0x1a1a34u: goto label_1a1a34;
        default: break;
    }

    ctx->pc = 0x1a1a18u;

    // 0x1a1a18: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x1A1A18u;
    SET_GPR_U32(ctx, 31, 0x1A1A20u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x1A1A18u, 0x1A1A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A20u;
label_1a1a20:
    // 0x1a1a20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1A20u;
    {
        const bool branch_taken_0x1a1a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a20) {
            ctx->pc = 0x1A1A40u;
            return;
        }
    }
    ctx->pc = 0x1A1A28u;
    // 0x1a1a28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a1a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1a2c: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1A1A2Cu;
    SET_GPR_U32(ctx, 31, 0x1A1A34u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1A1A2Cu, 0x1A1A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A34u;
label_1a1a34:
    // 0x1a1a34: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x1a1a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a1a38: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A1A38u;
    {
        const bool branch_taken_0x1a1a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a38) {
            ctx->pc = 0x1A1A80u;
            return;
        }
    }
    ctx->pc = 0x1A1A40u;
}
