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

// Function: entry_00125990
// Address: 0x125990 - 0x1259bc
void entry_00125990_0x125990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125990_0x125990");
#endif

    switch (ctx->pc) {
        case 0x125998u: goto label_125998;
        default: break;
    }

    ctx->pc = 0x125990u;

    // 0x125990: 0xc067694  jal         func_19DA50
    ctx->pc = 0x125990u;
    SET_GPR_U32(ctx, 31, 0x125998u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x125990u, 0x125998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125998u;
label_125998:
    // 0x125998: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x125998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12599c: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x12599cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1259a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1259a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1259a4: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1259A4u;
    {
        const bool branch_taken_0x1259a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1259a4) {
            ctx->pc = 0x1259BCu;
            return;
        }
    }
    ctx->pc = 0x1259ACu;
    // 0x1259ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1259ACu;
    {
        const bool branch_taken_0x1259ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1259ac) {
            ctx->pc = 0x1259BCu;
            return;
        }
    }
    ctx->pc = 0x1259B4u;
    // 0x1259b4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1259B4u;
    {
        const bool branch_taken_0x1259b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1259b4) {
            ctx->pc = 0x125A60u;
            return;
        }
    }
    ctx->pc = 0x1259BCu;
}
