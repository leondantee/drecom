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

// Function: entry_001117d0
// Address: 0x1117d0 - 0x1117f8
void entry_001117d0_0x1117d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001117d0_0x1117d0");
#endif

    switch (ctx->pc) {
        case 0x1117d8u: goto label_1117d8;
        default: break;
    }

    ctx->pc = 0x1117d0u;

    // 0x1117d0: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1117D0u;
    SET_GPR_U32(ctx, 31, 0x1117D8u);
    ctx->pc = 0x1117D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1117D0u;
    // 0x1117d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1117D0u, 0x1117D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1117D8u;
label_1117d8:
    // 0x1117d8: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1117D8u;
    {
        const bool branch_taken_0x1117d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1117DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117D8u;
        // 0x1117dc: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117d8) {
            ctx->pc = 0x1117F8u;
            return;
        }
    }
    ctx->pc = 0x1117E0u;
    // 0x1117e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1117e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1117e4: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1117e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x1117e8: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x1117e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x1117ec: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x1117ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x1117f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1117F0u;
    {
        const bool branch_taken_0x1117f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117F0u;
        // 0x1117f4: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117f0) {
            ctx->pc = 0x111800u;
            return;
        }
    }
    ctx->pc = 0x1117F8u;
}
