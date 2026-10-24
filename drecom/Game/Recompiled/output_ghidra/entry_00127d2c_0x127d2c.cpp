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

// Function: entry_00127d2c
// Address: 0x127d2c - 0x127d58
void entry_00127d2c_0x127d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127d2c_0x127d2c");
#endif

    switch (ctx->pc) {
        case 0x127d34u: goto label_127d34;
        default: break;
    }

    ctx->pc = 0x127d2cu;

    // 0x127d2c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x127D2Cu;
    SET_GPR_U32(ctx, 31, 0x127D34u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x127D2Cu, 0x127D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127D34u;
label_127d34:
    // 0x127d34: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x127d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x127d38: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x127d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x127d3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x127d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127d40: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x127D40u;
    {
        const bool branch_taken_0x127d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x127d40) {
            ctx->pc = 0x127D58u;
            return;
        }
    }
    ctx->pc = 0x127D48u;
    // 0x127d48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127D48u;
    {
        const bool branch_taken_0x127d48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x127d48) {
            ctx->pc = 0x127D58u;
            return;
        }
    }
    ctx->pc = 0x127D50u;
    // 0x127d50: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x127D50u;
    {
        const bool branch_taken_0x127d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127d50) {
            ctx->pc = 0x127E04u;
            return;
        }
    }
    ctx->pc = 0x127D58u;
}
