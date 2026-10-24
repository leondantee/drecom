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

// Function: entry_00127f68
// Address: 0x127f68 - 0x127fa0
void entry_00127f68_0x127f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127f68_0x127f68");
#endif

    switch (ctx->pc) {
        case 0x127f70u: goto label_127f70;
        default: break;
    }

    ctx->pc = 0x127f68u;

    // 0x127f68: 0xc067694  jal         func_19DA50
    ctx->pc = 0x127F68u;
    SET_GPR_U32(ctx, 31, 0x127F70u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x127F68u, 0x127F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127F70u;
label_127f70:
    // 0x127f70: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x127f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x127f74: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x127f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x127f78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x127f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x127f7c: 0x10830033  beq         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x127F7Cu;
    {
        const bool branch_taken_0x127f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x127f7c) {
            ctx->pc = 0x12804Cu;
            return;
        }
    }
    ctx->pc = 0x127F84u;
    // 0x127f84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x127f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127f88: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x127F88u;
    {
        const bool branch_taken_0x127f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x127f88) {
            ctx->pc = 0x127FA0u;
            return;
        }
    }
    ctx->pc = 0x127F90u;
    // 0x127f90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127F90u;
    {
        const bool branch_taken_0x127f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f90) {
            ctx->pc = 0x127FA0u;
            return;
        }
    }
    ctx->pc = 0x127F98u;
    // 0x127f98: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x127F98u;
    {
        const bool branch_taken_0x127f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f98) {
            ctx->pc = 0x128054u;
            return;
        }
    }
    ctx->pc = 0x127FA0u;
}
