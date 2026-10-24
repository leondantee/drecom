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

// Function: entry_0011cc44
// Address: 0x11cc44 - 0x11cc58
void entry_0011cc44_0x11cc44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cc44_0x11cc44");
#endif

    switch (ctx->pc) {
        case 0x11cc54u: goto label_11cc54;
        default: break;
    }

    ctx->pc = 0x11cc44u;

    // 0x11cc44: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CC44u;
    {
        const bool branch_taken_0x11cc44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cc44) {
            ctx->pc = 0x11CC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CC44u;
            // 0x11cc48: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CC58u;
            return;
        }
    }
    ctx->pc = 0x11CC4Cu;
    // 0x11cc4c: 0xc045f70  jal         func_117DC0
    ctx->pc = 0x11CC4Cu;
    SET_GPR_U32(ctx, 31, 0x11CC54u);
    ctx->pc = 0x11CC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC4Cu;
    // 0x11cc50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117DC0u, 0x11CC4Cu, 0x11CC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC54u;
label_11cc54:
    // 0x11cc54: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x11cc54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x11cc58u;
}
