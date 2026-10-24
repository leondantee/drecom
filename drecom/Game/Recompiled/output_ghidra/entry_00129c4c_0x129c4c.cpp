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

// Function: entry_00129c4c
// Address: 0x129c4c - 0x129c9c
void entry_00129c4c_0x129c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129c4c_0x129c4c");
#endif

    switch (ctx->pc) {
        case 0x129c54u: goto label_129c54;
        default: break;
    }

    ctx->pc = 0x129c4cu;

    // 0x129c4c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x129C4Cu;
    SET_GPR_U32(ctx, 31, 0x129C54u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x129C4Cu, 0x129C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C54u;
label_129c54:
    // 0x129c54: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x129c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x129c58: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x129c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x129c5c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x129c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x129c60: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x129C60u;
    {
        const bool branch_taken_0x129c60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x129c60) {
            ctx->pc = 0x129D04u;
            return;
        }
    }
    ctx->pc = 0x129C68u;
    // 0x129c68: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x129c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x129c6c: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x129C6Cu;
    {
        const bool branch_taken_0x129c6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x129c6c) {
            ctx->pc = 0x129D04u;
            return;
        }
    }
    ctx->pc = 0x129C74u;
    // 0x129c74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x129c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x129c78: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x129C78u;
    {
        const bool branch_taken_0x129c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x129c78) {
            ctx->pc = 0x129D04u;
            return;
        }
    }
    ctx->pc = 0x129C80u;
    // 0x129c80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x129c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x129c84: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x129C84u;
    {
        const bool branch_taken_0x129c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x129c84) {
            ctx->pc = 0x129D04u;
            return;
        }
    }
    ctx->pc = 0x129C8Cu;
    // 0x129c8c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x129C8Cu;
    {
        const bool branch_taken_0x129c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x129c8c) {
            ctx->pc = 0x129C9Cu;
            return;
        }
    }
    ctx->pc = 0x129C94u;
    // 0x129c94: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x129C94u;
    {
        const bool branch_taken_0x129c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129c94) {
            ctx->pc = 0x129D34u;
            return;
        }
    }
    ctx->pc = 0x129C9Cu;
}
