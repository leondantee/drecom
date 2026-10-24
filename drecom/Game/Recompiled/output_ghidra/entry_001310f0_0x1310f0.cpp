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

// Function: entry_001310f0
// Address: 0x1310f0 - 0x131128
void entry_001310f0_0x1310f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001310f0_0x1310f0");
#endif

    switch (ctx->pc) {
        case 0x1310f8u: goto label_1310f8;
        default: break;
    }

    ctx->pc = 0x1310f0u;

    // 0x1310f0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1310F0u;
    SET_GPR_U32(ctx, 31, 0x1310F8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1310F0u, 0x1310F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310F8u;
label_1310f8:
    // 0x1310f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1310f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1310fc: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1310fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x131100: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x131100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x131104: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x131104u;
    {
        const bool branch_taken_0x131104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131104) {
            ctx->pc = 0x131188u;
            return;
        }
    }
    ctx->pc = 0x13110Cu;
    // 0x13110c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13110cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131110: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x131110u;
    {
        const bool branch_taken_0x131110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131110) {
            ctx->pc = 0x131158u;
            return;
        }
    }
    ctx->pc = 0x131118u;
    // 0x131118: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131118u;
    {
        const bool branch_taken_0x131118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131118) {
            ctx->pc = 0x131128u;
            return;
        }
    }
    ctx->pc = 0x131120u;
    // 0x131120: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x131120u;
    {
        const bool branch_taken_0x131120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131120) {
            ctx->pc = 0x131128u;
            return;
        }
    }
    ctx->pc = 0x131128u;
}
