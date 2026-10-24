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

// Function: entry_00128188
// Address: 0x128188 - 0x1281b4
void entry_00128188_0x128188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128188_0x128188");
#endif

    switch (ctx->pc) {
        case 0x128190u: goto label_128190;
        default: break;
    }

    ctx->pc = 0x128188u;

    // 0x128188: 0xc067694  jal         func_19DA50
    ctx->pc = 0x128188u;
    SET_GPR_U32(ctx, 31, 0x128190u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x128188u, 0x128190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128190u;
label_128190:
    // 0x128190: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x128190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x128194: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x128194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x128198: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x128198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12819c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12819Cu;
    {
        const bool branch_taken_0x12819c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12819c) {
            ctx->pc = 0x1281B4u;
            return;
        }
    }
    ctx->pc = 0x1281A4u;
    // 0x1281a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1281A4u;
    {
        const bool branch_taken_0x1281a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1281a4) {
            ctx->pc = 0x1281B4u;
            return;
        }
    }
    ctx->pc = 0x1281ACu;
    // 0x1281ac: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1281ACu;
    {
        const bool branch_taken_0x1281ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1281ac) {
            ctx->pc = 0x128204u;
            return;
        }
    }
    ctx->pc = 0x1281B4u;
}
