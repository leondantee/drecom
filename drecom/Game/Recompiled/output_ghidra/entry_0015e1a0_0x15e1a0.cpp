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

// Function: entry_0015e1a0
// Address: 0x15e1a0 - 0x15e1f0
void entry_0015e1a0_0x15e1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e1a0_0x15e1a0");
#endif

    switch (ctx->pc) {
        case 0x15e1acu: goto label_15e1ac;
        case 0x15e1b4u: goto label_15e1b4;
        default: break;
    }

    ctx->pc = 0x15e1a0u;

    // 0x15e1a0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15e1a4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x15E1A4u;
    SET_GPR_U32(ctx, 31, 0x15E1ACu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x15E1A4u, 0x15E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E1ACu;
label_15e1ac:
    // 0x15e1ac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x15E1ACu;
    SET_GPR_U32(ctx, 31, 0x15E1B4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x15E1ACu, 0x15E1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E1B4u;
label_15e1b4:
    // 0x15e1b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15e1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e1b8: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x15e1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x15e1bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e1c0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15E1C0u;
    {
        const bool branch_taken_0x15e1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e1c0) {
            ctx->pc = 0x15E238u;
            return;
        }
    }
    ctx->pc = 0x15E1C8u;
    // 0x15e1c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e1cc: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15E1CCu;
    {
        const bool branch_taken_0x15e1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e1cc) {
            ctx->pc = 0x15E220u;
            return;
        }
    }
    ctx->pc = 0x15E1D4u;
    // 0x15e1d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e1d8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15E1D8u;
    {
        const bool branch_taken_0x15e1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e1d8) {
            ctx->pc = 0x15E208u;
            return;
        }
    }
    ctx->pc = 0x15E1E0u;
    // 0x15e1e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E1E0u;
    {
        const bool branch_taken_0x15e1e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e1e0) {
            ctx->pc = 0x15E1F0u;
            return;
        }
    }
    ctx->pc = 0x15E1E8u;
    // 0x15e1e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15E1E8u;
    {
        const bool branch_taken_0x15e1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e1e8) {
            ctx->pc = 0x15E248u;
            return;
        }
    }
    ctx->pc = 0x15E1F0u;
}
