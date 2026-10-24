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

// Function: entry_002d93ec
// Address: 0x2d93ec - 0x2d9430
void entry_002d93ec_0x2d93ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d93ec_0x2d93ec");
#endif

    switch (ctx->pc) {
        case 0x2d93f4u: goto label_2d93f4;
        default: break;
    }

    ctx->pc = 0x2d93ecu;

    // 0x2d93ec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D93ECu;
    SET_GPR_U32(ctx, 31, 0x2D93F4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D93ECu, 0x2D93F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D93F4u;
label_2d93f4:
    // 0x2d93f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d93f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d93f8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2d93f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2d93fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d93fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d9400: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D9400u;
    {
        const bool branch_taken_0x2d9400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d9400) {
            ctx->pc = 0x2D9478u;
            return;
        }
    }
    ctx->pc = 0x2D9408u;
    // 0x2d9408: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d9408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d940c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D940Cu;
    {
        const bool branch_taken_0x2d940c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d940c) {
            ctx->pc = 0x2D9460u;
            return;
        }
    }
    ctx->pc = 0x2D9414u;
    // 0x2d9414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9418: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D9418u;
    {
        const bool branch_taken_0x2d9418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d9418) {
            ctx->pc = 0x2D9448u;
            return;
        }
    }
    ctx->pc = 0x2D9420u;
    // 0x2d9420: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9420u;
    {
        const bool branch_taken_0x2d9420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9420) {
            ctx->pc = 0x2D9430u;
            return;
        }
    }
    ctx->pc = 0x2D9428u;
    // 0x2d9428: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D9428u;
    {
        const bool branch_taken_0x2d9428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9428) {
            ctx->pc = 0x2D9488u;
            return;
        }
    }
    ctx->pc = 0x2D9430u;
}
