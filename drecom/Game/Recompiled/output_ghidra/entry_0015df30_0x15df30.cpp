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

// Function: entry_0015df30
// Address: 0x15df30 - 0x15df80
void entry_0015df30_0x15df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015df30_0x15df30");
#endif

    switch (ctx->pc) {
        case 0x15df3cu: goto label_15df3c;
        case 0x15df44u: goto label_15df44;
        default: break;
    }

    ctx->pc = 0x15df30u;

    // 0x15df30: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15df30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15df34: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x15DF34u;
    SET_GPR_U32(ctx, 31, 0x15DF3Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x15DF34u, 0x15DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF3Cu;
label_15df3c:
    // 0x15df3c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x15DF3Cu;
    SET_GPR_U32(ctx, 31, 0x15DF44u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x15DF3Cu, 0x15DF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF44u;
label_15df44:
    // 0x15df44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15df44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15df48: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x15df48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x15df4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15df50: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15DF50u;
    {
        const bool branch_taken_0x15df50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15df50) {
            ctx->pc = 0x15DFC8u;
            return;
        }
    }
    ctx->pc = 0x15DF58u;
    // 0x15df58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15df58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15df5c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15DF5Cu;
    {
        const bool branch_taken_0x15df5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15df5c) {
            ctx->pc = 0x15DFB0u;
            return;
        }
    }
    ctx->pc = 0x15DF64u;
    // 0x15df64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15df64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15df68: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15DF68u;
    {
        const bool branch_taken_0x15df68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15df68) {
            ctx->pc = 0x15DF98u;
            return;
        }
    }
    ctx->pc = 0x15DF70u;
    // 0x15df70: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DF70u;
    {
        const bool branch_taken_0x15df70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15df70) {
            ctx->pc = 0x15DF80u;
            return;
        }
    }
    ctx->pc = 0x15DF78u;
    // 0x15df78: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15DF78u;
    {
        const bool branch_taken_0x15df78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15df78) {
            ctx->pc = 0x15DFD8u;
            return;
        }
    }
    ctx->pc = 0x15DF80u;
}
