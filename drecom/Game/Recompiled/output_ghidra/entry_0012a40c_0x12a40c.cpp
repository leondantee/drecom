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

// Function: entry_0012a40c
// Address: 0x12a40c - 0x12a45c
void entry_0012a40c_0x12a40c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a40c_0x12a40c");
#endif

    switch (ctx->pc) {
        case 0x12a414u: goto label_12a414;
        default: break;
    }

    ctx->pc = 0x12a40cu;

    // 0x12a40c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12A40Cu;
    SET_GPR_U32(ctx, 31, 0x12A414u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12A40Cu, 0x12A414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A414u;
label_12a414:
    // 0x12a414: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12a414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12a418: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x12a418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x12a41c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x12a41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12a420: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x12A420u;
    {
        const bool branch_taken_0x12a420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12a420) {
            ctx->pc = 0x12A4C4u;
            return;
        }
    }
    ctx->pc = 0x12A428u;
    // 0x12a428: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x12a428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12a42c: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x12A42Cu;
    {
        const bool branch_taken_0x12a42c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12a42c) {
            ctx->pc = 0x12A4C4u;
            return;
        }
    }
    ctx->pc = 0x12A434u;
    // 0x12a434: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12a434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12a438: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x12A438u;
    {
        const bool branch_taken_0x12a438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12a438) {
            ctx->pc = 0x12A4C4u;
            return;
        }
    }
    ctx->pc = 0x12A440u;
    // 0x12a440: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12a440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12a444: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x12A444u;
    {
        const bool branch_taken_0x12a444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12a444) {
            ctx->pc = 0x12A4C4u;
            return;
        }
    }
    ctx->pc = 0x12A44Cu;
    // 0x12a44c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A44Cu;
    {
        const bool branch_taken_0x12a44c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a44c) {
            ctx->pc = 0x12A45Cu;
            return;
        }
    }
    ctx->pc = 0x12A454u;
    // 0x12a454: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x12A454u;
    {
        const bool branch_taken_0x12a454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a454) {
            ctx->pc = 0x12A4F4u;
            return;
        }
    }
    ctx->pc = 0x12A45Cu;
}
