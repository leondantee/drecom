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

// Function: entry_00213d9c
// Address: 0x213d9c - 0x213dcc
void entry_00213d9c_0x213d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213d9c_0x213d9c");
#endif

    switch (ctx->pc) {
        case 0x213db4u: goto label_213db4;
        default: break;
    }

    ctx->pc = 0x213d9cu;

    // 0x213d9c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x213d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x213da0: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x213da0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x213da4: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x213da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x213da8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x213da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x213dac: 0xc084edc  jal         func_213B70
    ctx->pc = 0x213DACu;
    SET_GPR_U32(ctx, 31, 0x213DB4u);
    ctx->pc = 0x213DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213DACu;
    // 0x213db0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213B70u;
    {
        ctx->pc = 0x213DB4u;
        ps2_stubs::sceDeci2ExRecv(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213DB4u) { return; }
    ctx->pc = 0x213DB4u;
label_213db4:
    // 0x213db4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x213db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213db8: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213DB8u;
    {
        const bool branch_taken_0x213db8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x213db8) {
            ctx->pc = 0x213DCCu;
            return;
        }
    }
    ctx->pc = 0x213DC0u;
    // 0x213dc0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x213dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x213dc4: 0xc0852d4  jal         func_214B50
    ctx->pc = 0x213DC4u;
    SET_GPR_U32(ctx, 31, 0x213DCCu);
    ctx->pc = 0x213DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213DC4u;
    // 0x213dc8: 0x24840ef8  addiu       $a0, $a0, 0xEF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B50u, 0x213DC4u, 0x213DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DCCu;
}
