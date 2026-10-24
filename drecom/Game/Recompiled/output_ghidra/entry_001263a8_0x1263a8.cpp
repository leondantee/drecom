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

// Function: entry_001263a8
// Address: 0x1263a8 - 0x126404
void entry_001263a8_0x1263a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001263a8_0x1263a8");
#endif

    switch (ctx->pc) {
        case 0x1263b0u: goto label_1263b0;
        default: break;
    }

    ctx->pc = 0x1263a8u;

    // 0x1263a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1263A8u;
    SET_GPR_U32(ctx, 31, 0x1263B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1263A8u, 0x1263B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1263B0u;
label_1263b0:
    // 0x1263b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1263b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1263b4: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x1263b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1263b8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1263b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1263bc: 0x10830040  beq         $a0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1263BCu;
    {
        const bool branch_taken_0x1263bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1263bc) {
            ctx->pc = 0x1264C0u;
            return;
        }
    }
    ctx->pc = 0x1263C4u;
    // 0x1263c4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1263c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1263c8: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1263C8u;
    {
        const bool branch_taken_0x1263c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1263c8) {
            ctx->pc = 0x12646Cu;
            return;
        }
    }
    ctx->pc = 0x1263D0u;
    // 0x1263d0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1263d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1263d4: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1263D4u;
    {
        const bool branch_taken_0x1263d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1263d4) {
            ctx->pc = 0x12646Cu;
            return;
        }
    }
    ctx->pc = 0x1263DCu;
    // 0x1263dc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1263dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1263e0: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1263E0u;
    {
        const bool branch_taken_0x1263e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1263e0) {
            ctx->pc = 0x12646Cu;
            return;
        }
    }
    ctx->pc = 0x1263E8u;
    // 0x1263e8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1263e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1263ec: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1263ECu;
    {
        const bool branch_taken_0x1263ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1263ec) {
            ctx->pc = 0x12646Cu;
            return;
        }
    }
    ctx->pc = 0x1263F4u;
    // 0x1263f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1263F4u;
    {
        const bool branch_taken_0x1263f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1263f4) {
            ctx->pc = 0x126404u;
            return;
        }
    }
    ctx->pc = 0x1263FCu;
    // 0x1263fc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1263FCu;
    {
        const bool branch_taken_0x1263fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1263fc) {
            ctx->pc = 0x126508u;
            return;
        }
    }
    ctx->pc = 0x126404u;
}
