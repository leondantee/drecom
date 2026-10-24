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

// Function: entry_00127640
// Address: 0x127640 - 0x12766c
void entry_00127640_0x127640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127640_0x127640");
#endif

    switch (ctx->pc) {
        case 0x127648u: goto label_127648;
        default: break;
    }

    ctx->pc = 0x127640u;

    // 0x127640: 0xc067694  jal         func_19DA50
    ctx->pc = 0x127640u;
    SET_GPR_U32(ctx, 31, 0x127648u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x127640u, 0x127648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127648u;
label_127648:
    // 0x127648: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x127648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12764c: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x12764cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x127650: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x127650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127654: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x127654u;
    {
        const bool branch_taken_0x127654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x127654) {
            ctx->pc = 0x12766Cu;
            return;
        }
    }
    ctx->pc = 0x12765Cu;
    // 0x12765c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12765Cu;
    {
        const bool branch_taken_0x12765c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12765c) {
            ctx->pc = 0x12766Cu;
            return;
        }
    }
    ctx->pc = 0x127664u;
    // 0x127664: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x127664u;
    {
        const bool branch_taken_0x127664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127664) {
            ctx->pc = 0x127710u;
            return;
        }
    }
    ctx->pc = 0x12766Cu;
}
