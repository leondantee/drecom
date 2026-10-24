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

// Function: entry_00114b20
// Address: 0x114b20 - 0x114b54
void entry_00114b20_0x114b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114b20_0x114b20");
#endif

    switch (ctx->pc) {
        case 0x114b48u: goto label_114b48;
        default: break;
    }

    ctx->pc = 0x114b20u;

    // 0x114b20: 0x2862ffcb  slti        $v0, $v1, -0x35
    ctx->pc = 0x114b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x114b24: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x114B24u;
    {
        const bool branch_taken_0x114b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B24u;
        // 0x114b28: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b24) {
            ctx->pc = 0x114B74u;
            return;
        }
    }
    ctx->pc = 0x114B2Cu;
    // 0x114b2c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x114b2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x114b30: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x114B30u;
    {
        const bool branch_taken_0x114b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B30u;
        // 0x114b34: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b30) {
            ctx->pc = 0x114B54u;
            return;
        }
    }
    ctx->pc = 0x114B38u;
    // 0x114b38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x114b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b3c: 0xdc50d8b8  ld          $s0, -0x2748($v0)
    ctx->pc = 0x114b3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294957240)));
    // 0x114b40: 0xc045182  jal         func_114608
    ctx->pc = 0x114B40u;
    SET_GPR_U32(ctx, 31, 0x114B48u);
    ctx->pc = 0x114B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B40u;
    // 0x114b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114608u, 0x114B40u, 0x114B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B48u;
label_114b48:
    // 0x114b48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x114b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b4c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x114B4Cu;
    {
        const bool branch_taken_0x114b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B4Cu;
        // 0x114b50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b4c) {
            ctx->pc = 0x114BA8u;
            return;
        }
    }
    ctx->pc = 0x114B54u;
}
