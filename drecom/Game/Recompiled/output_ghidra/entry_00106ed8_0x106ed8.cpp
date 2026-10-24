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

// Function: entry_00106ed8
// Address: 0x106ed8 - 0x106ef8
void entry_00106ed8_0x106ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106ed8_0x106ed8");
#endif

    switch (ctx->pc) {
        case 0x106ef4u: goto label_106ef4;
        default: break;
    }

    ctx->pc = 0x106ed8u;

    // 0x106ed8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x106ed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106edc: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x106edcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x106ee0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106EE0u;
    {
        const bool branch_taken_0x106ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EE0u;
        // 0x106ee4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ee0) {
            ctx->pc = 0x106EF8u;
            return;
        }
    }
    ctx->pc = 0x106EE8u;
    // 0x106ee8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x106ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x106eec: 0xc042928  jal         func_10A4A0
    ctx->pc = 0x106EECu;
    SET_GPR_U32(ctx, 31, 0x106EF4u);
    ctx->pc = 0x106EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106EECu;
    // 0x106ef0: 0x8c443bf4  lw          $a0, 0x3BF4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4A0u, 0x106EECu, 0x106EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106EF4u;
label_106ef4:
    // 0x106ef4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x106ef8u;
}
