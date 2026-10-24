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

// Function: entry_00123ca0
// Address: 0x123ca0 - 0x123cf8
void entry_00123ca0_0x123ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123ca0_0x123ca0");
#endif

    switch (ctx->pc) {
        case 0x123cb4u: goto label_123cb4;
        case 0x123cd0u: goto label_123cd0;
        default: break;
    }

    ctx->pc = 0x123ca0u;

    // 0x123ca0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x123ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x123ca4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x123CA4u;
    {
        const bool branch_taken_0x123ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123ca4) {
            ctx->pc = 0x123C58u;
            return;
        }
    }
    ctx->pc = 0x123CACu;
    // 0x123cac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x123CACu;
    SET_GPR_U32(ctx, 31, 0x123CB4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x123CACu, 0x123CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CB4u;
label_123cb4:
    // 0x123cb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x123cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x123cb8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x123cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x123cbc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x123cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x123cc0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123cc4: 0xa482000e  sh          $v0, 0xE($a0)
    ctx->pc = 0x123cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x123cc8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x123CC8u;
    SET_GPR_U32(ctx, 31, 0x123CD0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x123CC8u, 0x123CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CD0u;
label_123cd0:
    // 0x123cd0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x123cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x123cd4: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x123cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x123cd8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x123CD8u;
    {
        const bool branch_taken_0x123cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123cd8) {
            ctx->pc = 0x123CF8u;
            return;
        }
    }
    ctx->pc = 0x123CE0u;
    // 0x123ce0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x123ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123ce4: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x123ce4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x123ce8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x123ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x123cec: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x123cecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x123cf0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x123CF0u;
    {
        const bool branch_taken_0x123cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123cf0) {
            ctx->pc = 0x123D20u;
            return;
        }
    }
    ctx->pc = 0x123CF8u;
}
