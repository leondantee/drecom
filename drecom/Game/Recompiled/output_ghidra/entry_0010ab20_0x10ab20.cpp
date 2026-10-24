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

// Function: entry_0010ab20
// Address: 0x10ab20 - 0x10ab4c
void entry_0010ab20_0x10ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ab20_0x10ab20");
#endif

    switch (ctx->pc) {
        case 0x10ab44u: goto label_10ab44;
        default: break;
    }

    ctx->pc = 0x10ab20u;

    // 0x10ab20: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10ab24: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x10ab24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10ab28: 0x8c433dac  lw          $v1, 0x3DAC($v0)
    ctx->pc = 0x10ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DACu));
    // 0x10ab2c: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10AB2Cu;
    {
        const bool branch_taken_0x10ab2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB2Cu;
        // 0x10ab30: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab2c) {
            ctx->pc = 0x10AB4Cu;
            return;
        }
    }
    ctx->pc = 0x10AB34u;
    // 0x10ab34: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10ab38: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x10ab38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x10ab3c: 0xc0421ee  jal         func_1087B8
    ctx->pc = 0x10AB3Cu;
    SET_GPR_U32(ctx, 31, 0x10AB44u);
    ctx->pc = 0x10AB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB3Cu;
    // 0x10ab40: 0x8c443c04  lw          $a0, 0x3C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15364)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1087B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087B8u, 0x10AB3Cu, 0x10AB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB44u;
label_10ab44:
    // 0x10ab44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10AB44u;
    {
        const bool branch_taken_0x10ab44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB44u;
        // 0x10ab48: 0xae003d1c  sw          $zero, 0x3D1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 15644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab44) {
            ctx->pc = 0x10AB64u;
            return;
        }
    }
    ctx->pc = 0x10AB4Cu;
}
