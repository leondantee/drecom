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

// Function: entry_00128304
// Address: 0x128304 - 0x12833c
void entry_00128304_0x128304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128304_0x128304");
#endif

    switch (ctx->pc) {
        case 0x12830cu: goto label_12830c;
        default: break;
    }

    ctx->pc = 0x128304u;

    // 0x128304: 0xc067694  jal         func_19DA50
    ctx->pc = 0x128304u;
    SET_GPR_U32(ctx, 31, 0x12830Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x128304u, 0x12830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12830Cu;
label_12830c:
    // 0x12830c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12830cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x128310: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x128310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x128314: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x128314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128318: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x128318u;
    {
        const bool branch_taken_0x128318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x128318) {
            ctx->pc = 0x12838Cu;
            return;
        }
    }
    ctx->pc = 0x128320u;
    // 0x128320: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x128320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128324: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x128324u;
    {
        const bool branch_taken_0x128324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x128324) {
            ctx->pc = 0x12833Cu;
            return;
        }
    }
    ctx->pc = 0x12832Cu;
    // 0x12832c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12832Cu;
    {
        const bool branch_taken_0x12832c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12832c) {
            ctx->pc = 0x12833Cu;
            return;
        }
    }
    ctx->pc = 0x128334u;
    // 0x128334: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x128334u;
    {
        const bool branch_taken_0x128334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128334) {
            ctx->pc = 0x128394u;
            return;
        }
    }
    ctx->pc = 0x12833Cu;
}
